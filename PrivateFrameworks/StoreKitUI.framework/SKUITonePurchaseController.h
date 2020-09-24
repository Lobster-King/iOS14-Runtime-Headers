/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class SKUIClientContext, CNContactPickerViewController, SKUIItem, UIViewController, NSString;

@interface SKUITonePurchaseController : NSObject <CNContactPickerDelegate> {

	SKUIClientContext* _clientContext;
	CNContactPickerViewController* _contactPickerController;
	/*^block*/id _completionBlock;
	SKUIItem* _item;
	UIViewController* _parentViewController;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dismissContactPicker;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)dealloc;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(UIViewController *)parentViewController;
-(void)_presentViewController:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)showPurchaseFlowWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_finishWithTonePurchase:(id)arg1 ;
-(void)_showContactPicker;
-(void)_finishContactPicker:(id)arg1 withContact:(id)arg2 ;
@end
