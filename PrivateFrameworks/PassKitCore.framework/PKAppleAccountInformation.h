/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSandboxAccount;
	NSString* _aidaAlternateDSID;
	NSString* _aidaToken;
	NSString* _aaDSID;
	NSString* _aaAlternateDSID;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _primaryEmailAddress;

}

@property (nonatomic,copy) NSString * aidaAlternateDSID;                //@synthesize aidaAlternateDSID=_aidaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * aidaToken;                        //@synthesize aidaToken=_aidaToken - In the implementation block
@property (nonatomic,copy) NSString * aaDSID;                           //@synthesize aaDSID=_aaDSID - In the implementation block
@property (nonatomic,copy) NSString * aaAlternateDSID;                  //@synthesize aaAlternateDSID=_aaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * appleID;                          //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) BOOL isSandboxAccount;                     //@synthesize isSandboxAccount=_isSandboxAccount - In the implementation block
@property (nonatomic,copy) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * primaryEmailAddress;              //@synthesize primaryEmailAddress=_primaryEmailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)lastName;
-(void)setAppleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAidaAlternateDSID:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(BOOL)aidaAccountAvailable;
-(NSString *)aidaAlternateDSID;
-(NSString *)aidaToken;
-(BOOL)isSandboxAccount;
-(NSString *)appleID;
-(void)setAidaToken:(NSString *)arg1 ;
-(NSString *)primaryEmailAddress;
-(NSString *)aaDSID;
-(void)setPrimaryEmailAddress:(NSString *)arg1 ;
-(id)primaryAppleAccountHash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAaAlternateDSID:(NSString *)arg1 ;
-(NSString *)aaAlternateDSID;
-(id)authorizationHeader;
-(void)setAaDSID:(NSString *)arg1 ;
-(void)setIsSandboxAccount:(BOOL)arg1 ;
@end

