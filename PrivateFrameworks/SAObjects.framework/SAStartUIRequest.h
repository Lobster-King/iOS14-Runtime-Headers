/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class SAStartRequest, SAStartLocalRequest, NSString, NSArray;

@interface SAStartUIRequest : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SAStartRequest * startRequest; 
@property (nonatomic,retain) SAStartLocalRequest * startLocalRequest; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startUIRequestWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)startUIRequest;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(SAStartRequest *)startRequest;
-(SAStartLocalRequest *)startLocalRequest;
-(void)setStartRequest:(SAStartRequest *)arg1 ;
-(void)setStartLocalRequest:(SAStartLocalRequest *)arg1 ;
@end
