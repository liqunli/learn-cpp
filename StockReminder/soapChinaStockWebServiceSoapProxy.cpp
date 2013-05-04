/* soapChinaStockWebServiceSoapProxy.cpp
   Generated by gSOAP 2.8.14 from stock.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapChinaStockWebServiceSoapProxy.h"

ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy()
{	ChinaStockWebServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy(const struct soap &_soap) : soap(_soap)
{ }

ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy(const char *url)
{	ChinaStockWebServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy(soap_mode iomode)
{	ChinaStockWebServiceSoapProxy_init(iomode, iomode);
}

ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy(const char *url, soap_mode iomode)
{	ChinaStockWebServiceSoapProxy_init(iomode, iomode);
	soap_endpoint = url;
}

ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy(soap_mode imode, soap_mode omode)
{	ChinaStockWebServiceSoapProxy_init(imode, omode);
}

ChinaStockWebServiceSoapProxy::~ChinaStockWebServiceSoapProxy()
{ }

void ChinaStockWebServiceSoapProxy::ChinaStockWebServiceSoapProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns1", "http://WebXml.com.cn/", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void ChinaStockWebServiceSoapProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void ChinaStockWebServiceSoapProxy::reset()
{	destroy();
	soap_done(this);
	soap_init(this);
	ChinaStockWebServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ChinaStockWebServiceSoapProxy::soap_noheader()
{	this->header = NULL;
}

const SOAP_ENV__Header *ChinaStockWebServiceSoapProxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *ChinaStockWebServiceSoapProxy::soap_fault()
{	return this->fault;
}

const char *ChinaStockWebServiceSoapProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *ChinaStockWebServiceSoapProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int ChinaStockWebServiceSoapProxy::soap_close_socket()
{	return soap_closesock(this);
}

int ChinaStockWebServiceSoapProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void ChinaStockWebServiceSoapProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ChinaStockWebServiceSoapProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *ChinaStockWebServiceSoapProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int ChinaStockWebServiceSoapProxy::getStockImageByCode(const char *endpoint, const char *soap_action, _ns1__getStockImageByCode *ns1__getStockImageByCode, _ns1__getStockImageByCodeResponse *ns1__getStockImageByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImageByCode soap_tmp___ns1__getStockImageByCode;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImageByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImageByCode.ns1__getStockImageByCode = ns1__getStockImageByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImageByCode(soap, &soap_tmp___ns1__getStockImageByCode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImageByCode(soap, &soap_tmp___ns1__getStockImageByCode, "-ns1:getStockImageByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImageByCode(soap, &soap_tmp___ns1__getStockImageByCode, "-ns1:getStockImageByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImageByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImageByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImageByCodeResponse->soap_get(soap, "ns1:getStockImageByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImageByteByCode(const char *endpoint, const char *soap_action, _ns1__getStockImageByteByCode *ns1__getStockImageByteByCode, _ns1__getStockImageByteByCodeResponse *ns1__getStockImageByteByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImageByteByCode soap_tmp___ns1__getStockImageByteByCode;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImageByteByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImageByteByCode.ns1__getStockImageByteByCode = ns1__getStockImageByteByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImageByteByCode(soap, &soap_tmp___ns1__getStockImageByteByCode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImageByteByCode(soap, &soap_tmp___ns1__getStockImageByteByCode, "-ns1:getStockImageByteByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImageByteByCode(soap, &soap_tmp___ns1__getStockImageByteByCode, "-ns1:getStockImageByteByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImageByteByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImageByteByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImageByteByCodeResponse->soap_get(soap, "ns1:getStockImageByteByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImage_USCOREkByCode(const char *endpoint, const char *soap_action, _ns1__getStockImage_USCOREkByCode *ns1__getStockImage_USCOREkByCode, _ns1__getStockImage_USCOREkByCodeResponse *ns1__getStockImage_USCOREkByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImage_USCOREkByCode soap_tmp___ns1__getStockImage_USCOREkByCode;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImage_kByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImage_USCOREkByCode.ns1__getStockImage_USCOREkByCode = ns1__getStockImage_USCOREkByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImage_USCOREkByCode(soap, &soap_tmp___ns1__getStockImage_USCOREkByCode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImage_USCOREkByCode(soap, &soap_tmp___ns1__getStockImage_USCOREkByCode, "-ns1:getStockImage_kByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImage_USCOREkByCode(soap, &soap_tmp___ns1__getStockImage_USCOREkByCode, "-ns1:getStockImage_kByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImage_USCOREkByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByCodeResponse->soap_get(soap, "ns1:getStockImage_kByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImage_USCOREkByteByCode(const char *endpoint, const char *soap_action, _ns1__getStockImage_USCOREkByteByCode *ns1__getStockImage_USCOREkByteByCode, _ns1__getStockImage_USCOREkByteByCodeResponse *ns1__getStockImage_USCOREkByteByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImage_USCOREkByteByCode soap_tmp___ns1__getStockImage_USCOREkByteByCode;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImage_kByteByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImage_USCOREkByteByCode.ns1__getStockImage_USCOREkByteByCode = ns1__getStockImage_USCOREkByteByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImage_USCOREkByteByCode(soap, &soap_tmp___ns1__getStockImage_USCOREkByteByCode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImage_USCOREkByteByCode(soap, &soap_tmp___ns1__getStockImage_USCOREkByteByCode, "-ns1:getStockImage_kByteByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImage_USCOREkByteByCode(soap, &soap_tmp___ns1__getStockImage_USCOREkByteByCode, "-ns1:getStockImage_kByteByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImage_USCOREkByteByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByteByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByteByCodeResponse->soap_get(soap, "ns1:getStockImage_kByteByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockInfoByCode(const char *endpoint, const char *soap_action, _ns1__getStockInfoByCode *ns1__getStockInfoByCode, _ns1__getStockInfoByCodeResponse *ns1__getStockInfoByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockInfoByCode soap_tmp___ns1__getStockInfoByCode;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockInfoByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockInfoByCode.ns1__getStockInfoByCode = ns1__getStockInfoByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockInfoByCode(soap, &soap_tmp___ns1__getStockInfoByCode);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockInfoByCode(soap, &soap_tmp___ns1__getStockInfoByCode, "-ns1:getStockInfoByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockInfoByCode(soap, &soap_tmp___ns1__getStockInfoByCode, "-ns1:getStockInfoByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockInfoByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockInfoByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockInfoByCodeResponse->soap_get(soap, "ns1:getStockInfoByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImageByCode_(const char *endpoint, const char *soap_action, _ns1__getStockImageByCode *ns1__getStockImageByCode, _ns1__getStockImageByCodeResponse *ns1__getStockImageByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImageByCode_ soap_tmp___ns1__getStockImageByCode_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImageByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImageByCode_.ns1__getStockImageByCode = ns1__getStockImageByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImageByCode_(soap, &soap_tmp___ns1__getStockImageByCode_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImageByCode_(soap, &soap_tmp___ns1__getStockImageByCode_, "-ns1:getStockImageByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImageByCode_(soap, &soap_tmp___ns1__getStockImageByCode_, "-ns1:getStockImageByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImageByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImageByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImageByCodeResponse->soap_get(soap, "ns1:getStockImageByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImageByteByCode_(const char *endpoint, const char *soap_action, _ns1__getStockImageByteByCode *ns1__getStockImageByteByCode, _ns1__getStockImageByteByCodeResponse *ns1__getStockImageByteByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImageByteByCode_ soap_tmp___ns1__getStockImageByteByCode_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImageByteByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImageByteByCode_.ns1__getStockImageByteByCode = ns1__getStockImageByteByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImageByteByCode_(soap, &soap_tmp___ns1__getStockImageByteByCode_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImageByteByCode_(soap, &soap_tmp___ns1__getStockImageByteByCode_, "-ns1:getStockImageByteByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImageByteByCode_(soap, &soap_tmp___ns1__getStockImageByteByCode_, "-ns1:getStockImageByteByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImageByteByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImageByteByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImageByteByCodeResponse->soap_get(soap, "ns1:getStockImageByteByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImage_USCOREkByCode_(const char *endpoint, const char *soap_action, _ns1__getStockImage_USCOREkByCode *ns1__getStockImage_USCOREkByCode, _ns1__getStockImage_USCOREkByCodeResponse *ns1__getStockImage_USCOREkByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImage_USCOREkByCode_ soap_tmp___ns1__getStockImage_USCOREkByCode_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImage_kByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImage_USCOREkByCode_.ns1__getStockImage_USCOREkByCode = ns1__getStockImage_USCOREkByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImage_USCOREkByCode_(soap, &soap_tmp___ns1__getStockImage_USCOREkByCode_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImage_USCOREkByCode_(soap, &soap_tmp___ns1__getStockImage_USCOREkByCode_, "-ns1:getStockImage_kByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImage_USCOREkByCode_(soap, &soap_tmp___ns1__getStockImage_USCOREkByCode_, "-ns1:getStockImage_kByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImage_USCOREkByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByCodeResponse->soap_get(soap, "ns1:getStockImage_kByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockImage_USCOREkByteByCode_(const char *endpoint, const char *soap_action, _ns1__getStockImage_USCOREkByteByCode *ns1__getStockImage_USCOREkByteByCode, _ns1__getStockImage_USCOREkByteByCodeResponse *ns1__getStockImage_USCOREkByteByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockImage_USCOREkByteByCode_ soap_tmp___ns1__getStockImage_USCOREkByteByCode_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockImage_kByteByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockImage_USCOREkByteByCode_.ns1__getStockImage_USCOREkByteByCode = ns1__getStockImage_USCOREkByteByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockImage_USCOREkByteByCode_(soap, &soap_tmp___ns1__getStockImage_USCOREkByteByCode_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockImage_USCOREkByteByCode_(soap, &soap_tmp___ns1__getStockImage_USCOREkByteByCode_, "-ns1:getStockImage_kByteByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockImage_USCOREkByteByCode_(soap, &soap_tmp___ns1__getStockImage_USCOREkByteByCode_, "-ns1:getStockImage_kByteByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockImage_USCOREkByteByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByteByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockImage_USCOREkByteByCodeResponse->soap_get(soap, "ns1:getStockImage_kByteByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int ChinaStockWebServiceSoapProxy::getStockInfoByCode_(const char *endpoint, const char *soap_action, _ns1__getStockInfoByCode *ns1__getStockInfoByCode, _ns1__getStockInfoByCodeResponse *ns1__getStockInfoByCodeResponse)
{	struct soap *soap = this;
	struct __ns1__getStockInfoByCode_ soap_tmp___ns1__getStockInfoByCode_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://webservice.webxml.com.cn/WebServices/ChinaStockWebService.asmx";
	if (soap_action == NULL)
		soap_action = "http://WebXml.com.cn/getStockInfoByCode";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__getStockInfoByCode_.ns1__getStockInfoByCode = ns1__getStockInfoByCode;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__getStockInfoByCode_(soap, &soap_tmp___ns1__getStockInfoByCode_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__getStockInfoByCode_(soap, &soap_tmp___ns1__getStockInfoByCode_, "-ns1:getStockInfoByCode", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__getStockInfoByCode_(soap, &soap_tmp___ns1__getStockInfoByCode_, "-ns1:getStockInfoByCode", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__getStockInfoByCodeResponse)
		return soap_closesock(soap);
	ns1__getStockInfoByCodeResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__getStockInfoByCodeResponse->soap_get(soap, "ns1:getStockInfoByCodeResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
