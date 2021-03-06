/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CPLResetReason : NSObject <NSSecureCoding> {

	BOOL _tentative;
	NSString* _uuid;
	NSDate* _date;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) id asPlist; 
@property (nonatomic,copy,readonly) NSString * uuid;                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                  //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL tentative;                        //@synthesize tentative=_tentative - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)date;
-(id)initWithPlist:(id)arg1 ;
-(void)setTentative:(BOOL)arg1 ;
-(id)asPlist;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(BOOL)tentative;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)reason;
-(id)initWithDate:(id)arg1 reason:(id)arg2 ;
-(id)reasonDescriptionWithNow:(id)arg1 ;
@end

