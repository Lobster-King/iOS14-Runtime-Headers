/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPasswordWordList.h>

@class NSOrderedSet;

@interface WBSPasswordOrderedSetWordList : WBSPasswordWordList {

	NSOrderedSet* _words;
	BOOL _sensitive;

}

@property (getter=isSensitive,nonatomic,readonly) BOOL sensitive;              //@synthesize sensitive=_sensitive - In the implementation block
-(BOOL)isSensitive;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWordsArray:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 isSensitive:(BOOL)arg2 orderedWords:(id)arg3 ;
@end
