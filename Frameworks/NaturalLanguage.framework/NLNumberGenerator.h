/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@interface NLNumberGenerator : NSObject {

	unsigned long long state[2];

}
-(void)reset;
-(id)init;
-(unsigned long long)numberInRange:(NSRange)arg1 ;
-(void)resetWithSeed:(unsigned long long)arg1 ;
@end

