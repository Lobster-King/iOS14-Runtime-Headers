/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface MFPFont : NSObject {

	float mSize;
	int mUnit;
	unsigned mFlags;
	NSString* mName;

}
-(int)unit;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setSize:(float)arg1 ;
-(void)setName:(id)arg1 ;
-(float)size;
-(id)name;
-(void)setUnit:(int)arg1 ;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

