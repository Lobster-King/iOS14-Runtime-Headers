/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SRTCCStore, OS_dispatch_queue;
@class NSDictionary, NSHashTable, NSObject;

@interface SRAuthorizationStore : NSObject {

	int _notifyToken;
	BOOL _sensorKitActive;
	NSDictionary* _authorizationValues;
	NSDictionary* _lastModifiedAuthorizationTimes;
	NSHashTable* _delegates;
	id<SRTCCStore> _tccStore;
	NSObject*<OS_dispatch_queue> _updateQueue;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
@end

