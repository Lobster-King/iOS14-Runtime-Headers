/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VEKProgress : NSObject {

	float _percent;
	NSString* _taskDescription;
	NSString* _stageDescription;

}

@property (assign) float percent;                          //@synthesize percent=_percent - In the implementation block
@property (copy) NSString * taskDescription;               //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSString * stageDescription;              //@synthesize stageDescription=_stageDescription - In the implementation block
-(NSString *)taskDescription;
-(void)setTaskDescription:(NSString *)arg1 ;
-(float)percent;
-(void)setPercent:(float)arg1 ;
-(void)setStageDescription:(NSString *)arg1 ;
-(NSString *)stageDescription;
@end
