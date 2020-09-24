/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BPSSubscriber.h>

@class _BPSAbstractOrderedMerge, NSString;

@interface _BPSAbstractOrderedMergeSide : NSObject <BPSSubscriber> {

	unsigned long long _index;
	_BPSAbstractOrderedMerge* _combiner;

}

@property (assign,nonatomic) unsigned long long index;                         //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) _BPSAbstractOrderedMerge * combiner;              //@synthesize combiner=_combiner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(void)setCombiner:(_BPSAbstractOrderedMerge *)arg1 ;
-(long long)receiveInput:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 combiner:(id)arg2 ;
-(void)receiveCompletion:(id)arg1 ;
-(_BPSAbstractOrderedMerge *)combiner;
-(void)receiveSubscription:(id)arg1 ;
@end
