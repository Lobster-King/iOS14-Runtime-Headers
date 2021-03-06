/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent {

	NSString* _saveReason;

}

@property (nonatomic,readonly) NSString * saveReason;              //@synthesize saveReason=_saveReason - In the implementation block
+(id)uuid;
+(id)uploadReason:(id)arg1 ;
-(id)initUploadReason:(id)arg1 ;
-(NSString *)saveReason;
@end

