/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FLTelemetryController;
@class NSObject;

@interface FLTelemetryProcessor : NSObject {

	NSObject*<FLTelemetryController> _telemetryController;

}
-(id)initWithController:(id)arg1 ;
-(void)processItemRemoval:(id)arg1 ;
-(void)processItemAddition:(id)arg1 ;
-(void)processCurrentItems:(id)arg1 ;
@end

