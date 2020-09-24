/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKMutableArray;

@interface IKCSSSelectorList : NSObject <NSCopying> {

	IKMutableArray* _selectors;

}

@property (nonatomic,readonly) IKMutableArray * selectors;              //@synthesize selectors=_selectors - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)addSelector:(id)arg1 ;
-(id)description;
-(IKMutableArray *)selectors;
-(id)selectorAtIndex:(unsigned long long)arg1 ;
-(id)firstSelector;
-(id)lastSelector;
@end
