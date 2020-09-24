/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPImage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LPImageAttachmentSubstitute : LPImage <NSSecureCoding> {

	long long _index;

}

@property (assign,nonatomic) long long index;              //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIndex:(long long)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(long long)index;
-(BOOL)_shouldEncodeData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
