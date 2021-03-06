/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class NSString;

@interface CPFont : NSObject <CPDisposable> {

	CGPDFFontRef cgPDFFont;
	CGFontRef cgFont;
	NSString* fontName;
	BOOL exactMatch;
	SCD_Struct_CP22 descriptor;
	CFDictionaryRef kernDictionary;
	double kernUnitsPerEm;
	BOOL isHorizontal;
	double defaultWidth;
	BOOL disposed;

}
-(id)fontName;
-(void)dispose;
-(double)underlinePosition;
-(double)ascent;
-(unsigned)flags;
-(double)maxWidth;
-(double)xHeight;
-(double)stemV;
-(double)stemH;
-(void)dealloc;
-(void)finalize;
-(CGFontRef)cgFont;
-(double)leading;
-(double)spaceWidth;
-(double)underlineThickness;
-(double)fontWeight;
-(double)capHeight;
-(BOOL)isHorizontal;
-(double)descent;
-(double)fontStretch;
-(id)initWith:(CGPDFDictionaryRef)arg1 ;
-(CGPDFFontRef)cgPDFFont;
-(void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long*)arg2 toArray:(unsigned short*)arg3 maxChars:(unsigned)arg4 ;
-(id)matchingFontName;
-(void)loadExternalFontInfoFor:(id)arg1 ;
-(void)getFontName;
-(void)loadEmbeddedFontInfo;
-(BOOL)isSameFontAs:(id)arg1 ;
-(CGRect)fontBBox;
-(double)italicAngle;
-(double)avgWidth;
-(double)missingWidth;
-(double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2 ;
-(BOOL)getGlyphs:(unsigned short*)arg1 forCodes:(const unsigned short*)arg2 count:(unsigned)arg3 ;
@end

