/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXLocationManagerStateStore.h>

@protocol ATXLocationManagerStateStoreOnDiskEnv;
@class NSString;

@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore> {

	NSString* _path;
	id<ATXLocationManagerStateStoreOnDiskEnv> _env;
	/*^block*/id _deferredLoadCallback;
	int _fd;
	double _cacheExpirationInterval;

}

@property (assign) double cacheExpirationInterval;                  //@synthesize cacheExpirationInterval=_cacheExpirationInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(id)loadNowOrCallLater:(/*^block*/id)arg1 ;
-(double)cacheExpirationInterval;
-(BOOL)_tryToOpen;
-(id)initWithPath:(id)arg1 environment:(id)arg2 ;
-(void)dealloc;
-(void)setCacheExpirationInterval:(double)arg1 ;
-(void)_deviceDidUnlock;
-(void)write:(id)arg1 ;
-(id)init;
@end
