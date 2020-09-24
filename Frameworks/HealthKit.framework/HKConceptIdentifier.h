/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HKConceptIdentifier : NSObject <NSObject, NSCopying, NSSecureCoding> {

	long long _rawIdentifier;

}

@property (assign,nonatomic) long long rawIdentifier;                             //@synthesize rawIdentifier=_rawIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)root;
+(BOOL)supportsSecureCoding;
+(id)identifierWithRawIdentifier:(long long)arg1 ;
+(id)identifierWithNumber:(id)arg1 ;
+(id)inMemoryConceptIdentifier;
+(id)medication;
+(id)diastolicBloodPressure;
+(id)systolicBloodPressure;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRawIdentifier:(long long)arg1 ;
-(long long)rawIdentifier;
-(NSNumber *)numberRepresentation;
-(void)setRawIdentifier:(long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end
