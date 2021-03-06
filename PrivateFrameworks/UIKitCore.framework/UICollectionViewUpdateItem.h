/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject <NSCopying> {

	NSIndexPath* _initialIndexPath;
	NSIndexPath* _finalIndexPath;
	long long _updateAction;
	BOOL _isAppendingSectionInsert;
	NSUUID* _identifier;

}

@property (getter=_action,nonatomic,readonly) long long action; 
@property (getter=_indexPath,nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,retain) NSUUID * identifier;                                                                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL isAppendingSectionInsert;                                                         //@synthesize isAppendingSectionInsert=_isAppendingSectionInsert - In the implementation block
@property (getter=_isSectionOperation,nonatomic,readonly) BOOL isSectionOperation; 
@property (setter=_setNewIndexPath:,getter=_newIndexPath,nonatomic,retain) NSIndexPath * newIndexPath; 
@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;                                                 //@synthesize initialIndexPath=_initialIndexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;                                                  //@synthesize finalIndexPath=_finalIndexPath - In the implementation block
@property (nonatomic,readonly) long long updateAction;                                                              //@synthesize updateAction=_updateAction - In the implementation block
-(NSUUID *)identifier;
-(id)revertedUpdate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2 ;
-(BOOL)isNOOP;
-(id)initWithAction:(long long)arg1 forIndexPath:(id)arg2 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isEqualToUpdate:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(BOOL)_isSectionOperation;
-(long long)updateAction;
-(void)_setNewIndexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_newIndexPath;
-(NSIndexPath *)indexPathBeforeUpdate;
-(BOOL)isRevertedUpdateOf:(id)arg1 ;
-(id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3 ;
-(BOOL)isAppendingSectionInsert;
-(long long)_action;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(id)_indexPath;
-(id)description;
-(NSIndexPath *)indexPathAfterUpdate;
-(void)setIsAppendingSectionInsert:(BOOL)arg1 ;
@end

