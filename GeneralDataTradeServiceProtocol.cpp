#include "CommonPCH.h"

#include <float.h>
#include <limits.h>
#include <string.h>
#include <memory.h> 
#include <stddef.h>

#pragma warning( disable : 4996 )	//	microsoft specific

#include "GeneralDataTradeServiceProtocol.h"


#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif
namespace DTC
{


	/****************************************************************************/
	// s_LogonRequest

	/*============================================================================
	Will get the size of the message received over the network
	----------------------------------------------------------------------------*/
	unsigned __int16 s_LogonRequest::GetMessageSize()
	{
		return Size;
	}

	/*============================================================================
	Performs a safe copy of data into this structure instance from the given
	data pointer.
	----------------------------------------------------------------------------*/
	void s_LogonRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_LogonRequest), Size));
	}

	/*==========================================================================*/
	__int32 s_LogonRequest::GetProtocolVersion()
	{
		if (Size < offsetof(s_LogonRequest, ProtocolVersion) + sizeof(ProtocolVersion))
			return 0;

		return ProtocolVersion;
	}

	/*==========================================================================*/
	const char* s_LogonRequest::GetUsername()
	{
		if (Size < offsetof(s_LogonRequest, Username) + sizeof(Username))
			return "";

		Username[sizeof(Username) - 1] = '\0';  // Ensure that the null terminator exists

		return Username;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetUsername(const char* NewValue)
	{
		strncpy(Username, NewValue, sizeof(Username) - 1);
	}

	/*==========================================================================*/
	char* s_LogonRequest::GetPassword()
	{
		if (Size < offsetof(s_LogonRequest, Password) + sizeof(Password))
			return "";

		Password[sizeof(Password) - 1] = '\0';

		return Password;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetPassword(const char* NewValue)
	{
		strncpy(Password, NewValue, sizeof(Password) - 1);
	}

	/*==========================================================================*/
	char* s_LogonRequest::GetGeneralTextData()
	{
		if (Size < offsetof(s_LogonRequest, GeneralTextData) + sizeof(GeneralTextData))
			return "";

		GeneralTextData[sizeof(GeneralTextData) - 1] = '\0';

		return GeneralTextData;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetGeneralTextData(const char* NewValue)
	{
		strncpy(GeneralTextData, NewValue, sizeof(GeneralTextData) - 1);
	}

	/*==========================================================================*/
	__int32 s_LogonRequest::GetInteger_1()
	{
		if (Size < offsetof(s_LogonRequest, Integer_1) + sizeof(Integer_1))
			return 0;

		return Integer_1;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetInteger_1(__int32 NewValue)
	{
		Integer_1 = NewValue;
	}

	/*==========================================================================*/
	__int32 s_LogonRequest::GetInteger_2()
	{
		if (Size < offsetof(s_LogonRequest, Integer_2) + sizeof(Integer_2))
			return 0;

		return Integer_2;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetInteger_2(__int32 NewValue)
	{
		Integer_2 = NewValue;
	}

	/*==========================================================================*/
	__int32 s_LogonRequest::GetInHeartbeatIntervalInSeconds()
	{
		if (Size < offsetof(s_LogonRequest, HeartbeatIntervalInSeconds) + sizeof(HeartbeatIntervalInSeconds))
			return 0;

		return HeartbeatIntervalInSeconds;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetHeartbeatIntervalInSeconds(__int32 NewValue)
	{
		HeartbeatIntervalInSeconds = NewValue;
	}

	/*==========================================================================*/
	TradeModeEnum s_LogonRequest::GetTradeMode()
	{
		if (Size < offsetof(s_LogonRequest, TradeMode) + sizeof(TradeMode))
			return (TradeModeEnum)0;

		return TradeMode;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetTradeMode(TradeModeEnum NewValue)
	{
		TradeMode = NewValue;
	}

	/*==========================================================================*/
	char* s_LogonRequest::GetTradeAccount()
	{
		if (Size < offsetof(s_LogonRequest, TradeAccount) + sizeof(TradeAccount))
			return "";

		TradeAccount[sizeof(TradeAccount) - 1] = '\0';

		return TradeAccount;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetTradeAccount(const char* NewValue)
	{
		strncpy(TradeAccount, NewValue, sizeof(TradeAccount) - 1);
	}

	/*==========================================================================*/
	char* s_LogonRequest::GetHardwareIdentifier()
	{
		if (Size < offsetof(s_LogonRequest, HardwareIdentifier) + sizeof(HardwareIdentifier))
			return "";

		HardwareIdentifier[sizeof(HardwareIdentifier) - 1] = '\0';

		return HardwareIdentifier;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetHardwareIdentifier(const char* NewValue)
	{
		strncpy(HardwareIdentifier, NewValue, sizeof(HardwareIdentifier) - 1);
	}

	/*==========================================================================*/
	char* s_LogonRequest::GetClientName()
	{
		if (Size < offsetof(s_LogonRequest, ClientName) + sizeof(ClientName))
			return "";

		ClientName[sizeof(ClientName) - 1] = '\0';

		return ClientName;
	}

	/*==========================================================================*/
	void s_LogonRequest::SetClientName(const char* NewValue)
	{
		strncpy(ClientName, NewValue, sizeof(ClientName) - 1);
	}

	/****************************************************************************/
	// s_LogonResponse

	/*==========================================================================*/
	unsigned __int16 s_LogonResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_LogonResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_LogonResponse), Size));
	}

	/*==========================================================================*/
	__int32 s_LogonResponse::GetProtocolVersion()
	{
		if (Size < offsetof(s_LogonResponse, ProtocolVersion) + sizeof(ProtocolVersion))
			return 0;

		return ProtocolVersion;
	}

	/*==========================================================================*/
	LogonStatusEnum s_LogonResponse::GetResult()
	{
		if (Size < offsetof(s_LogonResponse, Result) + sizeof(Result))
			return (LogonStatusEnum)0;

		return Result;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetResult(LogonStatusEnum NewValue)
	{
		Result = NewValue;
	}

	/*==========================================================================*/
	char* s_LogonResponse::GetResultText()
	{
		if (Size < offsetof(s_LogonResponse, ResultText) + sizeof(ResultText))
			return "";

		ResultText[sizeof(ResultText) - 1] = '\0';

		return ResultText;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetResultText(const char* NewValue)
	{
		strncpy(ResultText, NewValue, sizeof(ResultText) - 1);
	}

	/*==========================================================================*/
	char* s_LogonResponse::GetReconnectAddress()
	{
		if (Size < offsetof(s_LogonResponse, ReconnectAddress) + sizeof(ReconnectAddress))
			return "";

		ReconnectAddress[sizeof(ReconnectAddress) - 1] = '\0';

		return ReconnectAddress;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetReconnectAddress(const char* NewValue)
	{
		strncpy(ReconnectAddress, NewValue, sizeof(ReconnectAddress) - 1);
	}

	/*==========================================================================*/
	__int32 s_LogonResponse::GetInteger_1()
	{
		if (Size < offsetof(s_LogonResponse, Integer_1) + sizeof(Integer_1))
			return 0;

		return Integer_1;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetInteger_1(__int32 NewValue)
	{
		Integer_1 = NewValue;
	}

	/*==========================================================================*/
	char* s_LogonResponse::GetServerVersion()
	{
		if (Size < offsetof(s_LogonResponse, ServerVersion) + sizeof(ServerVersion))
			return "";

		ServerVersion[sizeof(ServerVersion) - 1] = '\0';

		return ServerVersion;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetServerVersion(const char* NewValue)
	{
		strncpy(ServerVersion, NewValue, sizeof(ServerVersion) - 1);
	}

	/*==========================================================================*/
	char* s_LogonResponse::GetServerName()
	{
		if (Size < offsetof(s_LogonResponse, ServerName) + sizeof(ServerName))
			return "";

		ServerName[sizeof(ServerName) - 1] = '\0';

		return ServerName;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetServerName(const char* NewValue)
	{
		strncpy(ServerName, NewValue, sizeof(ServerName) - 1);
	}

	/*==========================================================================*/
	char* s_LogonResponse::GetServiceProviderName()
	{
		if (Size < offsetof(s_LogonResponse, ServiceProviderName) + sizeof(ServiceProviderName))
			return "";

		ServiceProviderName[sizeof(ServiceProviderName) - 1] = '\0';

		return ServiceProviderName;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetServiceProviderName(const char* NewValue)
	{
		strncpy(ServiceProviderName, NewValue, sizeof(ServiceProviderName) - 1);
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetMarketDepthUpdatesBestBidAndAsk()
	{
		if (Size < offsetof(s_LogonResponse, MarketDepthUpdatesBestBidAndAsk) + sizeof(MarketDepthUpdatesBestBidAndAsk))
			return 0;

		return MarketDepthUpdatesBestBidAndAsk;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetMarketDepthUpdatesBestBidAndAsk(unsigned char NewValue)
	{
		MarketDepthUpdatesBestBidAndAsk = NewValue;
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetTradingIsSupported()
	{
		if (Size < offsetof(s_LogonResponse, TradingIsSupported) + sizeof(TradingIsSupported))
			return 0;

		return TradingIsSupported;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetTradingIsSupported(unsigned char NewValue)
	{
		TradingIsSupported = NewValue;
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetOCOOrdersSupported()
	{
		if (Size < offsetof(s_LogonResponse, OCOOrdersSupported) + sizeof(OCOOrdersSupported))
			return 0;

		return OCOOrdersSupported;
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetOrderCancelReplaceSupported()
	{
		if (Size < offsetof(s_LogonResponse, OrderCancelReplaceSupported) + sizeof(OrderCancelReplaceSupported))
			return 0;

		return OrderCancelReplaceSupported;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetOrderCancelReplaceSupported(unsigned char NewValue)
	{
		OrderCancelReplaceSupported = NewValue;
	}

	/*==========================================================================*/
	char* s_LogonResponse::GetSymbolExchangeDelimiter()
	{
		if (Size < offsetof(s_LogonResponse, SymbolExchangeDelimiter) + sizeof(SymbolExchangeDelimiter))
			return "";

		SymbolExchangeDelimiter[sizeof(SymbolExchangeDelimiter) - 1] = '\0';

		return SymbolExchangeDelimiter;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetSymbolExchangeDelimiter(const char* NewValue)
	{
		strncpy(SymbolExchangeDelimiter, NewValue, sizeof(SymbolExchangeDelimiter) - 1);
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetSecurityDefinitionsSupported()
	{
		if (Size < offsetof(s_LogonResponse, SecurityDefinitionsSupported) + sizeof(SecurityDefinitionsSupported))
			return 0;

		return SecurityDefinitionsSupported;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetSecurityDefinitionsSupported(unsigned char NewValue)
	{
		SecurityDefinitionsSupported = NewValue;
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetHistoricalPriceDataSupported()
	{
		if (Size < offsetof(s_LogonResponse, HistoricalPriceDataSupported) + sizeof(HistoricalPriceDataSupported))
			return 0;

		return HistoricalPriceDataSupported;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetHistoricalPriceDataSupported(unsigned char NewValue)
	{
		HistoricalPriceDataSupported  = NewValue;
	}

	/*==========================================================================*/
	unsigned char s_LogonResponse::GetResubscribeWhenMarketDataFeedRestored()
	{
		if (Size < offsetof(s_LogonResponse, ResubscribeWhenMarketDataFeedRestored) + sizeof(ResubscribeWhenMarketDataFeedRestored))
			return 0;

		return ResubscribeWhenMarketDataFeedRestored;
	}

	/*==========================================================================*/
	void s_LogonResponse::SetResubscribeWhenMarketDataFeedRestored(unsigned char NewValue)
	{
		ResubscribeWhenMarketDataFeedRestored = NewValue;
	}

	/****************************************************************************/
	// s_Heartbeat

	/*==========================================================================*/
	unsigned __int16 s_Heartbeat::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_Heartbeat::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_Heartbeat), Size));
	}

	/*==========================================================================*/
	unsigned __int32 s_Heartbeat::GetDroppedMessages()
	{
		if (Size < offsetof(s_Heartbeat, DroppedMessages) + sizeof(DroppedMessages))
			return 0;

		return DroppedMessages;
	}

	/*==========================================================================*/
	void s_Heartbeat::SetDroppedMessages(unsigned __int32 NewValue)
	{
		DroppedMessages = NewValue;
	}

	/*==========================================================================*/
	unsigned __int16 s_DisconnectFromServer::GetMessageSize()
	{
		return Size;
	}

	/****************************************************************************/
	// s_DisconnectFromServer

	/*==========================================================================*/
	void s_DisconnectFromServer::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_DisconnectFromServer), Size));
	}

	/*==========================================================================*/
	char* s_DisconnectFromServer::GetDisconnectReason()
	{
		if (Size < offsetof(s_DisconnectFromServer, DisconnectReason) + sizeof(DisconnectReason))
			return "";

		DisconnectReason[sizeof(DisconnectReason) - 1] = '\0';

		return DisconnectReason;
	}

	/*==========================================================================*/
	void s_DisconnectFromServer::SetDisconnectReason(const char* NewValue)
	{
		strncpy(DisconnectReason, NewValue, sizeof(DisconnectReason) - 1);
	}

	/****************************************************************************/
	// s_MarketDataFeedStatus

	/*==========================================================================*/
	unsigned __int16 s_MarketDataFeedStatus::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDataFeedStatus::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDataFeedStatus), Size));
	}

	/*==========================================================================*/
	MarketDataFeedStatusEnum s_MarketDataFeedStatus::GetStatus()
	{
		if (Size < offsetof(s_MarketDataFeedStatus, Status) + sizeof(Status))
			return (MarketDataFeedStatusEnum)0;

		return Status;
	}

	/*==========================================================================*/
	void s_MarketDataFeedStatus::SetStatus(MarketDataFeedStatusEnum NewValue)
	{
		Status = NewValue;
	}

	/****************************************************************************/
	// s_MarketDataFeedSymbolStatus

	/*==========================================================================*/
	unsigned __int16 s_MarketDataFeedSymbolStatus::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDataFeedSymbolStatus::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDataFeedSymbolStatus), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDataFeedSymbolStatus::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_MarketDataFeedSymbolStatus, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_MarketDataFeedSymbolStatus::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/*==========================================================================*/
	MarketDataFeedStatusEnum s_MarketDataFeedSymbolStatus::GetStatus()
	{
		if (Size < offsetof(s_MarketDataFeedSymbolStatus, Status) + sizeof(Status))
			return (MarketDataFeedStatusEnum)0;

		return Status;
	}

	/*==========================================================================*/
	void s_MarketDataFeedSymbolStatus::SetStatus(MarketDataFeedStatusEnum NewValue)
	{
		Status = NewValue;
	}

	/****************************************************************************/
	// s_MarketDataRequest

	/*==========================================================================*/
	unsigned __int16 s_MarketDataRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDataRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDataRequest), Size));
	}

	/*==========================================================================*/
	RequestActionEnum s_MarketDataRequest::GetRequestActionValue()
	{
		if (Size < offsetof(s_MarketDataRequest, RequestActionValue) + sizeof(RequestActionValue))
			return (RequestActionEnum)0;

		return RequestActionValue;
	}

	/*==========================================================================*/
	void s_MarketDataRequest::SetRequestActionValue(RequestActionEnum NewValue)
	{
		RequestActionValue = NewValue;
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDataRequest::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_MarketDataRequest, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_MarketDataRequest::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/*==========================================================================*/
	char* s_MarketDataRequest::GetSymbol()
	{
		if (Size < offsetof(s_MarketDataRequest, Symbol) + sizeof(Symbol))
			return "";

		Symbol[sizeof(Symbol) - 1] = '\0';

		return Symbol;
	}

	/*==========================================================================*/
	void s_MarketDataRequest::SetSymbol(const char* NewValue)
	{
		strncpy(Symbol, NewValue, sizeof(Symbol) - 1);
	}

	/*==========================================================================*/
	char* s_MarketDataRequest::GetExchange()
	{
		if (Size < offsetof(s_MarketDataRequest, Exchange) + sizeof(Exchange))
			return "";

		Exchange[sizeof(Exchange) - 1] = '\0';

		return Exchange;
	}

	/*==========================================================================*/
	void s_MarketDataRequest::SetExchange(const char* NewValue)
	{
		strncpy(Exchange, NewValue, sizeof(Exchange) - 1);
	}

	/****************************************************************************/
	// s_MarketDepthRequest

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDepthRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDepthRequest), Size));
	}

	/*==========================================================================*/
	RequestActionEnum s_MarketDepthRequest::GetRequestActionValue()
	{
		if (Size < offsetof(s_MarketDepthRequest, RequestActionValue) + sizeof(RequestActionValue))
			return (RequestActionEnum)0;

		return RequestActionValue;
	}

	/*==========================================================================*/
	void s_MarketDepthRequest::SetRequestActionValue(RequestActionEnum NewValue)
	{
		RequestActionValue = NewValue;
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthRequest::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_MarketDepthRequest, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_MarketDepthRequest::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/*==========================================================================*/
	char* s_MarketDepthRequest::GetSymbol()
	{
		if (Size < offsetof(s_MarketDepthRequest, Symbol) + sizeof(Symbol))
			return "";

		Symbol[sizeof(Symbol) - 1] = '\0';

		return Symbol;
	}

	/*==========================================================================*/
	void s_MarketDepthRequest::SetSymbol(const char* NewValue)
	{
		strncpy(Symbol, NewValue, sizeof(Symbol) - 1);
	}

	/*==========================================================================*/
	char* s_MarketDepthRequest::GetExchange()
	{
		if (Size < offsetof(s_MarketDepthRequest, Exchange) + sizeof(Exchange))
			return "";

		Exchange[sizeof(Exchange) - 1] = '\0';

		return Exchange;
	}

	/*==========================================================================*/
	void s_MarketDepthRequest::SetExchange(const char* NewValue)
	{
		strncpy(Exchange, NewValue, sizeof(Exchange) - 1);
	}

	/*==========================================================================*/
	__int32 s_MarketDepthRequest::GetNumberOfLevels()
	{
		if (Size < offsetof(s_MarketDepthRequest, NumberOfLevels) + sizeof(NumberOfLevels))
			return 0;

		return NumberOfLevels;
	}

	/*==========================================================================*/
	void s_MarketDepthRequest::SetNumberOfLevels(__int32 NewValue)
	{
		NumberOfLevels = NewValue;
	}

	/****************************************************************************/
	// s_MarketDataReject

	/*==========================================================================*/
	unsigned __int16 s_MarketDataReject::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDataReject::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDataReject), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDataReject::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_MarketDataReject, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_MarketDataReject::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/*==========================================================================*/
	char* s_MarketDataReject::GetRejectText()
	{
		if (Size < offsetof(s_MarketDataReject, RejectText) + sizeof(RejectText))
			return "";

		RejectText[sizeof(RejectText) - 1] = '\0';

		return RejectText;
	}

	/*==========================================================================*/
	void s_MarketDataReject::SetRejectText(const char* NewValue)
	{
		strncpy(RejectText, NewValue, sizeof(RejectText) - 1);
	}

	/****************************************************************************/
	// s_MarketDataSnapshot

	/*==========================================================================*/
	unsigned __int16 s_MarketDataSnapshot::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDataSnapshot), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDataSnapshot::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_MarketDataSnapshot, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetSettlementPrice()
	{
		if (Size < offsetof(s_MarketDataSnapshot, SettlementPrice) + sizeof(SettlementPrice))
			return 0;

		return SettlementPrice;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetSettlementPrice(double NewValue)
	{
		SettlementPrice = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetDailyOpen()
	{
		if (Size < offsetof(s_MarketDataSnapshot, DailyOpen) + sizeof(DailyOpen))
			return 0;

		return DailyOpen;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetDailyOpen(double NewValue)
	{
		DailyOpen = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetDailyHigh()
	{
		if (Size < offsetof(s_MarketDataSnapshot, DailyHigh) + sizeof(DailyHigh))
			return 0;

		return DailyHigh;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetDailyHigh(double NewValue)
	{
		DailyHigh = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetDailyLow()
	{
		if (Size < offsetof(s_MarketDataSnapshot, DailyLow) + sizeof(DailyLow))
			return 0;

		return DailyLow;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetDailyLow(double NewValue)
	{
		DailyLow = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetDailyVolume()
	{
		if (Size < offsetof(s_MarketDataSnapshot, DailyVolume) + sizeof(DailyVolume))
			return 0;

		return DailyVolume;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetDailyVolume(double NewValue)
	{
		DailyVolume = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetDailyNumberOfTrades()
	{
		if (Size < offsetof(s_MarketDataSnapshot, DailyNumberOfTrades) + sizeof(DailyNumberOfTrades))
			return 0;

		return DailyNumberOfTrades;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetDailyNumberOfTrades(unsigned __int32 NewValue)
	{
		DailyNumberOfTrades = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetSharesOutstanding()
	{
		if (Size < offsetof(s_MarketDataSnapshot, SharesOutstanding) + sizeof(SharesOutstanding))
			return 0;

		return SharesOutstanding;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetSharesOutstanding(unsigned __int32 NewValue)
	{
		SharesOutstanding = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetOpenInterest()
	{
		if (Size < offsetof(s_MarketDataSnapshot, OpenInterest) + sizeof(OpenInterest))
			return 0;

		return OpenInterest;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetOpenInterest(unsigned __int32 NewValue)
	{
		OpenInterest = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetUnitsOutstanding()
	{
		if (Size < offsetof(s_MarketDataSnapshot, UnitsOutstanding) + sizeof(UnitsOutstanding))
			return 0;

		return UnitsOutstanding;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetUnitsOutstanding(unsigned __int32 NewValue)
	{
		UnitsOutstanding = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetBid()
	{
		if (Size < offsetof(s_MarketDataSnapshot, Bid) + sizeof(Bid))
			return 0;

		return Bid;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetBid(double NewValue)
	{
		Bid = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetAsk()
	{
		if (Size < offsetof(s_MarketDataSnapshot, Ask) + sizeof(Ask))
			return 0;

		return Ask;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetAsk(double NewValue)
	{
		Ask = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetAskSize()
	{
		if (Size < offsetof(s_MarketDataSnapshot, AskSize) + sizeof(AskSize))
			return 0;

		return AskSize;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetAskSize(unsigned __int32 NewValue)
	{
		AskSize = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetBidSize()
	{
		if (Size < offsetof(s_MarketDataSnapshot, BidSize) + sizeof(BidSize))
			return 0;

		return BidSize;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetBidSize(unsigned __int32 NewValue)
	{
		BidSize = NewValue;
	}

	/*==========================================================================*/
	double s_MarketDataSnapshot::GetLastTradePrice()
	{
		if (Size < offsetof(s_MarketDataSnapshot, LastTradePrice) + sizeof(LastTradePrice))
			return 0;

		return LastTradePrice;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetLastTradePrice(double NewValue)
	{
		LastTradePrice = NewValue;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDataSnapshot::GetLastTradeSize()
	{
		if (Size < offsetof(s_MarketDataSnapshot, LastTradeSize) + sizeof(LastTradeSize))
			return 0;

		return LastTradeSize;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetLastTradeSize(unsigned __int32 NewValue)
	{
		LastTradeSize = NewValue;
	}

	/*==========================================================================*/
	t_DateTime s_MarketDataSnapshot::GetLastTradeDateTimeUnix()
	{
		if (Size < offsetof(s_MarketDataSnapshot, LastTradeDateTimeUnix) + sizeof(LastTradeDateTimeUnix))
			return 0;

		return LastTradeDateTimeUnix;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetLastTradeDateTimeUnix(t_DateTime NewValue)
	{
		LastTradeDateTimeUnix = NewValue;
	}

	/*==========================================================================*/
	__int16 s_MarketDataSnapshot::GetLastTradeMilliseconds()
	{
		if (Size < offsetof(s_MarketDataSnapshot, LastTradeMilliseconds) + sizeof(LastTradeMilliseconds))
			return 0;

		return LastTradeMilliseconds;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetLastTradeMilliseconds(__int16 NewValue)
	{
		LastTradeMilliseconds = NewValue;
	}

	/*==========================================================================*/
	void s_MarketDataSnapshot::SetToUnsetValues()
	{
		SettlementPrice = DBL_MAX;
		DailyOpen = DBL_MAX;
		DailyHigh = DBL_MAX;
		DailyLow = DBL_MAX;
		DailyVolume = DBL_MAX;
		DailyNumberOfTrades = UINT_MAX;

		SharesOutstanding = UINT_MAX;

		Bid = DBL_MAX;
		Ask = DBL_MAX;
		AskSize = UINT_MAX;
		BidSize = UINT_MAX;

		LastTradePrice = DBL_MAX;
		LastTradeSize = UINT_MAX;
	}

	/****************************************************************************/
	// s_FundamentalDataResponse

	/*==========================================================================*/
	unsigned __int16 s_FundamentalDataResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_FundamentalDataResponse), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_FundamentalDataResponse::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_FundamentalDataResponse, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/*==========================================================================*/
	char* s_FundamentalDataResponse::GetSymbolDescription()
	{
		if (Size < offsetof(s_FundamentalDataResponse, SymbolDescription) + sizeof(SymbolDescription))
			return "";

		SymbolDescription[sizeof(SymbolDescription) - 1] = '\0';

		return SymbolDescription;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetSymbolDescription(const char* NewValue)
	{
		strncpy(SymbolDescription, NewValue, sizeof(SymbolDescription) - 1);
	}

	/*==========================================================================*/
	float s_FundamentalDataResponse::GetTickSize()
	{
		if (Size < offsetof(s_FundamentalDataResponse, TickSize) + sizeof(TickSize))
			return 0;

		return TickSize;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetTickSize(float NewValue)
	{
		TickSize = NewValue;
	}

	/*==========================================================================*/
	float s_FundamentalDataResponse::GetTickCurrencyValue()
	{
		if (Size < offsetof(s_FundamentalDataResponse, TickCurrencyValue) + sizeof(TickCurrencyValue))
			return 0;

		return TickCurrencyValue;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetTickCurrencyValue(float NewValue)
	{
		TickCurrencyValue = NewValue;
	}

	/*==========================================================================*/
	DisplayFormatEnum s_FundamentalDataResponse::GetDisplayFormat()
	{
		if (Size < offsetof(s_FundamentalDataResponse, DisplayFormat) + sizeof(DisplayFormat))
			return (DisplayFormatEnum)0;

		return DisplayFormat;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetDisplayFormat(DisplayFormatEnum NewValue)
	{
		DisplayFormat = NewValue;
	}

	/*==========================================================================*/
	float s_FundamentalDataResponse::GetBuyRolloverInterest()
	{
		if (Size < offsetof(s_FundamentalDataResponse, BuyRolloverInterest) + sizeof(BuyRolloverInterest))
			return 0;

		return BuyRolloverInterest;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetBuyRolloverInterest(float NewValue)
	{
		BuyRolloverInterest = NewValue;
	}

	/*==========================================================================*/
	float s_FundamentalDataResponse::GetSellRolloverInterest()
	{
		if (Size < offsetof(s_FundamentalDataResponse, SellRolloverInterest) + sizeof(SellRolloverInterest))
			return 0;

		return SellRolloverInterest;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetSellRolloverInterest(float NewValue)
	{
		SellRolloverInterest = NewValue;
	}

	/*==========================================================================*/
	float s_FundamentalDataResponse::GetOrderPriceMultiplier()
	{
		if (Size < offsetof(s_FundamentalDataResponse, OrderPriceMultiplier) + sizeof(OrderPriceMultiplier))
			return 0;

		return OrderPriceMultiplier;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetOrderPriceMultiplier(float NewValue)
	{
		OrderPriceMultiplier = NewValue;
	}

	/*==========================================================================*/
	void s_FundamentalDataResponse::SetDisplayFormatFromTickSize()
	{
		if (TickSize == 0.0f && DisplayFormat ==  DISPLAY_FORMAT_UNSET)
		{
			DisplayFormat = DISPLAY_FORMAT_DECIMAL_3;
			return;
		}

		if (TickSize < 0.00000995f)
			DisplayFormat = DISPLAY_FORMAT_DECIMAL_6;
		else if (TickSize < 0.0000995f)
			DisplayFormat = DISPLAY_FORMAT_DECIMAL_5;
		else if (TickSize < 0.000995f)
			DisplayFormat = DISPLAY_FORMAT_DECIMAL_4;
		else if (TickSize > 0.00249f && TickSize < 0.00251f)
			DisplayFormat  = DISPLAY_FORMAT_DECIMAL_4;
		else if (TickSize < 0.00995f)
		{
			if (TickSize > 0.00390620f && TickSize < 0.00390630f)  //== 0.00390625)
				DisplayFormat = DISPLAY_FORMAT_DENOMINATOR_256;
			else if (TickSize > 0.0078120f && TickSize < 0.0078130f)  // .25/32 = 0.0078125
				DisplayFormat = DISPLAY_FORMAT_DENOMINATOR_32_QUARTERS;
			else
				DisplayFormat = DISPLAY_FORMAT_DECIMAL_3;
		}
		else if (TickSize < 0.0995f)
		{
			if (TickSize > 0.0249f &&  TickSize < 0.0251f)
				DisplayFormat = DISPLAY_FORMAT_DECIMAL_3;
			else if (TickSize > 0.015620f && TickSize < 0.015630f)  // .5/32 = 0.015625
				DisplayFormat = DISPLAY_FORMAT_DENOMINATOR_32_HALVES;
			else if (TickSize > 0.03120f && TickSize < 0.03130f)  // 1/32 = 0.03125 
				DisplayFormat = DISPLAY_FORMAT_DENOMINATOR_32;
			else if (TickSize > 0.0620f && TickSize < 0.0630f)  //== 0.0625)
				DisplayFormat = DISPLAY_FORMAT_DENOMINATOR_16;
			else
				DisplayFormat  = DISPLAY_FORMAT_DECIMAL_2;
		}
		else if (TickSize < 0.995f)
		{
			if (TickSize > 0.120 && TickSize < 0.130)  //== 0.125)
				DisplayFormat = DISPLAY_FORMAT_DENOMINATOR_8;
			else
				DisplayFormat = DISPLAY_FORMAT_DECIMAL_1;
		}
		else
			DisplayFormat = DISPLAY_FORMAT_DECIMAL_0;
	}

	/****************************************************************************/
	// s_TradeIncrementalUpdateWithFullDepth

	/*==========================================================================*/
	unsigned __int16 s_TradeIncrementalUpdateWithFullDepth::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_TradeIncrementalUpdateWithFullDepth::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_TradeIncrementalUpdateWithFullDepth), Size));
	}

	/****************************************************************************/
	// s_MarketDepthFullUpdate

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthFullUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDepthFullUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDepthFullUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthFullUpdate::GetMarketDataSymbolID()
	{
		if (Size < offsetof(s_MarketDepthFullUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	void s_MarketDepthFullUpdate::SetMarketDataSymbolID(unsigned __int16 NewValue)
	{
		MarketDataSymbolID = NewValue;
	}

	/****************************************************************************/
	// s_MarketDepthFullUpdateLarge

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthFullUpdateLarge::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDepthFullUpdateLarge::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDepthFullUpdateLarge), Size));
	}

	/****************************************************************************/
	// s_MarketDepthIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDepthIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDepthIncrementalUpdate), Size));
	}

	/****************************************************************************/
	// s_MarketDepthIncrementalUpdateCompact

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthIncrementalUpdateCompact::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_MarketDepthIncrementalUpdateCompact::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_MarketDepthIncrementalUpdateCompact), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_MarketDepthIncrementalUpdateCompact::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_MarketDepthIncrementalUpdateCompact, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	BidOrAskEnum s_MarketDepthIncrementalUpdateCompact::GetSide() const
	{
		if (Size < offsetof(s_MarketDepthIncrementalUpdateCompact, Side) + sizeof(Side))
			return BID_ASK_UNSET;

		return Side;
	}

	/*==========================================================================*/
	float s_MarketDepthIncrementalUpdateCompact::GetPrice() const
	{
		if (Size < offsetof(s_MarketDepthIncrementalUpdateCompact, Price) + sizeof(Price))
			return 0.0f;

		return Price;
	}

	/*==========================================================================*/
	unsigned __int32 s_MarketDepthIncrementalUpdateCompact::GetVolume() const
	{
		if (Size < offsetof(s_MarketDepthIncrementalUpdateCompact, Volume) + sizeof(Volume))
			return 0;

		return Volume;
	}

	/*==========================================================================*/
	MarketDepthIncrementalUpdateTypeEnum s_MarketDepthIncrementalUpdateCompact::GetUpdateType() const
	{
		if (Size < offsetof(s_MarketDepthIncrementalUpdateCompact, UpdateType) + sizeof(UpdateType))
			return DEPTH_UNSET;

		return UpdateType;
	}

	/****************************************************************************/
	// s_SettlementIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_SettlementIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SettlementIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SettlementIncrementalUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_SettlementIncrementalUpdate::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_SettlementIncrementalUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	double s_SettlementIncrementalUpdate::GetSettlementPrice() const
	{
		if (Size < offsetof(s_SettlementIncrementalUpdate, SettlementPrice) + sizeof(SettlementPrice))
			return 0;

		return SettlementPrice;
	}

	/****************************************************************************/
	// s_DailyOpenIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_DailyOpenIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_DailyOpenIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_DailyOpenIncrementalUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_DailyOpenIncrementalUpdate::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_DailyOpenIncrementalUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	double s_DailyOpenIncrementalUpdate::GetDailyOpen() const
	{
		if (Size < offsetof(s_DailyOpenIncrementalUpdate, DailyOpen) + sizeof(DailyOpen))
			return 0;

		return DailyOpen;
	}

	/****************************************************************************/
	// s_TradeIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_TradeIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_TradeIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_TradeIncrementalUpdate), Size));
	}

	/****************************************************************************/
	// s_QuoteIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_QuoteIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_QuoteIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_QuoteIncrementalUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_QuoteIncrementalUpdate::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	double s_QuoteIncrementalUpdate::GetBidPrice() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdate, BidPrice) + sizeof(BidPrice))
			return 0.0;

		return BidPrice;
	}

	/*==========================================================================*/
	unsigned __int32 s_QuoteIncrementalUpdate::GetBidSize() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdate, BidSize) + sizeof(BidSize))
			return 0;

		return BidSize;
	}

	/*==========================================================================*/
	double s_QuoteIncrementalUpdate::GetAskPrice() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdate, AskPrice) + sizeof(AskPrice))
			return 0.0;

		return AskPrice;
	}

	/*==========================================================================*/
	unsigned __int32 s_QuoteIncrementalUpdate::GetAskSize() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdate, AskSize) + sizeof(AskSize))
			return 0;

		return AskSize;
	}

	/*==========================================================================*/
	double s_QuoteIncrementalUpdate::GetQuoteDateTimeUnix() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdate, QuoteDateTimeUnix) + sizeof(QuoteDateTimeUnix))
			return 0;

		return QuoteDateTimeUnix;
	}

	/****************************************************************************/
	// s_QuoteIncrementalUpdateCompact

	/*==========================================================================*/
	unsigned __int16 s_QuoteIncrementalUpdateCompact::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdateCompact, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	float s_QuoteIncrementalUpdateCompact::GetBidPrice() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdateCompact, BidPrice) + sizeof(BidPrice))
			return 0.0;

		return BidPrice;
	}

	/*==========================================================================*/
	unsigned __int32 s_QuoteIncrementalUpdateCompact::GetBidSize() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdateCompact, BidSize) + sizeof(BidSize))
			return 0;

		return BidSize;
	}

	/*==========================================================================*/
	float s_QuoteIncrementalUpdateCompact::GetAskPrice() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdateCompact, AskPrice) + sizeof(AskPrice))
			return 0.0;

		return AskPrice;
	}

	/*==========================================================================*/
	unsigned __int32 s_QuoteIncrementalUpdateCompact::GetAskSize() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdateCompact, AskSize) + sizeof(AskSize))
			return 0;

		return AskSize;
	}

	/*==========================================================================*/
	t_DateTime4Byte s_QuoteIncrementalUpdateCompact::GetQuoteDateTimeUnix() const
	{
		if (Size < offsetof(s_QuoteIncrementalUpdateCompact, QuoteDateTimeUnix) + sizeof(QuoteDateTimeUnix))
			return 0;

		return QuoteDateTimeUnix;
	}

	/****************************************************************************/
	// s_TradeIncrementalUpdateCompact

	/*==========================================================================*/
	unsigned __int16 s_TradeIncrementalUpdateCompact::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_TradeIncrementalUpdateCompact::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_TradeIncrementalUpdateCompact), Size));
	}

	/*==========================================================================*/
	float s_TradeIncrementalUpdateCompact::GetPrice() const
	{
		if (Size < offsetof(s_TradeIncrementalUpdateCompact, Price) + sizeof(Price))
			return 0.0;

		return Price;
	}

	/*==========================================================================*/
	unsigned __int32 s_TradeIncrementalUpdateCompact::GetTradeVolume() const
	{
		if (Size < offsetof(s_TradeIncrementalUpdateCompact, TradeVolume) + sizeof(TradeVolume))
			return 0;

		return TradeVolume;
	}

	/*==========================================================================*/
	t_DateTime4Byte s_TradeIncrementalUpdateCompact::GetTradeDateTimeUnix() const
	{
		if (Size < offsetof(s_TradeIncrementalUpdateCompact, TradeDateTimeUnix) + sizeof(TradeDateTimeUnix))
			return 0;

		return TradeDateTimeUnix;
	}

	/*==========================================================================*/
	unsigned __int16 s_TradeIncrementalUpdateCompact::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_TradeIncrementalUpdateCompact, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/****************************************************************************/
	// s_DailyVolumeIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_DailyVolumeIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_DailyVolumeIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_DailyVolumeIncrementalUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_DailyVolumeIncrementalUpdate::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_DailyVolumeIncrementalUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	double s_DailyVolumeIncrementalUpdate::GetDailyVolume() const
	{
		if (Size < offsetof(s_DailyVolumeIncrementalUpdate, DailyVolume) + sizeof(DailyVolume))
			return 0.0;

		return DailyVolume;
	}

	/****************************************************************************/
	// s_DailyHighIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_DailyHighIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_DailyHighIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_DailyHighIncrementalUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_DailyHighIncrementalUpdate::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_DailyHighIncrementalUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	double s_DailyHighIncrementalUpdate::GetDailyHigh() const
	{
		if (Size < offsetof(s_DailyHighIncrementalUpdate, DailyHigh) + sizeof(DailyHigh))
			return 0.0;

		return DailyHigh;
	}

	/****************************************************************************/
	// s_DailyLowIncrementalUpdate

	/*==========================================================================*/
	unsigned __int16 s_DailyLowIncrementalUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_DailyLowIncrementalUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_DailyLowIncrementalUpdate), Size));
	}

	/*==========================================================================*/
	unsigned __int16 s_DailyLowIncrementalUpdate::GetMarketDataSymbolID() const
	{
		if (Size < offsetof(s_DailyLowIncrementalUpdate, MarketDataSymbolID) + sizeof(MarketDataSymbolID))
			return 0;

		return MarketDataSymbolID;
	}

	/*==========================================================================*/
	double s_DailyLowIncrementalUpdate::GetDailyLow() const
	{
		if (Size < offsetof(s_DailyLowIncrementalUpdate, DailyLow) + sizeof(DailyLow))
			return 0.0;

		return DailyLow;
	}

	/****************************************************************************/
	// s_SubmitNewSingleOrder

	/*==========================================================================*/
	unsigned __int16 s_SubmitNewSingleOrder::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SubmitNewSingleOrder::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SubmitNewSingleOrder), Size));
	}

	/****************************************************************************/
	// s_CancelReplaceOrder

	/*==========================================================================*/
	unsigned __int16 s_CancelReplaceOrder::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_CancelReplaceOrder::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_CancelReplaceOrder), Size));
	}

	/****************************************************************************/
	// s_CancelReplaceOrder2

	/*==========================================================================*/
	unsigned __int16 s_CancelReplaceOrder2::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_CancelReplaceOrder2::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_CancelReplaceOrder2), Size));
	}

	/****************************************************************************/
	// s_CancelOrder

	/*==========================================================================*/
	unsigned __int16 s_CancelOrder::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_CancelOrder::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_CancelOrder), Size));
	}

	/****************************************************************************/
	// s_SubmitNewOCOOrder

	/*==========================================================================*/
	unsigned __int16 s_SubmitNewOCOOrder::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SubmitNewOCOOrder::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SubmitNewOCOOrder), Size));
	}

	/****************************************************************************/
	// s_OpenOrdersRequest

	/*==========================================================================*/
	unsigned __int16 s_OpenOrdersRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_OpenOrdersRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_OpenOrdersRequest), Size));
	}

	/****************************************************************************/
	// s_HistoricalOrderFillsRequest

	/*==========================================================================*/
	unsigned __int16 s_HistoricalOrderFillsRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalOrderFillsRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalOrderFillsRequest), Size));
	}

	/****************************************************************************/
	// s_CurrentPositionsRequest

	/*==========================================================================*/
	unsigned __int16 s_CurrentPositionsRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_CurrentPositionsRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_CurrentPositionsRequest), Size));
	}

	/****************************************************************************/
	// s_CurrentPositionsRequestReject

	/*==========================================================================*/
	unsigned __int16 s_CurrentPositionsRequestReject::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_CurrentPositionsRequestReject::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_CurrentPositionsRequestReject), Size));
	}

	/****************************************************************************/
	// s_OrderUpdateReport

	/*==========================================================================*/
	unsigned __int16 s_OrderUpdateReport::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_OrderUpdateReport), Size));
	}

	/*==========================================================================*/
	char* s_OrderUpdateReport::GetSymbol()
	{
		if (Size < offsetof(s_OrderUpdateReport, Symbol) + sizeof(Symbol))
			return "";

		Symbol[sizeof(Symbol) - 1] = '\0';

		return Symbol;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetSymbol(const char* NewValue)
	{
		strncpy(Symbol, NewValue, sizeof(Symbol) - 1);
	}

	/*==========================================================================*/
	char* s_OrderUpdateReport::GetExchange()
	{
		if (Size < offsetof(s_OrderUpdateReport, Exchange) + sizeof(Exchange))
			return "";

		Exchange[sizeof(Exchange) - 1] = '\0';

		return Exchange;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetExchange(const char* NewValue)
	{
		strncpy(Exchange, NewValue, sizeof(Exchange) - 1);
	}
	/*==========================================================================*/
	char* s_OrderUpdateReport::GetPreviousServerOrderID()
	{
		if (Size < offsetof(s_OrderUpdateReport, PreviousServerOrderID) + sizeof(PreviousServerOrderID))
			return "";

		PreviousServerOrderID[sizeof(PreviousServerOrderID) - 1] = '\0';

		return PreviousServerOrderID;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetPreviousServerOrderID(const char* NewValue)
	{
		strncpy(PreviousServerOrderID, NewValue, sizeof(PreviousServerOrderID) - 1);
	}

	/*==========================================================================*/
	char* s_OrderUpdateReport::GetServerOrderID()
	{
		if (Size < offsetof(s_OrderUpdateReport, ServerOrderID) + sizeof(ServerOrderID))
			return "";

		ServerOrderID[sizeof(ServerOrderID) - 1] = '\0';

		return ServerOrderID;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetServerOrderID(const char* NewValue)
	{
		strncpy(ServerOrderID, NewValue, sizeof(ServerOrderID) - 1);
	}

	/*==========================================================================*/
	char* s_OrderUpdateReport::GetClientOrderID()
	{
		if (Size < offsetof(s_OrderUpdateReport, ClientOrderID) + sizeof(ClientOrderID))
			return "";

		ClientOrderID[sizeof(ClientOrderID) - 1] = '\0';

		return ClientOrderID;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetClientOrderID(const char* NewValue)
	{
		strncpy(ClientOrderID, NewValue, sizeof(ClientOrderID) - 1);
	}

	/*==========================================================================*/
	char* s_OrderUpdateReport::GetExchangeOrderID()
	{
		if (Size < offsetof(s_OrderUpdateReport, ExchangeOrderID) + sizeof(ExchangeOrderID))
			return "";

		ExchangeOrderID[sizeof(ExchangeOrderID) - 1] = '\0';

		return ExchangeOrderID;
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetExchangeOrderID(const char* NewValue)
	{
		strncpy(ExchangeOrderID, NewValue, sizeof(ExchangeOrderID) - 1);
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetUniqueFillExecutionID(const char* NewValue)
	{
		strncpy(UniqueFillExecutionID, NewValue, sizeof(UniqueFillExecutionID) - 1);
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetTradeAccount(const char* NewValue)
	{
		strncpy(TradeAccount, NewValue, sizeof(TradeAccount) - 1);
	}

	/*==========================================================================*/
	void s_OrderUpdateReport::SetInfoText(const char* NewValue)
	{
		strncpy(InfoText, NewValue, sizeof(InfoText) - 1);
	}

	/****************************************************************************/
	// s_OpenOrdersRequestReject

	/*==========================================================================*/
	unsigned __int16 s_OpenOrdersRequestReject::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_OpenOrdersRequestReject::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_OpenOrdersRequestReject), Size));
	}

	/****************************************************************************/
	// s_HistoricalOrderFillReport

	/*==========================================================================*/
	unsigned __int16 s_HistoricalOrderFillReport::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalOrderFillReport::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalOrderFillReport), Size));
	}

	/****************************************************************************/
	// s_PositionReport

	/*==========================================================================*/
	unsigned __int16 s_PositionReport::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_PositionReport::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_PositionReport), Size));
	}

	/*==========================================================================*/
	void s_PositionReport::SetSymbol(const char* NewValue)
	{
		strncpy(Symbol, NewValue, sizeof(Symbol) - 1);
	}

	/*==========================================================================*/
	void s_PositionReport::SetTradeAccount(const char* NewValue)
	{
		strncpy(TradeAccount, NewValue, sizeof(TradeAccount) - 1);
	}

	/****************************************************************************/
	// s_AccountsRequest

	/*==========================================================================*/
	unsigned __int16 s_AccountsRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_AccountsRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_AccountsRequest), Size));
	}

	/****************************************************************************/
	// s_AccountListResponse

	/*==========================================================================*/
	unsigned __int16 s_AccountListResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_AccountListResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_AccountListResponse), Size));
	}

	/****************************************************************************/
	// s_ExchangeListRequest

	/*==========================================================================*/
	unsigned __int16 s_ExchangeListRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_ExchangeListRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_ExchangeListRequest), Size));
	}

	/****************************************************************************/
	// s_ExchangeListResponse

	/*==========================================================================*/
	unsigned __int16 s_ExchangeListResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_ExchangeListResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_ExchangeListResponse), Size));
	}

	/****************************************************************************/
	// s_SymbolsForExchangeRequest

	/*==========================================================================*/
	unsigned __int16 s_SymbolsForExchangeRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SymbolsForExchangeRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SymbolsForExchangeRequest), Size));
	}

	/****************************************************************************/
	// s_UnderlyingSymbolsForExchangeRequest

	/*==========================================================================*/
	unsigned __int16 s_UnderlyingSymbolsForExchangeRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_UnderlyingSymbolsForExchangeRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_UnderlyingSymbolsForExchangeRequest), Size));
	}

	/****************************************************************************/
	// s_SymbolsForUnderlyingRequest

	/*==========================================================================*/
	unsigned __int16 s_SymbolsForUnderlyingRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SymbolsForUnderlyingRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SymbolsForUnderlyingRequest), Size));
	}

	/****************************************************************************/
	// s_SecurityDefinitionForSymbolRequest

	/*==========================================================================*/
	unsigned __int16 s_SecurityDefinitionForSymbolRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SecurityDefinitionForSymbolRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SecurityDefinitionForSymbolRequest), Size));
	}


	/****************************************************************************/
	// s_SecurityDefinitionResponse

	/*==========================================================================*/
	unsigned __int16 s_SecurityDefinitionResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_SecurityDefinitionResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_SecurityDefinitionResponse), Size));
	}

	/*==========================================================================*/
	__int32 s_SecurityDefinitionResponse::GetRequestID() const
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, RequestID) + sizeof(RequestID))
			return 0;

		return RequestID;
	}

	/*==========================================================================*/
	const char* s_SecurityDefinitionResponse::GetSymbol()
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, Symbol) + sizeof(Symbol))
			return "";

		Symbol[sizeof(Symbol) - 1] = '\0';  // Ensure that the null terminator exists

		return Symbol;
	}

	/*==========================================================================*/
	const char* s_SecurityDefinitionResponse::GetExchange()
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, Exchange) + sizeof(Exchange))
			return "";

		Exchange[sizeof(Exchange) - 1] = '\0';  // Ensure that the null terminator exists

		return Exchange;
	}

	/*==========================================================================*/
	SecurityTypeEnum s_SecurityDefinitionResponse::GetSecurityType() const
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, SecurityType) + sizeof(SecurityType))
			return ST_UNSET;

		return SecurityType;
	}

	/*==========================================================================*/
	const char* s_SecurityDefinitionResponse::GetSymbolDescription()
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, SymbolDescription) + sizeof(SymbolDescription))
			return "";

		SymbolDescription[sizeof(SymbolDescription) - 1] = '\0';  // Ensure that the null terminator exists

		return SymbolDescription;
	}

	/*==========================================================================*/
	float s_SecurityDefinitionResponse::GetTickSize() const
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, TickSize) + sizeof(TickSize))
			return 0;

		return TickSize;
	}

	/*==========================================================================*/
	DisplayFormatEnum s_SecurityDefinitionResponse::GetPriceDisplayFormat() const
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, PriceDisplayFormat) + sizeof(PriceDisplayFormat))
			return DISPLAY_FORMAT_UNSET;

		return PriceDisplayFormat;
	}

	/*==========================================================================*/
	float s_SecurityDefinitionResponse::GetTickCurrencyValue() const
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, TickCurrencyValue) + sizeof(TickCurrencyValue))
			return 0;

		return TickCurrencyValue;
	}

	/*==========================================================================*/
	char s_SecurityDefinitionResponse::GetFinalMessage() const
	{
		if (Size < offsetof(s_SecurityDefinitionResponse, FinalMessage) + sizeof(FinalMessage))
			return 0;

		return FinalMessage;
	}

	/****************************************************************************/
	// s_AccountBalanceUpdate

	/*==========================================================================*/
	unsigned __int16 s_AccountBalanceUpdate::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_AccountBalanceUpdate::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_AccountBalanceUpdate), Size));
	}

	/*==========================================================================*/
	void s_AccountBalanceUpdate::SetAccountCurrency(const char* NewValue)
	{
		strncpy(AccountCurrency, NewValue, sizeof(AccountCurrency) - 1);
	}

	/*==========================================================================*/
	void s_AccountBalanceUpdate::SetTradeAccount(const char* NewValue)
	{
		strncpy(TradeAccount, NewValue, sizeof(TradeAccount) - 1);
	}

	/****************************************************************************/
	// s_UserMessage

	/*==========================================================================*/
	unsigned __int16 s_UserMessage::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_UserMessage::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_UserMessage), Size));
	}

	/****************************************************************************/
	// s_GeneralLogMessage

	/*==========================================================================*/
	unsigned __int16 s_GeneralLogMessage::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_GeneralLogMessage::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_GeneralLogMessage), Size));
	}

	/****************************************************************************/
	// s_HistoricalPriceDataRequest

	/*==========================================================================*/
	unsigned __int16 s_HistoricalPriceDataRequest::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataRequest::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalPriceDataRequest), Size));
	}

	/*==========================================================================*/
	char* s_HistoricalPriceDataRequest::GetSymbol()
	{
		if (Size < offsetof(s_HistoricalPriceDataRequest, Symbol) + sizeof(Symbol))
			return "";

		Symbol[sizeof(Symbol) - 1] = '\0';

		return Symbol;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataRequest::SetSymbol(const char* NewValue)
	{
		strncpy(Symbol, NewValue, sizeof(Symbol) - 1);
	}

	/*==========================================================================*/
	char* s_HistoricalPriceDataRequest::GetExchange()
	{
		if (Size < offsetof(s_HistoricalPriceDataRequest, Exchange) + sizeof(Exchange))
			return "";

		Exchange[sizeof(Exchange) - 1] = '\0';

		return Exchange;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataRequest::SetExchange(const char* NewValue)
	{
		strncpy(Exchange, NewValue, sizeof(Exchange) - 1);
	}

	/****************************************************************************/
	// s_HistoricalPriceDataHeaderResponse

	/*==========================================================================*/
	unsigned __int16 s_HistoricalPriceDataHeaderResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataHeaderResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalPriceDataHeaderResponse), Size));
	}

	/****************************************************************************/
	// s_HistoricalPriceDataReject

	/*==========================================================================*/
	unsigned __int16 s_HistoricalPriceDataReject::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataReject::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalPriceDataReject), Size));
	}

	/****************************************************************************/
	// s_HistoricalPriceDataRecordResponse

	/*==========================================================================*/
	unsigned __int16 s_HistoricalPriceDataRecordResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataRecordResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalPriceDataRecordResponse), Size));
	}

	/****************************************************************************/
	// s_HistoricalPriceDataTickRecordResponse

	/*==========================================================================*/
	unsigned __int16 s_HistoricalPriceDataTickRecordResponse::GetMessageSize()
	{
		return Size;
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataTickRecordResponse::CopyFrom(void* p_SourceData)
	{
		memcpy(this, p_SourceData, min(sizeof(s_HistoricalPriceDataTickRecordResponse), Size));
	}

	/*==========================================================================*/
	void s_HistoricalPriceDataTickRecordResponse::Clear()
	{
		memset(this, 0,sizeof(s_HistoricalPriceDataTickRecordResponse));
		Type=HISTORICAL_PRICE_DATA_TICK_RECORD_RESPONSE;
		Size=sizeof(s_HistoricalPriceDataTickRecordResponse);
	}


	/*==========================================================================*/
}