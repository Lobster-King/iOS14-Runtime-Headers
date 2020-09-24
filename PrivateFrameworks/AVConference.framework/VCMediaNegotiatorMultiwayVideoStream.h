/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaNegotiatorMultiwayMediaStream.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiatorMultiwayVideoStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying> {

	CGSize _size;
	unsigned _frameRate;
	unsigned _keyFrameInterval;
	int _payload;

}

@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned frameRate;                     //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) unsigned keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) int payload;                            //@synthesize payload=_payload - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)payload;
-(void)setSize:(CGSize)arg1 ;
-(unsigned)frameRate;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)size;
-(void)setPayload:(int)arg1 ;
-(void)setFrameRate:(unsigned)arg1 ;
-(unsigned)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned)arg1 ;
@end
