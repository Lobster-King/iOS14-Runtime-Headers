/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTitledBuddyHeaderView.h>

@class UIImageView, NSLayoutConstraint, UIImage;

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {

	UIImageView* _logoImageView;
	NSLayoutConstraint* _titleLabelFirstBaselineAnchor;

}

@property (nonatomic,retain) UIImage * logoImage; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLogoImage:(UIImage *)arg1 ;
-(double)bottomPadding;
-(UIImage *)logoImage;
-(id)logoImageView;
-(void)_updateForCurrentSizeCategory;
-(id)initWithTopInset:(double)arg1 linkButtonTitle:(id)arg2 ;
@end
