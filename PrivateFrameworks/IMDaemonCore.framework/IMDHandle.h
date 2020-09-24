/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IMDHandle : NSObject {

	NSString* _id;
	NSString* _unformattedID;
	NSString* _countryCode;
	NSString* _personCentricID;
	NSString* _CNContactID;

}

@property (nonatomic,retain) NSString * ID;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;                        //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * handleInfo; 
@property (nonatomic,retain) NSString * personCentricID;                      //@synthesize personCentricID=_personCentricID - In the implementation block
@property (nonatomic,copy) NSString * CNContactID;                            //@synthesize CNContactID=_CNContactID - In the implementation block
-(NSString *)ID;
-(BOOL)isBusiness;
-(NSString *)countryCode;
-(void)setID:(NSString *)arg1 ;
-(void)dealloc;
-(void)setUnformattedID:(NSString *)arg1 ;
-(long long)compareIDs:(id)arg1 ;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(NSString *)personCentricID;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)unformattedID;
-(unsigned long long)hash;
-(id)description;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSDictionary *)handleInfo;
-(BOOL)isBetterDefinedThan:(id)arg1 ;
-(NSString *)CNContactID;
-(void)setCNContactID:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 ;
@end
