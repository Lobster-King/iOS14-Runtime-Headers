/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFStateMachineContextType.h>

@class NSError, NSString;

@interface SVVideoLoadingStateObserverStateContext : NSObject <NFStateMachineContextType> {

	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
@end
