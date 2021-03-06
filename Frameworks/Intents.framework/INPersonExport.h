/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;


@protocol INPersonExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) INPersonHandle * personHandle; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,copy) NSArray * aliases; 
@property (assign,nonatomic) long long suggestionType; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,copy) NSArray * alternatives; 
@required
-(void)setCustomIdentifier:(id)arg1;
-(NSArray *)aliases;
-(BOOL)isMe;
-(NSString *)handle;
-(void)setImage:(id)arg1;
-(void)setIsMe:(BOOL)arg1;
-(NSString *)contactIdentifier;
-(NSString *)displayName;
-(void)setDisplayName:(id)arg1;
-(NSArray *)alternatives;
-(NSPersonNameComponents *)nameComponents;
-(NSString *)relationship;
-(long long)suggestionType;
-(void)setAliases:(id)arg1;
-(void)setPersonHandle:(id)arg1;
-(id)init;
-(void)setRelationship:(id)arg1;
-(void)setHandle:(id)arg1;
-(INImage *)image;
-(void)setSuggestionType:(long long)arg1;
-(void)setAlternatives:(id)arg1;
-(INPersonHandle *)personHandle;
-(void)setNameComponents:(id)arg1;
-(void)setContactIdentifier:(id)arg1;
-(NSString *)customIdentifier;

@end

