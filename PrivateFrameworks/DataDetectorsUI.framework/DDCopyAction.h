/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@interface DDCopyAction : DDAction
+(BOOL)actionAvailableForContact:(id)arg1 ;
-(id)localizedName;
-(id)icon;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)performFromView:(id)arg1 ;
-(BOOL)canBePerformedWhenDeviceIsLocked;
@end
