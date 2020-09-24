/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSObjCArgument.h>

@class NSArray, BSObjCArgument;

@interface BSObjCBlockArgument : BSObjCArgument {

	NSArray* _arguments;
	BSObjCArgument* _returnValue;

}

@property (nonatomic,retain,readonly) BSObjCArgument * returnValue;              //@synthesize returnValue=_returnValue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                         //@synthesize arguments=_arguments - In the implementation block
-(BSObjCArgument *)returnValue;
-(NSArray *)arguments;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_prettyTypeString;
-(BOOL)isBlock;
@end
