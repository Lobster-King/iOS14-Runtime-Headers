/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(void)notifyDaemonStateChanged:(unsigned long long)arg1 ;
-(void)_stopMonitoring;
-(id)init;
-(void)_notifyObserver:(id)arg1 withDaemonState:(unsigned long long)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveDaemonStateChanged:(unsigned long long)arg1 ;
@end

