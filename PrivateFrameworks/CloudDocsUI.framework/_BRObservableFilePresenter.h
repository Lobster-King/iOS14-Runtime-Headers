/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, BRObservableFile, NSString;

@interface _BRObservableFilePresenter : NSObject <NSFilePresenter> {

	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	BRObservableFile* _parent;

}

@property (copy) NSURL * presentedItemURL;                                         //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain) NSOperationQueue * presentedItemOperationQueue;                 //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (assign,nonatomic,__weak) BRObservableFile * parent;                     //@synthesize parent=_parent - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParent:(BRObservableFile *)arg1 ;
-(BRObservableFile *)parent;
-(void)presentedItemUbiquityDidChange;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidChange;
-(NSURL *)presentedItemURL;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPresentedItemURL:(NSURL *)arg1 ;
-(void)setPresentedItemOperationQueue:(NSOperationQueue *)arg1 ;
@end
