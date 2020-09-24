/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INMessageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, INPerson, NSArray, NSNumber, INSpeakableString, INMessageLinkMetadata, INCurrencyAmount, INImage;

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INMessageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _conversationIdentifier;
	NSString* _content;
	NSDate* _dateSent;
	INPerson* _sender;
	NSArray* _recipients;
	INSpeakableString* _groupName;
	long long _messageType;
	NSString* _serviceName;
	NSDate* _dateMessageWasLastRead;
	NSNumber* _numberOfAttachments;
	long long _messageEffectType;
	INMessage* _referencedMessage;
	INMessageLinkMetadata* _linkMetadata;
	INCurrencyAmount* _paymentAmount;
	NSString* _locationName;
	NSString* _fileExtension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy,readonly) NSDate * dateMessageWasLastRead;                //@synthesize dateMessageWasLastRead=_dateMessageWasLastRead - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfAttachments;                 //@synthesize numberOfAttachments=_numberOfAttachments - In the implementation block
@property (nonatomic,readonly) long long messageEffectType;                         //@synthesize messageEffectType=_messageEffectType - In the implementation block
@property (nonatomic,copy,readonly) INMessage * referencedMessage;                  //@synthesize referencedMessage=_referencedMessage - In the implementation block
@property (nonatomic,copy) INMessageLinkMetadata * linkMetadata;                    //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * paymentAmount;                        //@synthesize paymentAmount=_paymentAmount - In the implementation block
@property (nonatomic,copy) NSString * locationName;                                 //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                                //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,copy) INPerson * sender;                                       //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                    //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateSent;                              //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * groupName;                  //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) long long messageType;                               //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugLogString;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setLocationName:(NSString *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)identifier;
-(long long)messageType;
-(INPerson *)sender;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8 serviceName:(id)arg9 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12 serviceName:(id)arg13 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(long long)arg9 messageEffectType:(long long)arg10 ;
-(NSDate *)dateSent;
-(INSpeakableString *)groupName;
-(NSString *)locationName;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(void)setSender:(INPerson *)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSNumber *)numberOfAttachments;
-(INCurrencyAmount *)paymentAmount;
-(void)setPaymentAmount:(INCurrencyAmount *)arg1 ;
-(INMessage *)referencedMessage;
-(NSString *)fileExtension;
-(NSDate *)dateMessageWasLastRead;
-(long long)messageEffectType;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 messageType:(long long)arg7 ;
-(NSString *)conversationIdentifier;
-(NSString *)content;
-(INMessageLinkMetadata *)linkMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLinkMetadata:(INMessageLinkMetadata *)arg1 ;
-(INImage *)_keyImage;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)serviceName;
-(NSString *)description;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end
