/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@class NSString;

@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption {

	BOOL _encrypted;
	NSString* _fieldName;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) BOOL encrypted;                    //@synthesize encrypted=_encrypted - In the implementation block
-(void)applyTo:(id)arg1 ;
-(BOOL)encrypted;
-(id)initWithExternalRecordField:(id)arg1 encrypted:(BOOL)arg2 ;
-(NSString *)fieldName;
@end

