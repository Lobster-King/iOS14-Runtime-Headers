/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMMomentCaptureSettings;

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand {

	CAMMomentCaptureSettings* __settings;

}

@property (nonatomic,readonly) CAMMomentCaptureSettings * _settings;              //@synthesize _settings=__settings - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CAMMomentCaptureSettings *)_settings;
-(void)executeWithContext:(id)arg1 ;
@end

