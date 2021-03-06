/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PromotedContent/APPCContentRepresentation.h>
#import <libobjc.A.dylib/APPCPromotableVideoRepresentation.h>

@class NSURL;

@interface APPCVideoRepresentation : APPCContentRepresentation <APPCPromotableVideoRepresentation> {

	 fileSize;
	 skipThreshold;
	 skipEnabled;
	 unbranded;
	 bitrate;
	 signalStrength;
	 connectionType;
	??? $__lazy_storage_$_videoURL;
	 duration;
	??? originalVideoURL;

}

@property (readonly,nonatomic) long long fileSize; 
@property (readonly,nonatomic) double skipThreshold; 
@property (readonly,nonatomic) BOOL skipEnabled; 
@property (readonly,nonatomic) BOOL unbranded; 
@property (readonly,nonatomic) double bitrate; 
@property (readonly,nonatomic) unsigned long long signalStrength; 
@property (readonly,nonatomic) long long connectionType; 
@property (copy,nonatomic) NSURL * videoURL; 
-(long long)fileSize;
-(NSURL *)videoURL;
-(unsigned long long)signalStrength;
-(long long)connectionType;
-(double)bitrate;
-(void)setVideoURL:(NSURL *)arg1 ;
-(double)skipThreshold;
-(BOOL)skipEnabled;
-(BOOL)unbranded;
-(id)initWithIdentifier:(id)arg1 adType:(long long)arg2 videoURL:(id)arg3 duration:(double)arg4 fileSize:(long long)arg5 skipThreshold:(double)arg6 skipEnabled:(BOOL)arg7 unbranded:(BOOL)arg8 bitrate:(double)arg9 connectionType:(long long)arg10 signalStrength:(unsigned long long)arg11 tapAction:(id)arg12 ;
@end

