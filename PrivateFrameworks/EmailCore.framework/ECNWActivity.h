/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_activity, OS_nw_connection;
@class NSObject;

@interface ECNWActivity : NSObject {

	NSObject*<OS_nw_activity> _activity;
	NSObject*<OS_nw_connection> _currentConnection;

}
+(void)attachCurrentActivityToConnection:(id)arg1 ;
+(void)detachCurrentActivityFromConnection:(id)arg1 ;
-(id)initWithDomain:(unsigned)arg1 type:(unsigned)arg2 ;
-(void)stopActivityWithSuccess:(BOOL)arg1 ;
-(void)startActivity;
@end
