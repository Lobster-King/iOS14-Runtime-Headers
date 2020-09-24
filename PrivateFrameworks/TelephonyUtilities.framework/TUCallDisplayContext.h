/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponents, NSString;

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	int _legacyAddressBookIdentifier;
	NSPersonNameComponents* _personNameComponents;
	NSString* _suggestedName;
	NSString* _companyName;
	NSString* _mapName;
	NSString* _location;
	NSString* _contactName;
	NSString* _contactLabel;
	NSString* _callDirectoryLabel;
	NSString* _callDirectoryLocalizedExtensionContainingAppName;
	NSString* _callDirectoryExtensionIdentifier;
	NSString* _contactIdentifier;
	NSString* _name;
	NSString* _label;

}

@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * personNameComponents;                            //@synthesize personNameComponents=_personNameComponents - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                                                 //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,copy) NSString * label;                                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * companyName;                                                   //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy) NSString * mapName;                                                       //@synthesize mapName=_mapName - In the implementation block
@property (nonatomic,copy) NSString * location;                                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * contactName;                                                   //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                                                  //@synthesize contactLabel=_contactLabel - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryLabel;                                            //@synthesize callDirectoryLabel=_callDirectoryLabel - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryLocalizedExtensionContainingAppName;              //@synthesize callDirectoryLocalizedExtensionContainingAppName=_callDirectoryLocalizedExtensionContainingAppName - In the implementation block
@property (nonatomic,copy) NSString * callDirectoryExtensionIdentifier;                              //@synthesize callDirectoryExtensionIdentifier=_callDirectoryExtensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) int legacyAddressBookIdentifier;                                        //@synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
+(BOOL)supportsSecureCoding;
-(NSString *)contactName;
-(void)setFirstName:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)companyName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)mapName;
-(NSString *)firstName;
-(NSPersonNameComponents *)personNameComponents;
-(void)setContactName:(NSString *)arg1 ;
-(NSString *)location;
-(int)legacyAddressBookIdentifier;
-(void)setLegacyAddressBookIdentifier:(int)arg1 ;
-(void)setContactLabel:(NSString *)arg1 ;
-(NSString *)contactLabel;
-(void)setPersonNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)callDirectoryLabel;
-(NSString *)callDirectoryLocalizedExtensionContainingAppName;
-(NSString *)callDirectoryExtensionIdentifier;
-(void)setMapName:(NSString *)arg1 ;
-(void)setCallDirectoryLabel:(NSString *)arg1 ;
-(void)setCallDirectoryLocalizedExtensionContainingAppName:(NSString *)arg1 ;
-(void)setCallDirectoryExtensionIdentifier:(NSString *)arg1 ;
-(id)displayContextByMergingWithDisplayContext:(id)arg1 ;
-(NSString *)suggestedName;
-(void)setCompanyName:(NSString *)arg1 ;
-(id)init;
-(void)setSuggestedName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(unsigned long long)hash;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSString *)name;
@end
