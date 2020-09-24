/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCAVAssetKeyType.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDate, NTPBDate, NSString;

@interface NTPBAVAssetKey : PBCodable <FCAVAssetKeyType, FCKeyValueStoreCoding, NSCopying> {

	NTPBDate* _createdAt;
	NSData* _data;
	NTPBDate* _expiresAt;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedAt; 
@property (nonatomic,retain) NTPBDate * createdAt;                   //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) BOOL hasExpiresAt; 
@property (nonatomic,retain) NTPBDate * expiresAt;                   //@synthesize expiresAt=_expiresAt - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)writeToKeyValuePair:(id)arg1 ;
-(BOOL)isExpired;
-(NSDate *)creationDate;
-(void)setCreatedAt:(NTPBDate *)arg1 ;
-(NTPBDate *)createdAt;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NTPBDate *)expiresAt;
-(void)dealloc;
-(BOOL)hasData;
-(void)setData:(NSData *)arg1 ;
-(BOOL)hasCreatedAt;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExpiresAt:(NTPBDate *)arg1 ;
-(BOOL)hasExpiresAt;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
@end
