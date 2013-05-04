/* soapStub.h
   Generated by gSOAP 2.8.14 from stock.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#define SOAP_NAMESPACE_OF_ns1	"http://WebXml.com.cn/"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20814
# error "GSOAP VERSION MISMATCH IN GENERATED CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (7)
/* Base64 schema type: */
class SOAP_CMAC xsd__base64Binary
{
public:
	unsigned char *__ptr;
	int __size;
	char *id;	/* optional element of type xsd:string */
	char *type;	/* optional element of type xsd:string */
	char *options;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 7; } /* = unique id SOAP_TYPE_xsd__base64Binary */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__base64Binary() { xsd__base64Binary::soap_default(NULL); }
	virtual ~xsd__base64Binary() { }
};
#endif

#ifndef SOAP_TYPE_ns1__ArrayOfString
#define SOAP_TYPE_ns1__ArrayOfString (12)
/* ns1:ArrayOfString */
class SOAP_CMAC ns1__ArrayOfString
{
public:
	int __sizestring;	/* sequence of elements <string> */
	char **string;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 12; } /* = unique id SOAP_TYPE_ns1__ArrayOfString */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__ArrayOfString() { ns1__ArrayOfString::soap_default(NULL); }
	virtual ~ns1__ArrayOfString() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImageByCode
#define SOAP_TYPE__ns1__getStockImageByCode (13)
/* ns1:getStockImageByCode */
class SOAP_CMAC _ns1__getStockImageByCode
{
public:
	char *theStockCode;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 13; } /* = unique id SOAP_TYPE__ns1__getStockImageByCode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImageByCode() { _ns1__getStockImageByCode::soap_default(NULL); }
	virtual ~_ns1__getStockImageByCode() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImageByCodeResponse
#define SOAP_TYPE__ns1__getStockImageByCodeResponse (14)
/* ns1:getStockImageByCodeResponse */
class SOAP_CMAC _ns1__getStockImageByCodeResponse
{
public:
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 14; } /* = unique id SOAP_TYPE__ns1__getStockImageByCodeResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImageByCodeResponse() { _ns1__getStockImageByCodeResponse::soap_default(NULL); }
	virtual ~_ns1__getStockImageByCodeResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImageByteByCode
#define SOAP_TYPE__ns1__getStockImageByteByCode (15)
/* ns1:getStockImageByteByCode */
class SOAP_CMAC _ns1__getStockImageByteByCode
{
public:
	char *theStockCode;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 15; } /* = unique id SOAP_TYPE__ns1__getStockImageByteByCode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImageByteByCode() { _ns1__getStockImageByteByCode::soap_default(NULL); }
	virtual ~_ns1__getStockImageByteByCode() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImageByteByCodeResponse
#define SOAP_TYPE__ns1__getStockImageByteByCodeResponse (16)
/* ns1:getStockImageByteByCodeResponse */
class SOAP_CMAC _ns1__getStockImageByteByCodeResponse
{
public:
	xsd__base64Binary *getStockImageByteByCodeResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:base64Binary */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 16; } /* = unique id SOAP_TYPE__ns1__getStockImageByteByCodeResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImageByteByCodeResponse() { _ns1__getStockImageByteByCodeResponse::soap_default(NULL); }
	virtual ~_ns1__getStockImageByteByCodeResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImage_USCOREkByCode
#define SOAP_TYPE__ns1__getStockImage_USCOREkByCode (17)
/* ns1:getStockImage_kByCode */
class SOAP_CMAC _ns1__getStockImage_USCOREkByCode
{
public:
	char *theStockCode;	/* optional element of type xsd:string */
	char *theType;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 17; } /* = unique id SOAP_TYPE__ns1__getStockImage_USCOREkByCode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImage_USCOREkByCode() { _ns1__getStockImage_USCOREkByCode::soap_default(NULL); }
	virtual ~_ns1__getStockImage_USCOREkByCode() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImage_USCOREkByCodeResponse
#define SOAP_TYPE__ns1__getStockImage_USCOREkByCodeResponse (18)
/* ns1:getStockImage_kByCodeResponse */
class SOAP_CMAC _ns1__getStockImage_USCOREkByCodeResponse
{
public:
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 18; } /* = unique id SOAP_TYPE__ns1__getStockImage_USCOREkByCodeResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImage_USCOREkByCodeResponse() { _ns1__getStockImage_USCOREkByCodeResponse::soap_default(NULL); }
	virtual ~_ns1__getStockImage_USCOREkByCodeResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImage_USCOREkByteByCode
#define SOAP_TYPE__ns1__getStockImage_USCOREkByteByCode (19)
/* ns1:getStockImage_kByteByCode */
class SOAP_CMAC _ns1__getStockImage_USCOREkByteByCode
{
public:
	char *theStockCode;	/* optional element of type xsd:string */
	char *theType;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 19; } /* = unique id SOAP_TYPE__ns1__getStockImage_USCOREkByteByCode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImage_USCOREkByteByCode() { _ns1__getStockImage_USCOREkByteByCode::soap_default(NULL); }
	virtual ~_ns1__getStockImage_USCOREkByteByCode() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockImage_USCOREkByteByCodeResponse
#define SOAP_TYPE__ns1__getStockImage_USCOREkByteByCodeResponse (20)
/* ns1:getStockImage_kByteByCodeResponse */
class SOAP_CMAC _ns1__getStockImage_USCOREkByteByCodeResponse
{
public:
	xsd__base64Binary *getStockImage_USCOREkByteByCodeResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:base64Binary */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 20; } /* = unique id SOAP_TYPE__ns1__getStockImage_USCOREkByteByCodeResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockImage_USCOREkByteByCodeResponse() { _ns1__getStockImage_USCOREkByteByCodeResponse::soap_default(NULL); }
	virtual ~_ns1__getStockImage_USCOREkByteByCodeResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockInfoByCode
#define SOAP_TYPE__ns1__getStockInfoByCode (21)
/* ns1:getStockInfoByCode */
class SOAP_CMAC _ns1__getStockInfoByCode
{
public:
	char *theStockCode;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 21; } /* = unique id SOAP_TYPE__ns1__getStockInfoByCode */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockInfoByCode() { _ns1__getStockInfoByCode::soap_default(NULL); }
	virtual ~_ns1__getStockInfoByCode() { }
};
#endif

