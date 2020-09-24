/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@class NSUUID, NSExtension;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController {

	BOOL _readyToDisplay;
	NSUUID* _requestUUID;
	NSExtension* _weakExtension;

}

@property (nonatomic,retain) NSUUID * requestUUID;                                     //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * weakExtension;                       //@synthesize weakExtension=_weakExtension - In the implementation block
@property (assign,getter=isReadyToDisplay,nonatomic) BOOL readyToDisplay;              //@synthesize readyToDisplay=_readyToDisplay - In the implementation block
-(NSUUID *)requestUUID;
-(void)viewDidLayoutSubviews;
-(void)setRequestUUID:(NSUUID *)arg1 ;
-(void)dealloc;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)isReadyToDisplay;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(void)setReadyToDisplay:(BOOL)arg1 ;
@end
