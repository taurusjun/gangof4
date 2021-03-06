﻿/*
 * xspeed_data_formater.h
 *
 *  Created on: 2013-8-13
 *      Author: oliver
 */

#ifndef XSpeed_DATATYPEFORMATER_H_
#define XSpeed_DATATYPEFORMATER_H_

#include <string>

#include "DFITCApiDataType.h"
#include "DFITCApiStruct.h"

// XSpeed结构的格式化信息接口，仅有静态函数，无对象实例
class XSpeedDatatypeFormater
{
public:
	// 所有请求消息的格式化
    static std::string ToString(const DFITCUserLoginField *pdata);
	static std::string ToString(const DFITCInsertOrderField *pdata);
	static std::string ToString(const DFITCCancelOrderField *pdata);
	static std::string ToString(const DFITCPositionField *pdata);
	static std::string ToString(const DFITCPositionDetailField *pdata);
	static std::string ToString(const DFITCOrderField *pdata);
	static std::string ToString(const DFITCMatchField *pdata);
	static std::string ToString(const DFITCQuoteSubscribeField *pdata);
	static std::string ToString(const DFITCQuoteUnSubscribeField *pdata);
	static std::string ToString(const DFITCQuoteInsertField *pdata);
	static std::string ToString(const DFITCExchangeInstrumentField *pdata);

	// 所有响应消息的格式化
	static std::string ToString(const DFITCErrorRtnField *pdata);
	static std::string ToString(const DFITCUserLoginInfoRtnField *pdata);
	static std::string ToString(const DFITCUserLogoutInfoRtnField *pdata);
	static std::string ToString(const DFITCOrderRspDataRtnField *pdata);
	static std::string ToString(const DFITCOrderRtnField *pdata);
	static std::string ToString(const DFITCMatchRtnField *pdata);
	static std::string ToString(const DFITCOrderCanceledRtnField *pdata);
	static std::string ToString(const DFITCOrderCommRtnField *pdata);
	static std::string ToString(const DFITCMatchedRtnField *pdata);
	static std::string ToString(const DFITCPositionInfoRtnField *pdata);
	static std::string ToString(const DFITCPositionDetailRtnField *pdata);
	static std::string ToString(const DFITCExchangeInstrumentRtnField *pdata);
	static std::string ToString(const DFITCTradingDayRtnField *pdata);
	static std::string ToString(const DFITCExchangeStatusRtnField *pdata);

    static std::string ToString(const DFITCCapitalInfoRtnField *pdata);
    static std::string ToString(const DFITCBillConfirmRspField *pdata);

private:
	XSpeedDatatypeFormater()
	{
	}
	~XSpeedDatatypeFormater()
	{
	}
};

#endif /* XSpeed_DATATYPEFORMATER_H_ */
