/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying> {

	NSMutableArray* _visibleViews;

}

@property (nonatomic,retain) NSMutableArray * visibleViews;              //@synthesize visibleViews=_visibleViews - In the implementation block
+(Class)visibleViewsType;
-(void)setVisibleViews:(NSMutableArray *)arg1 ;
-(void)clearVisibleViews;
-(unsigned long long)visibleViewsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addVisibleViews:(id)arg1 ;
-(NSMutableArray *)visibleViews;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)visibleViewsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
