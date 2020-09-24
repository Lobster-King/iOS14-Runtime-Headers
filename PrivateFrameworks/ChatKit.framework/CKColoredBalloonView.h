/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@class CKGradientView, CKBalloonImageView;

@interface CKColoredBalloonView : CKBalloonView {

	BOOL _wantsGradient;
	CKGradientView* _gradientView;
	CKBalloonImageView* _mask;
	CKBalloonImageView* _effectViewMask;
	CGRect _gradientOverrideFrame;

}

@property (nonatomic,retain) CKBalloonImageView * mask;                                           //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) CKGradientView * gradientView;                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * effectViewMask;                                 //@synthesize effectViewMask=_effectViewMask - In the implementation block
@property (assign,nonatomic) BOOL wantsGradient;                                                  //@synthesize wantsGradient=_wantsGradient - In the implementation block
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) BOOL hasBackground; 
@property (assign,nonatomic) CGRect gradientOverrideFrame;                                        //@synthesize gradientOverrideFrame=_gradientOverrideFrame - In the implementation block
-(CKBalloonImageView *)mask;
-(id)overlayColor;
-(void)configureForComposition:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(void)clearFilters;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)setMask:(CKBalloonImageView *)arg1 ;
-(BOOL)hasBackground;
-(void)configureForMessagePart:(id)arg1 ;
-(BOOL)wantsGradient;
-(CKGradientView *)gradientView;
-(void)setGradientView:(CKGradientView *)arg1 ;
-(void)setEffectViewMaskImage:(id)arg1 ;
-(void)updateWantsGradient;
-(void)setWantsGradient:(BOOL)arg1 ;
-(CKBalloonImageView *)effectViewMask;
-(CGRect)gradientOverrideFrame;
-(void)setEffectViewMask:(CKBalloonImageView *)arg1 ;
-(void)setGradientOverrideFrame:(CGRect)arg1 ;
-(void)setColor:(char)arg1 ;
-(void)prepareForDisplay;
-(void)setHasTail:(BOOL)arg1 ;
-(BOOL)needsGroupOpacity;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(id)description;
@end
