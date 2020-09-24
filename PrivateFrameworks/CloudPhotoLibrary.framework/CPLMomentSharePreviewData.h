/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CPLMomentSharePreviewData : PBCodable <NSCopying> {

	NSString* _cropRectString;
	NSString* _keyAssetIdentifier;
	NSMutableArray* _previewImageDatas;

}

@property (nonatomic,retain) NSMutableArray * previewImageDatas;              //@synthesize previewImageDatas=_previewImageDatas - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyAssetIdentifier; 
@property (nonatomic,retain) NSString * keyAssetIdentifier;                   //@synthesize keyAssetIdentifier=_keyAssetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCropRectString; 
@property (nonatomic,retain) NSString * cropRectString;                       //@synthesize cropRectString=_cropRectString - In the implementation block
+(Class)previewImageDataType;
-(NSString *)keyAssetIdentifier;
-(NSMutableArray *)previewImageDatas;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addPreviewImageData:(id)arg1 ;
-(void)setCropRectString:(NSString *)arg1 ;
-(NSString *)cropRectString;
-(unsigned long long)hash;
-(void)setKeyAssetIdentifier:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)clearPreviewImageDatas;
-(unsigned long long)previewImageDatasCount;
-(id)previewImageDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasKeyAssetIdentifier;
-(BOOL)hasCropRectString;
-(void)setPreviewImageDatas:(NSMutableArray *)arg1 ;
@end
