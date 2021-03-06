/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface HDPowerAssertion : NSObject {

	unsigned _assertionID;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _timeoutHandler;
	AB _invalidated;
	NSString* _identifier;
	double _timeout;

}

@property (readonly) BOOL invalidated; 
@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
+(id)powerAssertionWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(BOOL)invalidated;
-(void)invalidate;
-(double)timeout;
-(void)_timerDidFire;
-(void)dealloc;
-(id)init;
-(void)_scheduleTimer;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
@end

