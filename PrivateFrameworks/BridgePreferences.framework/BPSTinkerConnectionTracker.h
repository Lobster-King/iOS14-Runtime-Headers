/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBBridgeIDSReachabilityObserver.h>

@protocol BPSTinkerConnectionTrackerDelegate;
@class PBBridgeIDSReachability, NRDevice, NSString;

@interface BPSTinkerConnectionTracker : NSObject <PBBridgeIDSReachabilityObserver> {

	PBBridgeIDSReachability* _reachability;
	NRDevice* _selectedDevice;
	id<BPSTinkerConnectionTrackerDelegate> _delegate;

}

@property (nonatomic,retain) NRDevice * selectedDevice;                                           //@synthesize selectedDevice=_selectedDevice - In the implementation block
@property (assign,nonatomic,__weak) id<BPSTinkerConnectionTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<BPSTinkerConnectionTrackerDelegate>)arg1 ;
-(id<BPSTinkerConnectionTrackerDelegate>)delegate;
-(id)initWithDevice:(id)arg1 ;
-(void)reachability:(id)arg1 device:(id)arg2 connectionStatus:(unsigned long long)arg3 ;
-(void)setSelectedDevice:(NRDevice *)arg1 ;
-(NRDevice *)selectedDevice;
@end
