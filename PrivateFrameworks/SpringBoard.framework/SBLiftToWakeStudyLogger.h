/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLiftToWakeObserver.h>

@class SLGLog, SBLiftToWakeController, NSString;

@interface SBLiftToWakeStudyLogger : NSObject <SBLiftToWakeObserver> {

	SLGLog* _logger;
	SBLiftToWakeController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithController:(id)arg1 ;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3 ;
@end
