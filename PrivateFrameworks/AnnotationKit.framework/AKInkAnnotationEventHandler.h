/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler
+(BOOL)allowsDraggingOfAnnotation:(id)arg1 ;
-(CGSize)naturalSizeForAnnotation;
-(BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)alwaysLockAspectRatio;
@end
