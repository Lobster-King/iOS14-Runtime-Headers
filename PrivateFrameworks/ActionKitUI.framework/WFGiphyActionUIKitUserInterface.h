/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/WFGiphyActionUserInterface.h>
#import <libobjc.A.dylib/WFGiphyViewControllerDelegate.h>

@class NSString;

@interface WFGiphyActionUIKitUserInterface : WFActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithQuery:(id)arg1 selectMultiple:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)giphyViewControllerDidCancel:(id)arg1 ;
-(void)giphyViewController:(id)arg1 didSelectObjects:(id)arg2 ;
-(void)finishWithContent:(id)arg1 error:(id)arg2 ;
@end

