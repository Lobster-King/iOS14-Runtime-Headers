/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject {

	unsigned char _unsignedCharValue;

}

@property (nonatomic,readonly) unsigned char unsignedCharValue;              //@synthesize unsignedCharValue=_unsignedCharValue - In the implementation block
+(unsigned char)generateRequestIdentifier;
+(id)randomTransactionIdentifier;
-(unsigned char)unsignedCharValue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)debugDescription;
-(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithUnsignedCharValue:(unsigned char)arg1 ;
@end

