/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUISoftwareKeyboardManagerDelegate;
@class NSMutableSet;

@interface AXUISoftwareKeyboardManager : NSObject {

	NSMutableSet* _reasonsToDisableSoftwareKeyboard;
	NSMutableSet* _reasonsToEnableSoftwareKeyboard;
	id<AXUISoftwareKeyboardManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXUISoftwareKeyboardManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(BOOL)isHardwareKeyboardAttached;
-(void)setDelegate:(id<AXUISoftwareKeyboardManagerDelegate>)arg1 ;
-(void)updateKeyboardHardwareState;
-(void)_wst_setIsHardwareKeyboardAttached:(id)arg1 ;
-(void)_setIsHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)_updateHardwareKeyboardState;
-(void)_overrideSetHardwareKeyboardAttached:(BOOL)arg1 ;
-(void)addReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToEnableSoftwareKeyboard:(id)arg1 ;
-(void)addReasonToDisableSoftwareKeyboard:(id)arg1 ;
-(void)removeReasonToDisableSoftwareKeyboard:(id)arg1 ;
-(id<AXUISoftwareKeyboardManagerDelegate>)delegate;
@end
