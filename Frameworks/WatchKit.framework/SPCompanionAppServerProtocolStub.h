/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SPCompanionAppServerProtocol.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTimingData:(id)arg1 timingMetaData:(id)arg2 ;
-(void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2 ;
@end
