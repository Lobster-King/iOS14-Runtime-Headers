/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class UIColor;

@interface PKPaymentPreferenceCell : PKTableViewCell {

	UIColor* _errorColor;
	BOOL _hasError;

}

@property (assign,nonatomic) BOOL hasError;              //@synthesize hasError=_hasError - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)dealloc;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasError;
@end

