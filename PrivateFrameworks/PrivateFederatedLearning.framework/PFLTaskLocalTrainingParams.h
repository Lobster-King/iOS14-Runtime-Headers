/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PFLTaskLocalTrainingParams : PBCodable <NSCopying> {

	long long _epochs;
	double _learningRate;
	double _validationSplit;
	NSMutableArray* _orderedTrainableLayers;
	SCD_Struct_PF3 _has;

}

@property (nonatomic,retain) NSMutableArray * orderedTrainableLayers;              //@synthesize orderedTrainableLayers=_orderedTrainableLayers - In the implementation block
@property (assign,nonatomic) BOOL hasValidationSplit; 
@property (assign,nonatomic) double validationSplit;                               //@synthesize validationSplit=_validationSplit - In the implementation block
@property (assign,nonatomic) BOOL hasLearningRate; 
@property (assign,nonatomic) double learningRate;                                  //@synthesize learningRate=_learningRate - In the implementation block
@property (assign,nonatomic) BOOL hasEpochs; 
@property (assign,nonatomic) long long epochs;                                     //@synthesize epochs=_epochs - In the implementation block
+(Class)orderedTrainableLayersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)epochs;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEpochs:(long long)arg1 ;
-(double)learningRate;
-(void)setLearningRate:(double)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasEpochs:(BOOL)arg1 ;
-(BOOL)hasEpochs;
-(double)validationSplit;
-(NSMutableArray *)orderedTrainableLayers;
-(void)addOrderedTrainableLayers:(id)arg1 ;
-(unsigned long long)orderedTrainableLayersCount;
-(void)clearOrderedTrainableLayers;
-(id)orderedTrainableLayersAtIndex:(unsigned long long)arg1 ;
-(void)setValidationSplit:(double)arg1 ;
-(void)setHasValidationSplit:(BOOL)arg1 ;
-(BOOL)hasValidationSplit;
-(void)setHasLearningRate:(BOOL)arg1 ;
-(BOOL)hasLearningRate;
-(void)setOrderedTrainableLayers:(NSMutableArray *)arg1 ;
@end
