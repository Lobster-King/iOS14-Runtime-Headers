/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCFrontmostApplicationObserverDelegate;
@interface GCFrontmostApplicationObserver : NSObject {

	int _frontmostPid;
	id<GCFrontmostApplicationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCFrontmostApplicationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<GCFrontmostApplicationObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id<GCFrontmostApplicationObserverDelegate>)delegate;
@end
