/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CNCollationLanguage : NSObject {

	NSArray* _sections;
	NSString* _lastCharacter;
	NSString* _firstCharacterAfterLanguage;

}

@property (readonly) NSArray * sections;                                  //@synthesize sections=_sections - In the implementation block
@property (readonly) NSString * lastCharacter;                            //@synthesize lastCharacter=_lastCharacter - In the implementation block
@property (readonly) NSString * firstCharacterAfterLanguage;              //@synthesize firstCharacterAfterLanguage=_firstCharacterAfterLanguage - In the implementation block
-(id)initWithSections:(id)arg1 lastCharacter:(id)arg2 firstCharacterAfterLanguage:(id)arg3 ;
-(NSString *)lastCharacter;
-(NSString *)firstCharacterAfterLanguage;
-(NSArray *)sections;
@end
