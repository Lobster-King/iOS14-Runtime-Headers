/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)serviceProxy;
+(id)inAppServiceInterface;
+(id)inAppClientInterface;
-(id)objectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)serviceConnection;
-(void)_serviceConnectionInvalidated;
-(id)inAppServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)inAppService;
@end
