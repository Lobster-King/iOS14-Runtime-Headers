/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VCXPCServerUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;
	int _eventLogLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
@property (assign,nonatomic) int eventLogLevel;                               //@synthesize eventLogLevel=_eventLogLevel - In the implementation block
-(void)setEventLogLevel:(int)arg1 ;
-(void)dealloc;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)eventLogLevel;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
