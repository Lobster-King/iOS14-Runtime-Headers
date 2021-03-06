/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSSafariSandboxBrokerProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)ensureConnected:(/*^block*/id)arg1 ;
-(void)_connectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

