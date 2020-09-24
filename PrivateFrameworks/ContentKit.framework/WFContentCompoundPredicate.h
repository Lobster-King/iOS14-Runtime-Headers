/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentPredicate.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class NSArray, NSSet;

@interface WFContentCompoundPredicate : WFContentPredicate <WFContentPropertyContainer> {

	unsigned long long _compoundPredicateType;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType;              //@synthesize compoundPredicateType=_compoundPredicateType - In the implementation block
@property (copy,readonly) NSArray * subpredicates;                          //@synthesize subpredicates=_subpredicates - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
-(NSArray *)subpredicates;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(unsigned long long)compoundPredicateType;
-(id)description;
-(NSSet *)containedProperties;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
