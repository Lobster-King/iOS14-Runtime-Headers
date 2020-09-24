/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFSymmetricKeySpecifier.h>

@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {

	id _aesKeySpecifierInternal;

}

@property (nonatomic,readonly) long long blockSize; 
@property (assign,nonatomic) long long bitSize; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)blockSize;
-(long long)keyLengthInBytes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBitSize:(long long)arg1 ;
-(long long)bitSize;
-(id)initWithBitSize:(long long)arg1 ;
-(id)description;
@end
