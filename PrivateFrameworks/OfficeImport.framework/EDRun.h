/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, NSArray, NSString;

@interface EDRun : NSObject <EDKeyedObject> {

	EDResources* mResources;
	unsigned long long mCharIndex;
	unsigned long long mFontIndex;
	NSArray* mEffects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
+(id)runWithResources:(id)arg1 ;
+(id)runWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(long long)key;
-(void)setCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(id)font;
-(unsigned long long)charIndex;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(unsigned long long)hash;
-(id)effects;
-(NSString *)description;
-(void)setFont:(id)arg1 ;
-(void)overrideFont:(id)arg1 ;
-(void)adjustIndex:(unsigned long long)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned long long)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqualToRun:(id)arg1 ;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned long long)arg1 fontIndex:(unsigned long long)arg2 effects:(id)arg3 resources:(id)arg4 ;
@end
