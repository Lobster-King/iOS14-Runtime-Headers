/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocalizedString;

@interface GEORPRatingValue : PBCodable <NSCopying> {

	GEOLocalizedString* _categoryName;
	int _score;
	struct {
		unsigned has_score : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategoryName; 
@property (nonatomic,retain) GEOLocalizedString * categoryName; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) int score; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)score;
-(void)setScore:(int)arg1 ;
-(id)jsonRepresentation;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(GEOLocalizedString *)categoryName;
-(BOOL)hasCategoryName;
-(void)setCategoryName:(GEOLocalizedString *)arg1 ;
@end

