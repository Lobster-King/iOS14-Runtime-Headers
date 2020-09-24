/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol PVFaceProtocol <NSObject>
@property (nonatomic,readonly) NSString * localIdentifier; 
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) double size; 
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) long long clusterSequenceNumber; 
@property (nonatomic,readonly) NSData * faceprintData; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (nonatomic,readonly) unsigned short ageType; 
@required
-(NSString *)localIdentifier;
-(NSData *)faceprintData;
-(double)centerY;
-(double)centerX;
-(unsigned short)ageType;
-(NSString *)personLocalIdentifier;
-(double)size;
-(long long)clusterSequenceNumber;
-(long long)qualityMeasure;
-(void)setQualityMeasure:(long long)arg1;

@end
