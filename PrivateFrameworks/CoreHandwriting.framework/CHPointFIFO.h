/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHPointFIFO : NSObject {

	CHPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CHPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(void)dealloc;
-(CHPointFIFO *)nextFIFO;
-(void)emitPoint:;
-(void)addPoint:;
-(void)setNextFIFO:(CHPointFIFO *)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
@end

