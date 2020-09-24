/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBPurchaseIDPatternPair : PBCodable <NSCopying> {

	NSMutableArray* _domainPatterns;
	NSString* _purchaseID;

}

@property (nonatomic,retain) NSString * purchaseID;                        //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,retain) NSMutableArray * domainPatterns;              //@synthesize domainPatterns=_domainPatterns - In the implementation block
+(Class)domainPatternType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addDomainPattern:(id)arg1 ;
-(void)clearDomainPatterns;
-(unsigned long long)domainPatternsCount;
-(id)domainPatternAtIndex:(unsigned long long)arg1 ;
-(void)setDomainPatterns:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)domainPatterns;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)purchaseID;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
