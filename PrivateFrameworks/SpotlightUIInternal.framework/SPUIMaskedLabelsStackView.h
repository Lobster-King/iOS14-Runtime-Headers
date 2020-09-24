/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUIInternal/SpotlightUIInternal-Structs.h>
#import <AppSupportUI/NUIContainerStackView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKLabel, NSString, UIFont, TLKProminenceView, UIView;

@interface SPUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate> {

	TLKLabel* _completionLabel;
	TLKLabel* _bridgeLabel;
	TLKLabel* _extensionLabel;
	NSString* _typedString;
	UIFont* _font;
	TLKProminenceView* _extensionLabelProminenceView;
	UIView* _gradientView;
	double _completionStringOffset;
	UIView* _fillerView;

}

@property (retain) TLKProminenceView * extensionLabelProminenceView;              //@synthesize extensionLabelProminenceView=_extensionLabelProminenceView - In the implementation block
@property (retain) UIView * gradientView;                                         //@synthesize gradientView=_gradientView - In the implementation block
@property (assign) double completionStringOffset;                                 //@synthesize completionStringOffset=_completionStringOffset - In the implementation block
@property (retain) UIView * fillerView;                                           //@synthesize fillerView=_fillerView - In the implementation block
@property (nonatomic,readonly) TLKLabel * completionLabel;                        //@synthesize completionLabel=_completionLabel - In the implementation block
@property (nonatomic,readonly) TLKLabel * bridgeLabel;                            //@synthesize bridgeLabel=_bridgeLabel - In the implementation block
@property (nonatomic,readonly) TLKLabel * extensionLabel;                         //@synthesize extensionLabel=_extensionLabel - In the implementation block
@property (nonatomic,retain) NSString * typedString;                              //@synthesize typedString=_typedString - In the implementation block
@property (nonatomic,retain) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(TLKLabel *)completionLabel;
-(UIFont *)font;
-(id)init;
-(TLKLabel *)bridgeLabel;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(UIView *)gradientView;
-(void)setGradientView:(UIView *)arg1 ;
-(TLKLabel *)extensionLabel;
-(BOOL)isRTL;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)typedString;
-(void)setTypedString:(NSString *)arg1 ;
-(void)setExtensionLabelProminenceView:(TLKProminenceView *)arg1 ;
-(TLKProminenceView *)extensionLabelProminenceView;
-(void)setFillerView:(UIView *)arg1 ;
-(UIView *)fillerView;
-(void)resetStringOffset;
-(void)setCompletionStringOffset:(double)arg1 ;
-(double)completionStringOffset;
@end
