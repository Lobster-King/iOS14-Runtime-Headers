/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isActiveDevice;
	BOOL _isThisDevice;
	BOOL _isCompanionDevice;
	BOOL _isAutoMeCapable;
	NSString* _deviceId;
	NSString* _deviceName;
	NSString* _idsDeviceId;

}

@property (nonatomic,copy) NSString * deviceId;                   //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                 //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL isActiveDevice;                 //@synthesize isActiveDevice=_isActiveDevice - In the implementation block
@property (assign,nonatomic) BOOL isThisDevice;                   //@synthesize isThisDevice=_isThisDevice - In the implementation block
@property (assign,nonatomic) BOOL isCompanionDevice;              //@synthesize isCompanionDevice=_isCompanionDevice - In the implementation block
@property (assign,nonatomic) BOOL isAutoMeCapable;                //@synthesize isAutoMeCapable=_isAutoMeCapable - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceId;                //@synthesize idsDeviceId=_idsDeviceId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(BOOL)arg4 isThisDevice:(BOOL)arg5 isCompanionDevice:(BOOL)arg6 isAutoMeCapable:(BOOL)arg7 ;
-(NSString *)deviceName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(id)debugDescription;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceId;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)idsDeviceId;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isThisDevice;
-(id)description;
-(BOOL)isActiveDevice;
-(BOOL)isAutoMeCapable;
-(BOOL)isCompanionDevice;
-(void)setIsActiveDevice:(BOOL)arg1 ;
-(void)setIsThisDevice:(BOOL)arg1 ;
-(void)setIsCompanionDevice:(BOOL)arg1 ;
-(void)setIsAutoMeCapable:(BOOL)arg1 ;
-(void)setIdsDeviceId:(NSString *)arg1 ;
-(void)updateIsActive:(BOOL)arg1 isThisDevice:(BOOL)arg2 ;
@end

