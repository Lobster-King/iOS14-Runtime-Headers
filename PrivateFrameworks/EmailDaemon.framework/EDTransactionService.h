/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface EDTransactionService : NSObject {

	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSString * serviceName;                                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)startTransaction;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)hasPendingTransactions;
-(void)endTransaction:(id)arg1 ;
-(NSString *)serviceName;
-(void)resetPendingTransactions;
-(id)initWithServiceName:(id)arg1 ;
@end

