/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSRunningReasonAttribute : RBSAttribute {

	unsigned long long _runningReason;

}

@property (nonatomic,readonly) unsigned long long runningReason;              //@synthesize runningReason=_runningReason - In the implementation block
+(id)withReason:(unsigned long long)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)runningReason;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
