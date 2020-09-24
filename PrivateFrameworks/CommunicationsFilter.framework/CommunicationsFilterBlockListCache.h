/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	BOOL _listIsEmpty;

}
-(void)syncListEmptyState;
-(void)_blockListChanged:(id)arg1 ;
-(void)removeItemFromCache:(id)arg1 ;
-(id)init;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
@end
