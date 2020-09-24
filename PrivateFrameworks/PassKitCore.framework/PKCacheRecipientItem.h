/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;
	PKPeerPaymentRecipient* _item;

}

@property (nonatomic,readonly) PKPeerPaymentRecipient * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasExpired;
-(PKPeerPaymentRecipient *)item;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
@end
