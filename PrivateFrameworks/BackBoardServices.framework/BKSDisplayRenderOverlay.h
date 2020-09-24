/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDescribing.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDismissAction.h>

@class BKSDisplayRenderOverlayDescriptor, NSString, CADisplay, BKSDisplayProgressIndicatorProperties;

@interface BKSDisplayRenderOverlay : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction> {

	BKSDisplayRenderOverlayDescriptor* _descriptor;

}

@property (getter=_descriptor,nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * descriptor;                //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) CADisplay * display; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) BOOL lockBacklight; 
@property (nonatomic,readonly) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties; 
@property (getter=isInterstitial,nonatomic,readonly) BOOL interstitial; 
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
+(id)existingOverlayForDisplay:(id)arg1 ;
+(id)dismissActions;
-(long long)interfaceOrientation;
-(id)_descriptor;
-(void)dismissWithAnimation:(id)arg1 ;
-(void)freeze;
-(id)initWithDescriptor:(id)arg1 ;
-(void)present;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isInterstitial;
-(BOOL)lockBacklight;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(CADisplay *)display;
-(id)succinctDescriptionBuilder;
-(void)dismiss;
-(NSString *)name;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
@end
