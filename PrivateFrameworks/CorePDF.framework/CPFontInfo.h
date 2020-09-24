/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	BOOL valid;

}
-(void)dispose;
-(void)dealloc;
-(void)finalize;
-(float)readFloat;
-(BOOL)getDescriptor:(SCD_Struct_CP29*)arg1 ;
-(unsigned char)readByte;
-(int)kernUnitsPerEm;
-(unsigned)readUnsignedLong;
-(CGRect)readRect;
-(int)readLong;
-(id)initWithFontData:(CFDataRef)arg1 ;
-(CFDataRef)newKernData;
@end
