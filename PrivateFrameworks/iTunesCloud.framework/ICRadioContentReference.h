/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ICRadioContentReference : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,copy,readonly) NSDictionary * matchDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * rawContentDictionary; 
+(BOOL)supportsSecureCoding;
+(id)storeItemWithIdentifier:(id)arg1 ;
-(long long)contentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)rawContentDictionary;
-(NSDictionary *)matchDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
