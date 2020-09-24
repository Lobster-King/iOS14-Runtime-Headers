/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HUQuickControlViewProfile;


@protocol HUQuickControlControllableView <NSObject>
@property (nonatomic,retain) id value; 
@property (nonatomic,copy) HUQuickControlViewProfile * profile; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState; 
@optional
-(unsigned long long)reachabilityState;
-(void)setReachabilityState:(unsigned long long)arg1;
-(id)secondaryValue;
-(void)setSecondaryValue:(id)arg1;

@required
-(void)setProfile:(id)arg1;
-(id)initWithProfile:(id)arg1;
-(void)setValue:(id)arg1;
-(HUQuickControlViewProfile *)profile;
-(id)value;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;

@end
