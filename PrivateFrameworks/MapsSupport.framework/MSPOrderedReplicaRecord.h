/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MSPPosition, MSPVectorTimestamp;


@protocol MSPOrderedReplicaRecord <MSPReplicaRecord>
@property (nonatomic,readonly) MSPPosition * position; 
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp; 
@required
-(MSPPosition *)position;
-(MSPVectorTimestamp *)positionTimestamp;

@end
