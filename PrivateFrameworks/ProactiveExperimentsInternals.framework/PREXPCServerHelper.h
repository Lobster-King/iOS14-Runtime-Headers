/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/ProactiveExperimentsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PREXPCServerHelper : NSObject
+(BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 ;
+(BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 ;
+(BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 requestHandler:(id)arg4 validateConnection:(/*^block*/id)arg5 setupClientProxy:(/*^block*/id)arg6 interruptionHandler:(/*^block*/id)arg7 invalidationHandler:(/*^block*/id)arg8 ;
@end
