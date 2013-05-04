#include<iostream>
#include<string>

#include "soapChinaStockWebServiceSoapProxy.h"
#include "ChinaStockWebServiceSoap.nsmap"

#include <unistd.h>


int main(int argc, char* argv[])
{
	int count = 0;
	if(argc != 2)
	{
		std::cout<<"Require the stock code such as sh000001"<<std::endl;
	}
	ChinaStockWebServiceSoapProxy service;

	_ns1__getStockInfoByCode query;
	query.theStockCode = argv[1];

	_ns1__getStockInfoByCodeResponse response;
	while(true)
	{	
		if(service.getStockInfoByCode(&query, &response) == SOAP_OK)
		{
			count++;
			std::cout<<"Round "<<count<<std::endl;
			int counter = response.getStockInfoByCodeResult->__sizestring;
			
			for(int i = 0; i< counter; ++i)
			{
				std::cout<<response.getStockInfoByCodeResult->string[i]<<std::endl;
			}
		}		
		else
		{
			std::cout<<"Fail to obtain information from the service!"<<std::endl;
		}
		usleep(5000000); //microseconds
	}
	getchar();
	return 0;
}
