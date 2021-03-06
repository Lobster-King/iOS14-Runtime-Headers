/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@protocol CPSHighlightable;
@interface CPSHighlightForwardingButton : UIButton {

	id<CPSHighlightable> _highlightForwardingTarget;

}

@property (assign,nonatomic,__weak) id<CPSHighlightable> highlightForwardingTarget;              //@synthesize highlightForwardingTarget=_highlightForwardingTarget - In the implementation block
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setHighlightForwardingTarget:(id<CPSHighlightable>)arg1 ;
-(id<CPSHighlightable>)highlightForwardingTarget;
@end

