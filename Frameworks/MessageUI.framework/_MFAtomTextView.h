/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class MFComposeRecipientTextView, NSArray;

@interface _MFAtomTextView : UITextView {

	unsigned long long _textStorageEditingDepth;
	MFComposeRecipientTextView* _hostRecipientView;

}

@property (readonly) NSArray * atoms; 
@property (__weak) MFComposeRecipientTextView * hostRecipientView;              //@synthesize hostRecipientView=_hostRecipientView - In the implementation block
-(void)paste:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)undoManager;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(NSArray *)atoms;
-(void)setHostRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(void)enumerateAtoms:(/*^block*/id)arg1 ;
-(void)enumerateAtomAttachments:(/*^block*/id)arg1 ;
-(void)batchTextStorageUpdates:(/*^block*/id)arg1 ;
-(BOOL)isEditingTextStorage;
-(void)enumerateAtomsInCharacterRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGRect)convertGlyphRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(long long)baseWritingDirection;
-(BOOL)_delegateSupportsKeyboardEvents;
-(MFComposeRecipientTextView *)hostRecipientView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
