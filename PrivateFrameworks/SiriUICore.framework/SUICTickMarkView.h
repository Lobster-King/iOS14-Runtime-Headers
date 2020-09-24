/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CADisplayLink, NSTimer, NSLock;

@interface SUICTickMarkView : UIView {

	CADisplayLink* _displayLink;
	BOOL _shown;
	long long _currentPreferredFrameRate;
	long long _currentFrame;
	int _animState;
	NSTimer* _safetyTimer;
	BOOL _completionCalled;
	/*^block*/id _completionBlock;
	NSLock* _completionLock;
	long long _fadeInFrames;
	long long _pauseFrames;
	long long _fadeOutFrames;

}
+(void)initialize;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setUpDisplayLink;
-(CGImageRef)imageMask:(BOOL)arg1 ;
-(void)handleSafetyTimer:(id)arg1 ;
-(void)tearDownDisplayLink;
-(void)startAnimationsForTickMark:(BOOL)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(/*^block*/id)arg5 ;
@end
