/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedTaskAttribution;

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (assign,nonatomic) BOOL isRepeatedInstance; 
@property (assign,nonatomic) BOOL hasIsRepeatedInstance; 
+(id)descriptor;
@end
