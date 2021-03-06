/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, CCUISensorActivityData;

@interface CCUISensorActivityDataProvider : NSObject {

	NSSet* _activeSensorActivityData;
	CCUISensorActivityData* _mostRecentSensorActivityData;

}

@property (nonatomic,retain) NSSet * activeSensorActivityData;                                 //@synthesize activeSensorActivityData=_activeSensorActivityData - In the implementation block
@property (nonatomic,copy) CCUISensorActivityData * mostRecentSensorActivityData;              //@synthesize mostRecentSensorActivityData=_mostRecentSensorActivityData - In the implementation block
-(CCUISensorActivityData *)mostRecentSensorActivityData;
-(NSSet *)activeSensorActivityData;
-(void)setActiveSensorActivityData:(NSSet *)arg1 ;
-(void)setMostRecentSensorActivityData:(CCUISensorActivityData *)arg1 ;
@end

