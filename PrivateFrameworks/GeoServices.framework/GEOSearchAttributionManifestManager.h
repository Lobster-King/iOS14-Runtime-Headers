/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	id<GEOSearchAttributionServerProxy> _serverProxy;

}

@property (nonatomic,readonly) id<GEOSearchAttributionServerProxy> serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(id)sharedManager;
+(void)useProxy:(Class)arg1 ;
+(void)setUseLocalProxy:(BOOL)arg1 ;
+(void)useLocalProxy;
+(void)useRemoteProxy;
-(id<GEOSearchAttributionServerProxy>)serverProxy;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end
