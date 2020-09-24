/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPQuaternion : PBCodable <NSCopying> {

	float _w;
	float _x;
	float _y;
	float _z;
	SCD_Struct_CL4 _has;

}

@property (assign,nonatomic) BOOL hasW; 
@property (assign,w,nonatomic) float w;              //@synthesize w=_w - In the implementation block
@property (assign,x,nonatomic) float x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;              //@synthesize z=_z - In the implementation block
-(float)y;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setX:(float)arg1 ;
-(void)setW:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(float)w;
-(void)setZ:(float)arg1 ;
-(float)z;
-(float)x;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasW;
-(void)setHasW:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
