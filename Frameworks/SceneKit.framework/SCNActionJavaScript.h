/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSString;

@interface SCNActionJavaScript : SCNAction {

	NSString* _script;

}
+(BOOL)supportsSecureCoding;
+(id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2 ;
-(id)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCustom;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)reversedAction;
@end
