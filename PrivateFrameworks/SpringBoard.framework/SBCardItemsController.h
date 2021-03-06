/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBCardItemsControllerRemoteInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSXPCListener, MCProfileConnection, SBWalletNotificationSource, NSString;

@interface SBCardItemsController : NSObject <SBCardItemsControllerRemoteInterface, NSXPCListenerDelegate> {

	NSMutableDictionary* _cardItems;
	NSMutableArray* _connections;
	NSXPCListener* _listener;
	MCProfileConnection* _profileConnection;
	BOOL _cardWhileLockedAllowed;
	SBWalletNotificationSource* _walletNotificationSource;

}

@property (nonatomic,retain) SBWalletNotificationSource * walletNotificationSource;              //@synthesize walletNotificationSource=_walletNotificationSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(SBWalletNotificationSource *)walletNotificationSource;
-(void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2 ;
-(void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setWalletNotificationSource:(SBWalletNotificationSource *)arg1 ;
-(void)_updateRestrictions;
-(void)_updateCardItem:(id)arg1 ;
-(void)_updateThumbnailForCardItem:(id)arg1 withSnapshotter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_deactivateCardItem:(id)arg1 ;
@end

