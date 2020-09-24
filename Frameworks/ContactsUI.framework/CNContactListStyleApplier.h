/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactListStyle;
@interface CNContactListStyleApplier : NSObject {

	id<CNContactListStyle> _contactListStyle;

}

@property (nonatomic,readonly) id<CNContactListStyle> contactListStyle;                       //@synthesize contactListStyle=_contactListStyle - In the implementation block
@property (nonatomic,readonly) double cellEstimatedHeight; 
@property (nonatomic,readonly) unsigned long long tableNoContactsAvailableStyle; 
@property (nonatomic,readonly) BOOL usesInsetPlatterStyle; 
+(void)applyDefaultStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(void)applyContactListStyleToTableView:(id)arg1 ;
-(void)applyContactListStyleToSearchCell:(id)arg1 ;
-(void)applyContactListStyleToSelectedCell:(id)arg1 ;
-(id<CNContactListStyle>)contactListStyle;
-(void)applyContactListStyleToHeaderFooter:(id)arg1 ;
-(void)applyContactListStyleToBannerTitle:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(unsigned long long)tableNoContactsAvailableStyle;
-(void)applyContactListStyleToEmergencyIcon:(id)arg1 ofCell:(id)arg2 ;
-(id)initWithContactListStyle:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg1 ofSearchResultCell:(id)arg2 ;
-(void)applyContactListStyleToText:(id)arg1 ofUnhighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToSearchBar:(id)arg1 ;
-(void)applyContactListStyleToBannerFootnote:(id)arg1 primaryAppearance:(BOOL)arg2 ;
-(void)applyContactListStyleToCell:(id)arg1 ;
-(void)applyContactListStyleToNavigationBar:(id)arg1 ;
-(void)applyContactListStyleToText:(id)arg1 ofHighlightedCell:(id)arg2 ;
-(void)applyContactListStyleToMeContactLabel:(id)arg1 ofCell:(id)arg2 ;
-(void)applyContactListStyleToContact:(id)arg1 usingFormatter:(id)arg2 ofCell:(id)arg3 ;
-(double)cellEstimatedHeight;
-(void)applySelectionTextStyleToCell:(id)arg1 ;
-(BOOL)usesInsetPlatterStyle;
@end
