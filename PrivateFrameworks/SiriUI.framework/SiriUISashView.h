/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, SiriUITextContainerView, UIVisualEffectView, SiriUISashItem, UIButton;

@interface SiriUISashView : UIView {

	UIView* _contentView;
	UIImageView* _imageView;
	SiriUITextContainerView* _textContainerView;
	BOOL _requestsExtraPadding;
	UIVisualEffectView* _vibrantButtonBackgroundView;
	UIVisualEffectView* _vibrantTextBackgroundView;
	BOOL _navigating;
	SiriUISashItem* _sashItem;
	UIButton* _backNavigationButton;

}

@property (assign,getter=isNavigating,nonatomic) BOOL navigating;              //@synthesize navigating=_navigating - In the implementation block
@property (nonatomic,readonly) UIButton * backNavigationButton;                //@synthesize backNavigationButton=_backNavigationButton - In the implementation block
@property (nonatomic,readonly) SiriUISashItem * sashItem;                      //@synthesize sashItem=_sashItem - In the implementation block
+(id)_font;
+(SCD_Struct_Si6)_textContainerStyleForSashItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isNavigating;
-(void)setNavigating:(BOOL)arg1 ;
-(SiriUISashItem *)sashItem;
-(UIButton *)backNavigationButton;
-(void)setSashItem:(id)arg1 locale:(id)arg2 ;
@end
