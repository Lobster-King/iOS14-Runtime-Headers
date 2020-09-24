/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface ISDisplayLink : NSObject {

	long long _preferredFramesPerSecond;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                     //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)dealloc;
-(id)updateHandler;
-(void)start;
-(long long)preferredFramesPerSecond;
-(void)_update:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CADisplayLink *)displayLink;
-(void)stop;
-(id)completionHandler;
-(void)_callUpdateHandler;
@end
