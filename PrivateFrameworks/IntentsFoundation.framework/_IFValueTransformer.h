/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface _IFValueTransformer : NSValueTransformer {

	/*^block*/id _forwardTransformation;
	/*^block*/id _reverseTransformation;

}

@property (nonatomic,copy,readonly) id forwardTransformation;              //@synthesize forwardTransformation=_forwardTransformation - In the implementation block
@property (nonatomic,copy,readonly) id reverseTransformation;              //@synthesize reverseTransformation=_reverseTransformation - In the implementation block
+(BOOL)allowsReverseTransformation;
-(id)initWithForwardTransformation:(/*^block*/id)arg1 reverseTransformation:(/*^block*/id)arg2 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)reverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(id)forwardTransformation;
@end

