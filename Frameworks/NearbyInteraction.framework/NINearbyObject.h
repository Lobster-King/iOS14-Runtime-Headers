/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NIDiscoveryToken;

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding> {

	float _distance;
	float _azimuth;
	float _elevation;
	NIDiscoveryToken* _discoveryToken;
	 _direction;
	SCD_Struct_NI7 _quaternion;

}

@property (nonatomic,copy) NIDiscoveryToken * discoveryToken;              //@synthesize discoveryToken=_discoveryToken - In the implementation block
@property (assign,nonatomic) float distance;                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic)  direction;                                   //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) SCD_Struct_NI7 quaternion;                    //@synthesize quaternion=_quaternion - In the implementation block
@property (assign,nonatomic) float azimuth;                                //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float elevation;                              //@synthesize elevation=_elevation - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(void)setDistance:(float)arg1 ;
-()direction;
-(id)initWithToken:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)azimuth;
-(void)setQuaternion:(SCD_Struct_NI7)arg1 ;
-(void)setDirection:;
-(SCD_Struct_NI7)quaternion;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)distance;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAzimuth:(float)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(float)elevation;
-(void)setElevation:(float)arg1 ;
-(NIDiscoveryToken *)discoveryToken;
-(id)initWithTrackedObject:(id)arg1 ;
-(void)setDiscoveryToken:(NIDiscoveryToken *)arg1 ;
@end

