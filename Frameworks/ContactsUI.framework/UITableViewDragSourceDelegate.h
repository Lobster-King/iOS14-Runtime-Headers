/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewDragSourceDelegate <NSObject>
@optional
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4;
-(long long)__tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
-(void)_tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
-(void)_tableView:(id)arg1 dragSessionDidEnd:(id)arg2;

@end
