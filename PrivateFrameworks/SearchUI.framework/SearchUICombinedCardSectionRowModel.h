/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel {

	NSArray* _cardSectionRowModels;

}

@property (nonatomic,retain) NSArray * cardSectionRowModels;              //@synthesize cardSectionRowModels=_cardSectionRowModels - In the implementation block
-(BOOL)isDraggable;
-(int)separatorStyle;
-(Class)cellViewClass;
-(id)dragTitle;
-(id)nextCard;
-(id)dragText;
-(id)dragURL;
-(id)dragSubtitle;
-(void)setCardSectionRowModels:(NSArray *)arg1 ;
-(NSArray *)cardSectionRowModels;
-(id)firstRowModel;
-(BOOL)isTappable;
-(id)punchouts;
-(id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2 ;
@end
