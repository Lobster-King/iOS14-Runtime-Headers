/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDecimalNumber, NSString;


@protocol INPriceRangeExport <NSObject,JSExport>
@property (nonatomic,copy) NSDecimalNumber * minimumPrice; 
@property (nonatomic,copy) NSDecimalNumber * maximumPrice; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
+(id)_priceWithPriceRangeValue:(id)arg1;
-(NSString *)currencyCode;
-(NSDecimalNumber *)maximumPrice;
-(void)setMaximumPrice:(id)arg1;
-(NSDecimalNumber *)minimumPrice;
-(void)setMinimumPrice:(id)arg1;
-(id)init;
-(void)setCurrencyCode:(id)arg1;

@end

