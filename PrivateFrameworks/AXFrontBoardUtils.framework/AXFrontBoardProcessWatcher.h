/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <libobjc.A.dylib/FBProcessObserver.h>

@class AXDispatchTimer, NSSet, NSString;

@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver> {

	id _observerToken;
	AXDispatchTimer* _appTransitionTimer;
	NSSet* _cachedFocusedAppPIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)validateFocusedAppsWithEvent:(long long)arg1 ;
+(id)processForBundleIdentifier:(id)arg1 ;
+(id)accessibilitySpokenNameForProcess:(id)arg1 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)dealloc;
-(void)processDidExit:(id)arg1 ;
-(id)init;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(void)_validateFocusedApps:(long long)arg1 ;
-(id)_processDescriptionForPID:(int)arg1 ;
-(BOOL)_processStateChangeIsTaskStateChangeFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_processStateChangeIsVisibilityStateChangeFrom:(id)arg1 to:(id)arg2 ;
@end

