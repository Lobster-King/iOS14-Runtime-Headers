/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRAutocorrectionContext : NSObject {

	unsigned long long _modificationMask;

}
+(void)clearCaches;
+(id)autocorrectionContextOfType:(unsigned long long)arg1 ;
-(void)reset;
-(id)correction;
-(id)guesses;
-(id)prefixes;
-(id)completions;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2 ;
-(void)setModificationMask:(unsigned long long)arg1 ;
-(unsigned long long)modificationMask;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
@end

