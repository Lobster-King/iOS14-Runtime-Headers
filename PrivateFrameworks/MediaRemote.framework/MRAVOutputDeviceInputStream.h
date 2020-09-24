/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVBufferedInputStream.h>
#import <libobjc.A.dylib/AVOutputDeviceCommunicationChannelDelegate.h>

@class AVOutputDevice, NSString;

@interface MRAVOutputDeviceInputStream : MRAVBufferedInputStream <AVOutputDeviceCommunicationChannelDelegate> {

	AVOutputDevice* _outputDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id)initWithOutputDevice:(id)arg1 ;
-(void)outputDevice:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputDevice:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)description;
@end
