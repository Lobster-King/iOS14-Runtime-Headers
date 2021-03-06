/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMFullscreenViewfinderLayout : NSObject {

	double _screenScale;
	CGSize _shutterIntrinsicSize;
	CGRect _referenceBounds;
	UIEdgeInsets __safeAreaInsets;

}

@property (nonatomic,readonly) UIEdgeInsets _safeAreaInsets;              //@synthesize _safeAreaInsets=__safeAreaInsets - In the implementation block
@property (assign,nonatomic) double screenScale;                          //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) CGRect referenceBounds;                      //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (assign,nonatomic) CGSize shutterIntrinsicSize;                 //@synthesize shutterIntrinsicSize=_shutterIntrinsicSize - In the implementation block
-(void)setReferenceBounds:(CGRect)arg1 ;
-(double)screenScale;
-(void)_updateSafeAreaInsets;
-(void)setScreenScale:(double)arg1 ;
-(UIEdgeInsets)_safeAreaInsets;
-(CGRect)referenceBounds;
-(id)initWithReferenceBounds:(CGRect)arg1 shutterIntrinsicSize:(CGSize)arg2 ;
-(void)setShutterIntrinsicSize:(CGSize)arg1 ;
-(CGRect)frameForControlStatusBar;
-(CGRect)frameForBottomLeftControl:(id)arg1 ;
-(CGRect)frameForShutterControl:(id)arg1 ;
-(SCD_Struct_CA44)geometryForElapsedTimeView:(id)arg1 viewportFrame:(CGRect)arg2 orientation:(long long)arg3 ;
-(CGRect)viewportFrameForAspectRatio:(long long)arg1 usingAppDrawer:(BOOL)arg2 accessoryAreaExpanded:(BOOL)arg3 ;
-(CGRect)alignmentRectForShutterControl;
-(CGRect)frameForBottomRightControl:(id)arg1 ;
-(CGSize)viewportSizeForAspectRatio:(long long)arg1 ;
-(CGSize)shutterIntrinsicSize;
-(CGRect)viewportFrameForAspectRatio:(long long)arg1 accessoryAreaExpanded:(BOOL)arg2 ;
-(CGRect)frameForBottomControl:(id)arg1 betweenShutterAndLeftControl:(id)arg2 ;
-(CGRect)frameForBottomControl:(id)arg1 betweenShutterAndRightControl:(id)arg2 ;
@end

