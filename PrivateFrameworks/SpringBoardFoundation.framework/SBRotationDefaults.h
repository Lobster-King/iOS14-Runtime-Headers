/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) long long lastLockedOrientation; 
@property (getter=isVideoRotationEnabled,nonatomic,readonly) BOOL videoRotationEnabled; 
-(void)setVideoRotationEnabled:(BOOL)arg1 ;
-(BOOL)isVideoRotationEnabled;
-(void)setLastLockedOrientation:(long long)arg1 ;
-(long long)lastLockedOrientation;
-(void)_bindAndRegisterDefaults;
@end
