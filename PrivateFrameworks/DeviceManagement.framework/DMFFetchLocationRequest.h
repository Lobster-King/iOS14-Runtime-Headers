/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchLocationRequest : DMFTaskRequest {

	NSString* _originator;

}

@property (nonatomic,copy) NSString * originator;              //@synthesize originator=_originator - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)originator;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOriginator:(NSString *)arg1 ;
@end
