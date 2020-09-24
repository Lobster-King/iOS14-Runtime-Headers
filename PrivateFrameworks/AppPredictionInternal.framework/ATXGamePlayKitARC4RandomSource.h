/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <AppPredictionInternal/ATXGamePlayKitRandomSource.h>

@class NSData;

@interface ATXGamePlayKitARC4RandomSource : ATXGamePlayKitRandomSource {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed; 
+(BOOL)supportsSecureCoding;
-(NSData *)seed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setSeed:(NSData *)arg1 ;
-(long long)nextInt;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(BOOL)nextBool;
-(unsigned long long)nextBits:(int)arg1 ;
-(float)nextUniform;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
@end
