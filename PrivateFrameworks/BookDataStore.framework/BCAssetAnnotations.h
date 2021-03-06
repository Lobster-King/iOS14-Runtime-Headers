/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCAssetAnnotations.h>
@class NSString, NSData;


@protocol BCAssetAnnotations <BCCloudData>
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,copy,readonly) NSString * assetVersion; 
@property (nonatomic,readonly) NSData * bookAnnotations; 
@required
-(NSString *)assetID;
-(NSString *)assetVersion;
-(NSData *)bookAnnotations;

@end


@class NSString, NSData, NSDate, CKRecord;

@interface BCAssetAnnotations : BCCloudData <BCAssetAnnotations>

@property (nonatomic,copy) NSString * assetID; 
@property (nonatomic,copy) NSString * assetVersion; 
@property (nonatomic,retain) NSData * bookAnnotations; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyIDKey;
-(id)identifier;
-(NSString *)debugDescription;
-(id)zoneName;
-(id)mutableCopy;
-(id)recordType;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromAssetAnnotations:(id)arg1 withMergers:(id)arg2 ;
-(void)_mergeInAssetID:(id)arg1 assetVersion:(id)arg2 serializedData:(id)arg3 ;
@end

