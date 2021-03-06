/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/_PKUIKVisibilityBackdropViewDelegate.h>

@protocol PKExplanationViewDelegate;
@class UIImageView, PKPaymentSetupDockView, NSString, UILabel, UIActivityIndicatorView, _PKUIKVisibilityBackdropView, UIButton, UITextView, UIView, UIImage, UIColor, UIFont, NSAttributedString, OBPrivacyLinkController, UIScrollView, LAUICheckmarkLayer;

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate, _PKUIKVisibilityBackdropViewDelegate> {

	long long _context;
	BOOL _privacyFooterShouldPin;
	UIImageView* _imageView;
	PKPaymentSetupDockView* _dockView;
	NSString* _titleText;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;
	_PKUIKVisibilityBackdropView* _backdropView;
	double _backdropWeight;
	BOOL _showPrivacyView;
	double _topMargin;
	CGRect _titleLabelFrame;
	CGRect _titleLabelLastLineBounds;
	double _titleLabelLastLineDescent;
	UIButton* _bodyButton;
	UITextView* _secondaryBodyTextView;
	UIView* _topBackgroundView;
	BOOL _forceShowSetupLaterButton;
	BOOL _hideTitleText;
	id<PKExplanationViewDelegate> _delegate;
	double _titleHyphenationFactor;
	UIImage* _image;
	UIView* _heroView;
	UIColor* _topBackgroundColor;
	UIImage* _titleImage;
	UIFont* _titleFont;
	long long _titleTextAlignment;
	NSString* _bodyText;
	NSAttributedString* _attributedBodyText;
	NSAttributedString* _attributedSecondaryBodyText;
	NSString* _bodyButtonText;
	long long _bodyButtonNumberOfLines;
	UIView* _bodyView;
	double _bodyViewPadding;
	long long _bodyTextAlignment;
	unsigned long long _bodyDataDetectorTypes;
	OBPrivacyLinkController* _privacyLink;
	UIScrollView* _scrollView;
	LAUICheckmarkLayer* _checkmarkLayer;
	UIImageView* _logoImageView;
	UITextView* _bodyTextView;
	CGSize _logoImageViewTargetSize;

}

