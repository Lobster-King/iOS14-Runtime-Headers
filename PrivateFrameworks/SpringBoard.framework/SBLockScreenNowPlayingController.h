/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBLockScreenNowPlayingControllerDelegate;
@class SBMediaController, PCPersistentTimer, CSLockScreenSettings, PTToggleTestRecipe, NSString;

@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver> {

	SBMediaController* _mediaController;
	PCPersistentTimer* _disableTimer;
	CSLockScreenSettings* _testSettings;
	PTToggleTestRecipe* _testRecipe;
	BOOL _enabled;
	long long _currentState;
	id<SBLockScreenNowPlayingControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenNowPlayingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long currentState;                                                  //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)currentState;
-(void)_removeObservers;
-(BOOL)isEnabled;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setDelegate:(id<SBLockScreenNowPlayingControllerDelegate>)arg1 ;
-(id<SBLockScreenNowPlayingControllerDelegate>)delegate;
-(void)_addObservers;
-(void)setEnabled:(BOOL)arg1 ;
-(double)_timeoutInterval;
-(void)_updateNowPlayingPlugin;
-(void)_invalidateDisableTimer;
-(void)_updateToState:(long long)arg1 ;
-(BOOL)_isMediaRecentlyActive;
-(void)_startDisableTimer;
-(void)_disableTimerFired;
-(id)initWithMediaController:(id)arg1 ;
-(BOOL)isNowPlayingActive;
@end
