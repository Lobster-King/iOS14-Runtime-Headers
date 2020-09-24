/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WBSFluidProgressControllerDelegate.h>

@protocol _SFFluidProgressViewDelegate;
@class UIView, WBSFluidProgressState, UIColor, NSString;

@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate> {

	UIView* _progressBar;
	UIView* _clippingView;
	WBSFluidProgressState* _state;
	BOOL _progressAnimationSuppressed;
	id<_SFFluidProgressViewDelegate> _delegate;
	UIColor* _progressBarFillColor;
	double _cornerRadius;

}

@property (assign,nonatomic) BOOL progressAnimationSuppressed;                              //@synthesize progressAnimationSuppressed=_progressAnimationSuppressed - In the implementation block
@property (assign,nonatomic,__weak) id<_SFFluidProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingProgress,nonatomic,readonly) BOOL showingProgress; 
@property (nonatomic,retain) UIColor * progressBarFillColor;                                //@synthesize progressBarFillColor=_progressBarFillColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
-(double)cornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)progressBarFillColor;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(void)_animateUsingDefaultTiming:(BOOL)arg1 stepAnimationTime:(double)arg2 options:(unsigned long long)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<_SFFluidProgressViewDelegate>)arg1 ;
-(CGRect)_progressBarBoundsForValue:(double)arg1 ;
-(void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(BOOL)arg2 ;
-(void)setProgressBarFillColor:(UIColor *)arg1 ;
-(id<_SFFluidProgressViewDelegate>)delegate;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 duringFluidProgressState:(id)arg2 animated:(BOOL)arg3 ;
-(void)_finishProgressBarWithDuration:(double)arg1 ;
-(void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2 ;
-(BOOL)isShowingProgress;
-(void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(BOOL)arg3 ;
-(BOOL)progressAnimationSuppressed;
-(void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2 ;
@end
