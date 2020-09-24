/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechFeature.h>

@class NSArray;

@interface FTMutableTextToSpeechFeature : FTTextToSpeechFeature

@property (nonatomic,copy) NSArray * normalized_text; 
@property (nonatomic,copy) NSArray * phoneme_sequence; 
@property (nonatomic,copy) NSArray * prompts; 
@property (nonatomic,copy) NSArray * replacement; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrompts:(NSArray *)arg1 ;
-(NSArray *)normalized_text;
-(void)setNormalized_text:(NSArray *)arg1 ;
-(NSArray *)phoneme_sequence;
-(void)setPhoneme_sequence:(NSArray *)arg1 ;
-(id)init;
-(void)setReplacement:(NSArray *)arg1 ;
-(NSArray *)prompts;
-(NSArray *)replacement;
@end
