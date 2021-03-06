/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSyncFakeBaseItem.h>
#import <MapsSuggestions/MapsSyncHistoryItem.h>

@class NSUUID, NSDate, NSString;

@interface MapsSyncFakeHistoryItem : MapsSyncFakeBaseItem <MapsSyncHistoryItem> {

	BOOL _test_isDeleted;

}

@property (assign,nonatomic) BOOL test_isDeleted;                     //@synthesize test_isDeleted=_test_isDeleted - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)test_isDeleted;
-(void)setTest_isDeleted:(BOOL)arg1 ;
@end

