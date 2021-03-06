/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKTransitAppletHistoryFetcherDelegate, OS_dispatch_queue, NFSession;
@class NSString, NSObject;

@interface NPKTransitAppletHistoryFetcher : NSObject {

	id<NPKTransitAppletHistoryFetcherDelegate> _delegate;
	NSString* _aidToFetch;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<NFSession> _pendingSessionHandle;

}

@property (nonatomic,retain) NSString * aidToFetch;                                                   //@synthesize aidToFetch=_aidToFetch - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<NFSession> pendingSessionHandle;                               //@synthesize pendingSessionHandle=_pendingSessionHandle - In the implementation block
@property (assign,nonatomic,__weak) id<NPKTransitAppletHistoryFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<NPKTransitAppletHistoryFetcherDelegate>)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(id<NPKTransitAppletHistoryFetcherDelegate>)delegate;
-(NSObject*<NFSession>)pendingSessionHandle;
-(void)_handleActiveSecureElementManagerSession:(id)arg1 ;
-(void)_handleSecureElementSessionFailureWithError:(id)arg1 ;
-(void)setPendingSessionHandle:(NSObject*<NFSession>)arg1 ;
-(void)setAIDToFetch:(id)arg1 ;
-(void)requestTransitHistoryFetch;
-(NSString *)aidToFetch;
-(void)setAidToFetch:(NSString *)arg1 ;
@end

