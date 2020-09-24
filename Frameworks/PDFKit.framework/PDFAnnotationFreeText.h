/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationFreeTextPrivateVars* _private2;

}
-(void)commonInit;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)alignment;
-(id)font;
-(id)initWithCoder:(id)arg1 ;
-(void)setFontColor:(id)arg1 ;
-(id)fontColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
@end
