/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject {

	CSSearchableIndex* _index;

}

@property (nonatomic,readonly) CSSearchableIndex * index;              //@synthesize index=_index - In the implementation block
+(id)defaultStore;
-(CSSearchableIndex *)index;
-(id)initWithSearchableIndex:(id)arg1 ;
-(void)setRelevantShortcuts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

