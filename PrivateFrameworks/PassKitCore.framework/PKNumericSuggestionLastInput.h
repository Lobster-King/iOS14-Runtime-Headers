/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDecimalNumber;

@interface PKNumericSuggestionLastInput : NSObject {

	NSString* _serialNumber;
	NSMutableDictionary* _passLastInputDictionary;

}

@property (nonatomic,copy) NSDecimalNumber * value; 
@property (assign,nonatomic) BOOL wentToMax; 
-(void)save;
-(BOOL)wentToMax;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(id)initWithPassSerialNumber:(id)arg1 ;
-(void)setWentToMax:(BOOL)arg1 ;
-(id)init;
-(NSDecimalNumber *)value;
@end
