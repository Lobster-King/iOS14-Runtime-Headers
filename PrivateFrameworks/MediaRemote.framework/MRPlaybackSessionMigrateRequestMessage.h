/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSession, MRPlaybackSessionMigrateRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSession * playbackSession; 
@property (nonatomic,readonly) MRPlaybackSessionMigrateRequest * request; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(MRPlayerPath *)playerPath;
-(MRPlaybackSession *)playbackSession;
-(unsigned long long)type;
-(MRPlaybackSessionMigrateRequest *)request;
-(id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 ;
@end
