/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRSUIDashboardFocusableItemProviding.h>

@protocol CPSButtonDelegate;
@class CPDashboardButton, UIImageView, UIColor, CPSAbridgableLabel, UIButton, UIView, NSLayoutConstraint, NSString;

@interface CPSDashboardItemView : UIView <CRSUIDashboardFocusableItemProviding> {

	CPDashboardButton* _dashboardButton;
	UIImageView* _imageView;
	id<CPSButtonDelegate> _delegate;
	UIColor* _focusHighlightColor;
	CPSAbridgableLabel* _subtitleLabel;
	CPSAbridgableLabel* _titleLabel;
	UIButton* _button;
	UIView* _focusBackgroundView;
	unsigned long long _layoutAxis;
	NSLayoutConstraint* _subtitleWidthConstraint;
	NSLayoutConstraint* _titleLabelConnectingConstraint;

}

@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * subtitleLabel;                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIView * focusBackgroundView;                                     //@synthesize focusBackgroundView=_focusBackgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutAxis;                                    //@synthesize layoutAxis=_layoutAxis - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subtitleWidthConstraint;                     //@synthesize subtitleWidthConstraint=_subtitleWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelConnectingConstraint;              //@synthesize titleLabelConnectingConstraint=_titleLabelConnectingConstraint - In the implementation block
@property (nonatomic,readonly) CPDashboardButton * dashboardButton;                            //@synthesize dashboardButton=_dashboardButton - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                          //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<CPSButtonDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * focusHighlightColor;                                    //@synthesize focusHighlightColor=_focusHighlightColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutAxis:(unsigned long long)arg1 ;
-(CPSAbridgableLabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(unsigned long long)layoutAxis;
-(void)setButton:(UIButton *)arg1 ;
-(void)_touchDown:(id)arg1 ;
-(void)setSubtitleLabel:(CPSAbridgableLabel *)arg1 ;
-(UIColor *)focusHighlightColor;
-(UIButton *)button;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(CPSAbridgableLabel *)subtitleLabel;
-(void)setDelegate:(id<CPSButtonDelegate>)arg1 ;
-(void)setFocusHighlightColor:(UIColor *)arg1 ;
-(id<CPSButtonDelegate>)delegate;
-(void)_setup;
-(UIImageView *)imageView;
-(void)hideSubtitle;
-(id)initWithDashboardButton:(id)arg1 layoutAxis:(unsigned long long)arg2 ;
-(CPDashboardButton *)dashboardButton;
-(void)_buttonTriggered:(id)arg1 ;
-(void)_touchEnded:(id)arg1 ;
-(UIView *)focusBackgroundView;
-(NSLayoutConstraint *)titleLabelConnectingConstraint;
-(NSLayoutConstraint *)subtitleWidthConstraint;
-(void)setSubtitleWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)focusableItemPressed:(BOOL)arg1 ;
-(void)focusableItemSelected;
-(void)focusableItemFocused:(BOOL)arg1 ;
-(void)setFocusBackgroundView:(UIView *)arg1 ;
-(void)setTitleLabelConnectingConstraint:(NSLayoutConstraint *)arg1 ;
@end
