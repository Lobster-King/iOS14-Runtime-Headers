/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage {

	NSDictionary* _info;

}

@property (nonatomic,readonly) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)feedbackType;
-(NSDictionary *)info;
-(id)initWithInfo:(id)arg1 ;
-(id)serverMessage;
@end

