/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>

@protocol FBSceneMonitorDelegate;
@class FBSceneManager, FBScene, FBSSceneIdentityToken, NSString, NSMutableSet, FBSSceneClientSettingsDiffInspector, FBSMutableSceneSettings, FBSceneMonitorBehaviors, FBSSceneSettings;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver> {

	FBSceneManager* _sceneManager;
	FBScene* _scene;
	FBSSceneIdentityToken* _identityToken;
	NSString* _sceneID;
	NSMutableSet* _externalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	FBSSceneClientSettingsDiffInspector* _diffInspector;
	FBSMutableSceneSettings* _sceneSettings;
	FBSceneMonitorBehaviors* _givenMonitorBehaviors;
	FBSceneMonitorBehaviors* _delegateMonitorBehaviors;
	FBSceneMonitorBehaviors* _effectiveMonitorBehaviors;
	BOOL _invalidated;
	BOOL _isSynchronizing;
	BOOL _updateSettingsAfterSync;
	BOOL _updateExternalScenesAfterSync;
	id<FBSceneMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) FBScene * scene;                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                               //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSceneMonitorBehaviors * behaviors;                       //@synthesize givenMonitorBehaviors=_givenMonitorBehaviors - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * sceneSettings;                      //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg1 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(FBSSceneSettings *)sceneSettings;
-(id)initWithSceneID:(id)arg1 ;
-(void)invalidate;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(NSString *)sceneID;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(id)initWithScene:(id)arg1 ;
-(void)dealloc;
-(void)_setEffectiveMonitorBehaviors:(id)arg1 ;
-(void)_updateExternalScenes:(BOOL)arg1 ;
-(void)_updateScenePairingState:(BOOL)arg1 ;
-(FBSceneMonitorBehaviors *)behaviors;
-(id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(BOOL)isPairedWithExternalSceneID:(id)arg1 ;
-(void)setDelegate:(id<FBSceneMonitorDelegate>)arg1 ;
-(void)setBehaviors:(FBSceneMonitorBehaviors *)arg1 ;
-(id<FBSceneMonitorDelegate>)delegate;
-(void)_updateSceneSettings:(BOOL)arg1 ;
-(void)_evaluateEffectiveMonitorBehaviors;
-(void)_updateAllSceneStateIgnoringDelegate;
-(id)_effectiveBehaviors;
-(FBScene *)scene;
-(NSString *)description;
@end