#ifndef SOAP_TYPE__ns1__getStockInfoByCodeResponse
#define SOAP_TYPE__ns1__getStockInfoByCodeResponse (22)
/* ns1:getStockInfoByCodeResponse */
class SOAP_CMAC _ns1__getStockInfoByCodeResponse
{
public:
	ns1__ArrayOfString *getStockInfoByCodeResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type ns1:ArrayOfString */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 22; } /* = unique id SOAP_TYPE__ns1__getStockInfoByCodeResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__getStockInfoByCodeResponse() { _ns1__getStockInfoByCodeResponse::soap_default(NULL); }
	virtual ~_ns1__getStockInfoByCodeResponse() { }
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImageByCode
#define SOAP_TYPE___ns1__getStockImageByCode (29)
/* Operation wrapper: */
struct __ns1__getStockImageByCode
{
public:
	_ns1__getStockImageByCode *ns1__getStockImageByCode;	/* optional element of type ns1:getStockImageByCode */
public:
	int soap_type() const { return 29; } /* = unique id SOAP_TYPE___ns1__getStockImageByCode */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImageByteByCode
#define SOAP_TYPE___ns1__getStockImageByteByCode (33)
/* Operation wrapper: */
struct __ns1__getStockImageByteByCode
{
public:
	_ns1__getStockImageByteByCode *ns1__getStockImageByteByCode;	/* optional element of type ns1:getStockImageByteByCode */
public:
	int soap_type() const { return 33; } /* = unique id SOAP_TYPE___ns1__getStockImageByteByCode */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImage_USCOREkByCode
#define SOAP_TYPE___ns1__getStockImage_USCOREkByCode (37)
/* Operation wrapper: */
struct __ns1__getStockImage_USCOREkByCode
{
public:
	_ns1__getStockImage_USCOREkByCode *ns1__getStockImage_USCOREkByCode;	/* optional element of type ns1:getStockImage_kByCode */
public:
	int soap_type() const { return 37; } /* = unique id SOAP_TYPE___ns1__getStockImage_USCOREkByCode */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImage_USCOREkByteByCode
#define SOAP_TYPE___ns1__getStockImage_USCOREkByteByCode (41)
/* Operation wrapper: */
struct __ns1__getStockImage_USCOREkByteByCode
{
public:
	_ns1__getStockImage_USCOREkByteByCode *ns1__getStockImage_USCOREkByteByCode;	/* optional element of type ns1:getStockImage_kByteByCode */
public:
	int soap_type() const { return 41; } /* = unique id SOAP_TYPE___ns1__getStockImage_USCOREkByteByCode */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockInfoByCode
#define SOAP_TYPE___ns1__getStockInfoByCode (45)
/* Operation wrapper: */
struct __ns1__getStockInfoByCode
{
public:
	_ns1__getStockInfoByCode *ns1__getStockInfoByCode;	/* optional element of type ns1:getStockInfoByCode */
public:
	int soap_type() const { return 45; } /* = unique id SOAP_TYPE___ns1__getStockInfoByCode */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImageByCode_
#define SOAP_TYPE___ns1__getStockImageByCode_ (47)
/* Operation wrapper: */
struct __ns1__getStockImageByCode_
{
public:
	_ns1__getStockImageByCode *ns1__getStockImageByCode;	/* optional element of type ns1:getStockImageByCode */
public:
	int soap_type() const { return 47; } /* = unique id SOAP_TYPE___ns1__getStockImageByCode_ */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImageByteByCode_
#define SOAP_TYPE___ns1__getStockImageByteByCode_ (49)
/* Operation wrapper: */
struct __ns1__getStockImageByteByCode_
{
public:
	_ns1__getStockImageByteByCode *ns1__getStockImageByteByCode;	/* optional element of type ns1:getStockImageByteByCode */
public:
	int soap_type() const { return 49; } /* = unique id SOAP_TYPE___ns1__getStockImageByteByCode_ */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImage_USCOREkByCode_
#define SOAP_TYPE___ns1__getStockImage_USCOREkByCode_ (51)
/* Operation wrapper: */
struct __ns1__getStockImage_USCOREkByCode_
{
public:
	_ns1__getStockImage_USCOREkByCode *ns1__getStockImage_USCOREkByCode;	/* optional element of type ns1:getStockImage_kByCode */
public:
	int soap_type() const { return 51; } /* = unique id SOAP_TYPE___ns1__getStockImage_USCOREkByCode_ */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockImage_USCOREkByteByCode_
#define SOAP_TYPE___ns1__getStockImage_USCOREkByteByCode_ (53)
/* Operation wrapper: */
struct __ns1__getStockImage_USCOREkByteByCode_
{
public:
	_ns1__getStockImage_USCOREkByteByCode *ns1__getStockImage_USCOREkByteByCode;	/* optional element of type ns1:getStockImage_kByteByCode */
public:
	int soap_type() const { return 53; } /* = unique id SOAP_TYPE___ns1__getStockImage_USCOREkByteByCode_ */
};
#endif

#ifndef SOAP_TYPE___ns1__getStockInfoByCode_
#define SOAP_TYPE___ns1__getStockInfoByCode_ (55)
/* Operation wrapper: */
struct __ns1__getStockInfoByCode_
{
public:
	_ns1__getStockInfoByCode *ns1__getStockInfoByCode;	/* optional element of type ns1:getStockInfoByCode */
public:
	int soap_type() const { return 55; } /* = unique id SOAP_TYPE___ns1__getStockInfoByCode_ */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (56)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 56; } /* = unique id SOAP_TYPE_SOAP_ENV__Header */
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (57)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 57; } /* = unique id SOAP_TYPE_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (59)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 59; } /* = unique id SOAP_TYPE_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (62)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 62; } /* = unique id SOAP_TYPE_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (63)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 63; } /* = unique id SOAP_TYPE_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
