/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SIServiceServerUploadInfo : PBCodable {

	BOOL _hasNs_server_upload_ts;
	long long _ns_server_upload_ts;

}

@property (assign,nonatomic) long long ns_server_upload_ts;              //@synthesize ns_server_upload_ts=_ns_server_upload_ts - In the implementation block
@property (assign,nonatomic) BOOL hasNs_server_upload_ts;                //@synthesize hasNs_server_upload_ts=_hasNs_server_upload_ts - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(void)setNs_server_upload_ts:(long long)arg1 ;
-(long long)ns_server_upload_ts;
-(BOOL)hasNs_server_upload_ts;
-(void)setHasNs_server_upload_ts:(BOOL)arg1 ;
@end

