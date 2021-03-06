/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {

	PPBaseScoreInputSet* _scoreInputSet;
	unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >* _scalarValueStorage;
	unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > >, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > > >* _arrayValueStorage;
	NSMutableArray* _objectStorage;

}

@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)arrayValueForIndex:(unsigned long long)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3 scoreInputSet:(id)arg4 ;
-(id)initWithScoreInputSet:(id)arg1 ;
-(float)scalarValueForIndex:(unsigned long long)arg1 ;
-(unsigned long long)objectCount;
-(id)objectDictionary;
-(id)init;
-(void)setArraySharedPtr:(shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >*)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setScalarValue:(float)arg1 forIndex:(unsigned long long)arg2 ;
-(id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3 ;
-(id)arrayValueDictionary;
-(void)setArrayValue:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(unsigned long long)arrayValueCount;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >*)arraySharedPtrForIndex:(unsigned long long)arg1 ;
-(void)setArrayStorage:(vector<float, std::__1::allocator<float> >*)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)scalarValueCount;
-(id)scalarValueDictionary;
@end

