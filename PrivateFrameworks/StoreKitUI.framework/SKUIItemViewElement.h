/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIItemViewElement : SKUIViewElement {

	SKUIViewElementText* _itemText;
	BOOL _selected;

}

@property (nonatomic,readonly) SKUIViewElementText * itemText;               //@synthesize itemText=_itemText - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;              //@synthesize selected=_selected - In the implementation block
-(SKUIViewElementText *)itemText;
-(BOOL)isSelected;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end
