/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SPXPCConnection;

@interface SPUIAppService : NSObject {

	int _awakeNotifyToken;
	NSObject*<OS_dispatch_queue> _appServiceQueue;
	SPXPCConnection* _backgroundConnection;
	SPXPCConnection* _appConnection;
	BOOL _activated;

}
+(void)initialize;
+(id)sharedAppService;
-(void)registerAwakeNotifyToken;
-(void)_cancelAwakeNotifyToken;
-(id)init;
-(void)deactivate;
-(void)activate;
@end

