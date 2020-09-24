/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFContextSnapshot.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSNumber, NSString;

@interface AFLocationSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _preciseLocationEnabled;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _altitude;
	NSNumber* _direction;
	NSNumber* _speed;
	NSNumber* _verticalAccuracy;
	NSNumber* _horizontalAccuracy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSNumber * latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * direction;                       //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * speed;                           //@synthesize speed=_speed - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) BOOL preciseLocationEnabled;                     //@synthesize preciseLocationEnabled=_preciseLocationEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(NSNumber *)direction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)ad_shortDescription;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSNumber *)verticalAccuracy;
-(NSNumber *)altitude;
-(id)initWithSerializedBackingStore:(id)arg1 ;
-(id)initWithSetRequestOrigin:(id)arg1 ;
-(id)ace_setRequestOrigin;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)horizontalAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)longitude;
-(NSNumber *)latitude;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)speed;
-(id)serializedBackingStore;
-(BOOL)preciseLocationEnabled;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)buildDictionaryRepresentation;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 altitude:(id)arg3 direction:(id)arg4 speed:(id)arg5 verticalAccuracy:(id)arg6 horizontalAccuracy:(id)arg7 preciseLocationEnabled:(BOOL)arg8 ;
-(NSString *)description;
@end
