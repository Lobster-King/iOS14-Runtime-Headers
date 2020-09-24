/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFItemUpdating;
@class NSSet;

@interface HFItemModule : NSObject {

	id<HFItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) NSSet * itemProviders; 
@property (nonatomic,readonly) NSSet * allItems; 
@property (nonatomic,__weak,readonly) id<HFItemUpdating> itemUpdater;              //@synthesize itemUpdater=_itemUpdater - In the implementation block
-(NSSet *)allItems;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(id)init;
-(NSSet *)itemProviders;
-(BOOL)containsItem:(id)arg1 ;
-(id<HFItemUpdating>)itemUpdater;
@end
