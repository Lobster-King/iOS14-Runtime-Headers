/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSWidgetMetricsServiceServerInterface.h>

@protocol SBSWidgetMetricsProviding, OS_dispatch_queue;
@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSObject, NSString;

@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface> {

	id<SBSWidgetMetricsProviding> _metricsProvider;
	NSMutableArray* _connections;
	FBServiceClientAuthenticator* _authenticator;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSMutableArray * connections;                                 //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) FBServiceClientAuthenticator * authenticator;                      //@synthesize authenticator=_authenticator - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionListener * listener;                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<SBSWidgetMetricsProviding> metricsProvider;              //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)connections;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(FBServiceClientAuthenticator *)authenticator;
-(void)dealloc;
-(id<SBSWidgetMetricsProviding>)metricsProvider;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BSServiceConnectionListener *)listener;
-(id)initWithMetricsProvider:(id)arg1 ;
-(id)systemMetricsForWidget:(id)arg1 ;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg1 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3 ;
@end

