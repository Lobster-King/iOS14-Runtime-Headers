/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUITableViewSection.h>

@class SKUIClientContext;

@interface SKUIProductPageTableSection : SKUITableViewSection {

	SKUIClientContext* _clientContext;
	BOOL _expanded;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                //@synthesize expanded=_expanded - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(double)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2 ;
-(id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
@end
