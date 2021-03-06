/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVInteractionHandling.h>

@protocol SVVideoAdProviding, SVVideoPlaybackController;
@class NSString;

@interface SVPrivacyStatementInteractionHandler : NSObject <SVInteractionHandling> {

	id<SVVideoAdProviding> _videoAdProvider;
	id<SVVideoPlaybackController> _playbackController;

}

@property (nonatomic,readonly) id<SVVideoAdProviding> videoAdProvider;                        //@synthesize videoAdProvider=_videoAdProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;              //@synthesize playbackController=_playbackController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPlaybackController>)playbackController;
-(void)handleInteractionWithContext:(id)arg1 ;
-(id)initWithVideoAdProvider:(id)arg1 playbackController:(id)arg2 ;
-(id<SVVideoAdProviding>)videoAdProvider;
@end

