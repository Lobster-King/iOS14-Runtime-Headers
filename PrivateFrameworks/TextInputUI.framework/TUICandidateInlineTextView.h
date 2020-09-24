/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateInlineTextView : UIView {

	NSString* _text;
	id<TUICandidateViewStyle> _style;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(id<TUICandidateViewStyle>)style;
-(void)updateLabels;
-(void)setText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
@end
