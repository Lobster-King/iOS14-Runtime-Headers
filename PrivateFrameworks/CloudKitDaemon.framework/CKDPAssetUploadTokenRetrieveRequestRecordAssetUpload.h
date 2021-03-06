/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPRecordIdentifier, CKDPRecordType;

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying> {

	NSMutableArray* _assetFields;
	CKDPRecordIdentifier* _recordId;
	CKDPRecordType* _type;

}

@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;              //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) CKDPRecordType * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetFields;                 //@synthesize assetFields=_assetFields - In the implementation block
+(Class)assetFieldsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(CKDPRecordIdentifier *)recordId;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(CKDPRecordType *)type;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(CKDPRecordType *)arg1 ;
-(BOOL)hasRecordId;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setAssetFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)assetFields;
-(void)addAssetFields:(id)arg1 ;
-(unsigned long long)assetFieldsCount;
-(void)clearAssetFields;
-(id)assetFieldsAtIndex:(unsigned long long)arg1 ;
@end

