/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager {

	UITextInputController* _inputController;

}

@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(BOOL)canRedo;
-(void)removeAllActions;
-(BOOL)canUndo;
-(void)setInputController:(UITextInputController *)arg1 ;
-(UITextInputController *)inputController;
@end
