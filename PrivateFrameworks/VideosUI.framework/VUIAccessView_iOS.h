/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/TVCarouselViewDataSource.h>

@class NSArray, UILayoutGuide, UIStackView, UILabel, UIScrollView, UIButton, _TVCarouselView, UIView, NSString;

@interface VUIAccessView_iOS : UIView <TVCarouselViewDataSource> {

	NSArray* _apps;
	UILayoutGuide* _titlePlacementGuide;
	UIStackView* _scrollStack;
	UILabel* _titleLabel;
	UIScrollView* _bodyScroll;
	UILabel* _bodyLabel;
	UIStackView* _logoStack;
	UIStackView* _bottomStack;
	UIButton* _allowButton;
	UIButton* _nackButton;
	UIButton* _seeAllButton;
	_TVCarouselView* _carouselView;
	BOOL _didLayout;
	UIView* _privacyView;

}

@property (nonatomic,retain) UIView * privacyView;                  //@synthesize privacyView=_privacyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)iconSize;
-(void)setBody:(id)arg1 ;
-(id)allowButton;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)seeAllButton;
-(void)setTitle:(id)arg1 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithApps:(id)arg1 ;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
@end
