/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSObservable.h>

@class NSString, _BRObservableFilePresenter;

@interface BRObservableFile : NSObject <NSObservable> {

	NSString* _key;
	_BRObservableFilePresenter* _presenter;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) _BRObservableFilePresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_applicationDidBecomeActive:(id)arg1 ;
+(void)_registerInstance:(id)arg1 ;
+(void)_applicationWillResignActive:(id)arg1 ;
+(id)observerForKey:(id)arg1 onFileURL:(id)arg2 ;
+(void)_registerForApplicationLifecycleNotifications;
+(void)_deregisterInstance:(id)arg1 ;
-(_BRObservableFilePresenter *)presenter;
-(void)setPresenter:(_BRObservableFilePresenter *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(id)initWithKey:(id)arg1 fileURL:(id)arg2 ;
-(void)_presenterDidChange;
@end
