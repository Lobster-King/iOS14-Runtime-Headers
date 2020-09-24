/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUANFDebugSettingsProvider.h>

@interface NewsArticles.ANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider> {

	 viewportDebuggingEnabled;
	 testingConditionEnabled;
	 observers;

}

@property (assign,nonatomic) BOOL viewportDebuggingEnabled; 
@property (assign,nonatomic) BOOL testingConditionEnabled; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(BOOL)testingConditionEnabled;
-(void)setTestingConditionEnabled:(BOOL)arg1 ;
-(BOOL)viewportDebuggingEnabled;
-(void)setViewportDebuggingEnabled:(BOOL)arg1 ;
@end
