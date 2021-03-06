/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPUTimedAnimationGroup.h>

@class CALayer;

@interface QLPULayerAnimationGroup : QLPUTimedAnimationGroup {

	BOOL _areTrackedAnimationsPaused;
	CALayer* _referenceLayer;

}

@property (nonatomic,readonly) CALayer * referenceLayer;              //@synthesize referenceLayer=_referenceLayer - In the implementation block
-(void)updateAnimations;
-(id)init;
-(id)initWithReferenceLayer:(id)arg1 ;
-(CALayer *)referenceLayer;
-(double)currentTime;
@end

