/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioRelayIOControllerSettings : NSObject {

	AudioStreamBasicDescription _audioFormat;
	VCRemoteCodecInfo _remoteCodecInfo;

}

@property (nonatomic,readonly) const AudioStreamBasicDescription* audioFormat; 
@property (nonatomic,readonly) const VCRemoteCodecInfo* remoteCodecInfo; 
@property (nonatomic,readonly) unsigned samplesPerFrame; 
-(const VCRemoteCodecInfo*)remoteCodecInfo;
-(const AudioStreamBasicDescription*)audioFormat;
-(unsigned)samplesPerFrame;
-(id)initWithAudioFormat:(const AudioStreamBasicDescription*)arg1 remoteCodecInfo:(const VCRemoteCodecInfo*)arg2 ;
@end

