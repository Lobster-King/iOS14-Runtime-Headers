/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MailAccount.h>

@class NSURL, MFIMAPConnection, NSMutableDictionary, DeliveryAccount;

@interface MFFakeMailAccount : MailAccount {

	NSURL* _URL;
	MFIMAPConnection* _cachedConnection;
	NSMutableDictionary* _mailboxes;
	BOOL _managed;
	DeliveryAccount* _deliveryAccount;

}

@property (nonatomic,retain) DeliveryAccount * deliveryAccount;              //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (assign,getter=isManaged,nonatomic) BOOL managed;                  //@synthesize managed=_managed - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)invalidate;
-(unsigned)minID;
-(id)displayName;
-(BOOL)_shouldConfigureMailboxCache;
-(id)_mailboxPathPrefix;
-(id)debugDescription;
-(void)setManaged:(BOOL)arg1 ;
-(BOOL)willPerformActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 result:(id*)arg3 ;
-(void)didFinishActionForChokePoint:(id)arg1 coalescePoint:(id)arg2 withResult:(id)arg3 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(id)username;
-(BOOL)isActive;
-(int)cachePolicy;
-(id)uniqueID;
-(id)hostname;
-(id)init;
-(BOOL)isManaged;
-(DeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(id)_URLScheme;
-(Class)storeClass;
-(BOOL)supportsRemoteAppend;
-(BOOL)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(BOOL)arg2 ;
-(id)description;
-(id)initWithURL:(id)arg1 rootMailboxUid:(id)arg2 ;
-(void)setUnreadCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)_nameForMailboxUid:(id)arg1 ;
-(void)setCachedConnection:(id)arg1 ;
-(id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3 failedToSelectMailbox:(BOOL*)arg4 ;
-(id)flagChangesForMailboxPath:(id)arg1 UID:(unsigned)arg2 connectTime:(double)arg3 ;
@end
