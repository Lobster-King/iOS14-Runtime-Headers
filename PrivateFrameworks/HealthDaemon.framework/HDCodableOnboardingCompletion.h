/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableOnboardingCompletion : PBCodable <NSCopying> {

	double _completionDate;
	double _modificationDate;
	long long _version;
	NSString* _countryCode;
	NSString* _featureIdentifier;
	NSData* _uuid;
	BOOL _deleted;
	SCD_Struct_HD10 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureIdentifier; 
@property (nonatomic,retain) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasCompletionDate; 
@property (assign,nonatomic) double completionDate;                     //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted;                              //@synthesize deleted=_deleted - In the implementation block
-(void)setModificationDate:(double)arg1 ;
-(double)modificationDate;
-(BOOL)hasVersion;
-(BOOL)deleted;
-(void)setFeatureIdentifier:(NSString *)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)countryCode;
-(BOOL)hasUuid;
-(void)setVersion:(long long)arg1 ;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(void)setCompletionDate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)uuid;
-(BOOL)hasCountryCode;
-(BOOL)hasModificationDate;
-(BOOL)isValidWithError:(id*)arg1 ;
-(unsigned long long)hash;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(NSString *)featureIdentifier;
-(BOOL)hasDeleted;
-(id)description;
-(void)setCountryCode:(NSString *)arg1 ;
-(double)completionDate;
-(id)dictionaryRepresentation;
-(id)decodedUUID;
-(id)decodedModificationDate;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(id)decodedCompletionDate;
-(BOOL)hasCompletionDate;
-(BOOL)hasFeatureIdentifier;
-(void)setHasCompletionDate:(BOOL)arg1 ;
@end

