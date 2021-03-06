/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface FPUIAuthenticationNavigationBarTitleView : UIStackView {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _label;

}

@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(void)setActivityIndicatorHidden:(BOOL)arg1 ;
-(NSString *)title;
-(id)init;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
@end

