/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>

@property (nonatomic,readonly) CKObjCClass * objcClass; 
@property (nonatomic,readonly) NSSet * propertyNamesNotToEncode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryPropertyEncoding;
-(CKObjCClass *)objcClass;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)propertyNamesNotToEncode;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

