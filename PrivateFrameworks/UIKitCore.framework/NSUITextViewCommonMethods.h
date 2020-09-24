/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextContainer, NSDictionary;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@property (nonatomic,readonly) NSDictionary * markedTextStyle; 
@optional
-(NSRange)markedRange;
-(void)setTextContainer:(id)arg1;
-(NSTextContainer *)textContainer;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedRange:(NSRange)arg1;

@required
-(UIEdgeInsets*)textContainerInset;
-(CGRect*)visibleRect;
-(CGSize*)minSize;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
-(BOOL)isHorizontallyResizable;
-(void)invalidateTextContainerOrigin;
-(CGPoint*)textContainerOrigin;

@end
