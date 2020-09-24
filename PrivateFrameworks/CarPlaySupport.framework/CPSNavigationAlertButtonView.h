/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView {

	CPSNavigationAlertFocusButton* _primaryButton;
	CPSNavigationAlertFocusButton* _secondaryButton;

}

@property (nonatomic,retain) CPSNavigationAlertFocusButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertFocusButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(CPSNavigationAlertFocusButton *)primaryButton;
-(CPSNavigationAlertFocusButton *)secondaryButton;
-(void)setPrimaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(void)setSecondaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3 ;
@end
