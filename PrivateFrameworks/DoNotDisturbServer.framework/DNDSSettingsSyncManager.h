/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSettingsSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDelegate> delegate; 
@required
-(void)setDataSource:(id)arg1;
-(void)update;
-(id<DNDSSettingsSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(id<DNDSSettingsSyncManagerDelegate>)delegate;

@end
