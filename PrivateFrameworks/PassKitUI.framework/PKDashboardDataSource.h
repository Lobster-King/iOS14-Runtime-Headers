/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKDashboardDataSource <NSObject>
@optional
-(id)navigationBarTitle;
-(void)setDataSourceDelegate:(id)arg1;

@required
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(unsigned long long)numberOfSections;
-(id)footerTextItemForSection:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(id)titleForSection:(unsigned long long)arg1;

@end
