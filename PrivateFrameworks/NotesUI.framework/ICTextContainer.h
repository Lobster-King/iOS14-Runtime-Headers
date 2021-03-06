/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIFoundation/NSTextContainer.h>

@interface ICTextContainer : NSTextContainer {

	BOOL _inPreviewMode;

}

@property (assign,nonatomic) BOOL inPreviewMode;              //@synthesize inPreviewMode=_inPreviewMode - In the implementation block
-(BOOL)isSimpleRectangularTextContainer;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(CGRect*)arg4 ;
-(void)setInPreviewMode:(BOOL)arg1 ;
-(BOOL)inPreviewMode;
@end

