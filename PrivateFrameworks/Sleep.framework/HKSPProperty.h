/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface HKSPProperty : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding> {

	NSString* _identifier;
	NSString* _propertyName;

}

@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyName;              //@synthesize propertyName=_propertyName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 propertyName:(id)arg2 ;
-(NSString *)description;
@end

