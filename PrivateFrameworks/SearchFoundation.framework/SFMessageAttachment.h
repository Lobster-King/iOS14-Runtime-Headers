/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFMessageAttachment.h>
@class NSURL, NSDictionary, NSData;


@protocol SFMessageAttachment <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(void)setUrl:(id)arg1;
-(NSURL *)url;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary, NSData, NSString;

@interface SFMessageAttachment : NSObject <SFMessageAttachment, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	NSURL* _url;

}

@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
@end

