/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {

	long long _dateTimeStyle;
	long long _backgroundStyle;
	long long _homeGestureMode;
	BOOL _reducesWhitePoint;
	BOOL _suppressesNotifications;
	BOOL _suppressesBottomEdgeContent;

}
+(BOOL)supportsSecureCoding;
-(long long)dateTimeStyle;
-(id)init;
-(long long)backgroundStyle;
-(id)initWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)homeGestureMode;
-(BOOL)reducesWhitePoint;
-(BOOL)suppressesNotifications;
-(BOOL)suppressesBottomEdgeContent;
@end