@property (nonatomic,retain) UIImageView * logoImageView;                                 //@synthesize logoImageView=_logoImageView - In the implementation block
@property (assign,nonatomic) CGSize logoImageViewTargetSize;                              //@synthesize logoImageViewTargetSize=_logoImageViewTargetSize - In the implementation block
@property (nonatomic,retain) UITextView * bodyTextView;                                   //@synthesize bodyTextView=_bodyTextView - In the implementation block
@property (assign,nonatomic,__weak) id<PKExplanationViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showPrivacyView;                                        //@synthesize showPrivacyView=_showPrivacyView - In the implementation block
@property (assign,nonatomic) BOOL forceShowSetupLaterButton;                              //@synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton - In the implementation block
@property (assign,nonatomic) double topMargin;                                            //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double titleHyphenationFactor;                               //@synthesize titleHyphenationFactor=_titleHyphenationFactor - In the implementation block
@property (nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,retain) UIView * heroView;                                           //@synthesize heroView=_heroView - In the implementation block
@property (nonatomic,retain) UIColor * topBackgroundColor;                                //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                          //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                                        //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,copy) UIFont * titleFont;                                            //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitleText;                                          //@synthesize hideTitleText=_hideTitleText - In the implementation block
@property (assign,nonatomic) long long titleTextAlignment;                                //@synthesize titleTextAlignment=_titleTextAlignment - In the implementation block
@property (nonatomic,readonly) UIFont * bodyTextFont; 
@property (nonatomic,copy) NSString * bodyText;                                           //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedBodyText;                       //@synthesize attributedBodyText=_attributedBodyText - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSecondaryBodyText;              //@synthesize attributedSecondaryBodyText=_attributedSecondaryBodyText - In the implementation block
@property (nonatomic,copy) NSString * bodyButtonText;                                     //@synthesize bodyButtonText=_bodyButtonText - In the implementation block
@property (assign,nonatomic) long long bodyButtonNumberOfLines;                           //@synthesize bodyButtonNumberOfLines=_bodyButtonNumberOfLines - In the implementation block
@property (nonatomic,retain) UIView * bodyView;                                           //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic) double bodyViewPadding;                                      //@synthesize bodyViewPadding=_bodyViewPadding - In the implementation block
@property (assign,nonatomic) long long bodyTextAlignment;                                 //@synthesize bodyTextAlignment=_bodyTextAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long bodyDataDetectorTypes;                    //@synthesize bodyDataDetectorTypes=_bodyDataDetectorTypes - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                       //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupDockView * dockView;                         //@synthesize dockView=_dockView - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;               //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) LAUICheckmarkLayer * checkmarkLayer;                       //@synthesize checkmarkLayer=_checkmarkLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitleTextAlignment:(long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(long long)titleTextAlignment;
-(void)setImage:(UIImage *)arg1 ;
-(LAUICheckmarkLayer *)checkmarkLayer;
-(NSString *)bodyText;
-(void)setShowPrivacyView:(BOOL)arg1 ;
-(void)setAttributedBodyText:(NSAttributedString *)arg1 ;
-(void)setHeroView:(UIView *)arg1 ;
-(long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2 ;
-(void)tintColorDidChange;
-(UIView *)bodyView;
-(void)setTitleHyphenationFactor:(double)arg1 ;
-(void)_updateTitleLabel;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)setBodyButtonText:(NSString *)arg1 ;
-(void)setBodyButtonNumberOfLines:(long long)arg1 ;
-(void)setBodyView:(UIView *)arg1 ;
-(BOOL)_showTitleLogoImageView;
-(void)_updateCachedTitleLabelLastLine;
-(void)_calculateBlur;
-(BOOL)_isBuddyiPad;
-(void)layoutSubviews;
-(UIFont *)titleFont;
-(void)setForceShowSetupLaterButton:(BOOL)arg1 ;
-(NSString *)titleText;
-(id)_createBodyTextView;
-(void)_bodyButtonTapped;
-(void)setHideTitleText:(BOOL)arg1 ;
-(void)setLogoImageViewTargetSize:(CGSize)arg1 ;
-(BOOL)showPrivacyView;
-(BOOL)forceShowSetupLaterButton;
-(double)titleHyphenationFactor;
-(UIColor *)topBackgroundColor;
-(BOOL)hideTitleText;
-(NSAttributedString *)attributedBodyText;
-(NSAttributedString *)attributedSecondaryBodyText;
-(NSString *)bodyButtonText;
-(long long)bodyButtonNumberOfLines;
-(double)bodyViewPadding;
-(unsigned long long)bodyDataDetectorTypes;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(CGSize)logoImageViewTargetSize;
-(void)setBodyTextView:(UITextView *)arg1 ;
-(void)setTopBackgroundColor:(UIColor *)arg1 ;
-(void)setAttributedSecondaryBodyText:(NSAttributedString *)arg1 ;
-(void)setBodyText:(NSString *)arg1 ;
-(void)_setupLater;
-(void)setTitleImage:(UIImage *)arg1 ;
-(id)initWithContext:(long long)arg1 delegate:(id)arg2 ;
-(UITextView *)bodyTextView;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(PKPaymentSetupDockView *)dockView;
-(void)setDelegate:(id<PKExplanationViewDelegate>)arg1 ;
-(void)setBodyViewPadding:(double)arg1 ;
-(UIImage *)image;
-(id)initWithDelegate:(id)arg1 ;
-(UIImage *)titleImage;
-(long long)bodyTextAlignment;
-(void)setBodyTextAlignment:(long long)arg1 ;
-(UIView *)heroView;
-(id<PKExplanationViewDelegate>)delegate;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(void)setBodyDataDetectorTypes:(unsigned long long)arg1 ;
-(void)_updateCheckmarkColor;
-(UIImageView *)imageView;
-(id)initWithContext:(long long)arg1 ;
-(void)_continue;
-(void)setTitleFont:(UIFont *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(void)pk_applyAppearance:(id)arg1 ;
-(UIImageView *)logoImageView;
-(UIFont *)bodyTextFont;
-(UIScrollView *)scrollView;
-(double)topMargin;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setTopMargin:(double)arg1 ;
-(void)_createSubviews;
@end

