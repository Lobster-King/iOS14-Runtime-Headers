/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FIValidation : NSObject {

	NSString* _name;
	/*^block*/id _test;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id test;                      //@synthesize test=_test - In the implementation block
+(id)validationWithName:(id)arg1 test:(/*^block*/id)arg2 ;
+(BOOL)performValidations:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(id)test;
-(NSString *)name;
-(BOOL)validateObject:(id)arg1 withError:(id*)arg2 ;
@end

