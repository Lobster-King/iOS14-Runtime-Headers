/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRFollowUpPosting.h>

@class FLFollowUpController, NSString;

@interface SRFollowUp : NSObject <SRFollowUpPosting> {

	FLFollowUpController* _followUpController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)postFollowUpItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)pendingFollowUpItemsWithCompletion:(/*^block*/id)arg1 ;
@end

