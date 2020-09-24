/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBFCancelable;
@class UIImageView, UIScrollView, SBFWallpaperParallaxSettings, SBFSubject, NSString;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {

	UIImageView* _imageView;
	UIScrollView* _scrollView;
	SBFWallpaperParallaxSettings* _parallaxSettings;
	SBFSubject* _scrollViewObserver;
	id<SBFCancelable> _colorBoxCancelToken;
	id<SBFCancelable> _parallaxCancelToken;
	double _minimumZoomScaleForParallax;
	double _minimumZoomScale;
	BOOL _automaticallyEnablesParallax;

}

@property (assign,nonatomic) BOOL automaticallyEnablesParallax;              //@synthesize automaticallyEnablesParallax=_automaticallyEnablesParallax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_canDownscaleSampleImage;
+(BOOL)_canCacheImages;
+(BOOL)_shouldScaleForParallax;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(id)_scrollView;
-(double)cropZoomScale;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)parallaxFactor;
-(CGRect)cropRect;
-(BOOL)supportsCropping;
-(double)_throttleDuration;
-(CGRect)_cropRect;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)dealloc;
-(CGPoint)_maximumContentOffsetForOverhang;
-(CGPoint)_boundedContentOffsetForOverhang;
-(void)layoutSubviews;
-(void)_setupScrollView;
-(void)setContentView:(id)arg1 ;
-(void)setAutomaticallyEnablesParallax:(BOOL)arg1 ;
-(CGSize)_imageSize;
-(double)_scrollViewParallaxFactor;
-(double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(CGPoint)arg2 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(BOOL)automaticallyEnablesParallax;
-(void)_resetColorBoxes;
-(id)_newImageView;
-(void)_setupParallaxObserver;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)_setupScrollViewObserver;
-(void)_updateScrollViewZoomScales;
-(id)_wallpaperImageForAnalysis;
-(void)_updateParallaxForScroll;
-(void)_setupColorBoxObserver;
-(void)didMoveToWindow;
-(CGPoint)_minimumContentOffsetForOverhang;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
@end
