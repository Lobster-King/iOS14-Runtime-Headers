/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADAttribution_XPC.h>

@class NSXPCConnection, NSNumber, NSString;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {

	NSXPCConnection* _connection;
	NSNumber* _transactionToken;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSNumber * transactionToken;               //@synthesize transactionToken=_transactionToken - In the implementation block
-(void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSXPCConnection *)connection;
-(void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)requestAttributionDetails:(/*^block*/id)arg1 ;
-(int)appRunState;
-(void)overrideAttributionData:(id)arg1 ;
-(void)makeAttributionRequestWithObject:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3 ;
-(void)setTransactionToken:(NSNumber *)arg1 ;
-(NSNumber *)transactionToken;
-(void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isAppTrackingAuthorized;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(NSString *)bundleID;
-(BOOL)productionClient;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

