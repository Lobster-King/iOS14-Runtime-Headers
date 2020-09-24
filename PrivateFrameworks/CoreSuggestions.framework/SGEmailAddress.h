/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/SGLabeledObject.h>

@class NSString;

@interface SGEmailAddress : SGLabeledObject {

	NSString* _emailAddress;

}

@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5 ;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 ;
+(id)emailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 withRecordId:(id)arg4 ;
-(NSString *)emailAddress;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionInfo:(id)arg3 recordId:(id)arg4 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToEmailAddress:(id)arg1 ;
@end
