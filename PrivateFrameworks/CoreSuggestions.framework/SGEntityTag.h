/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGEntityTag : NSObject <NSCopying> {

	BOOL _indexed;
	BOOL _stored;
	BOOL _tracked;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL indexed;                  //@synthesize indexed=_indexed - In the implementation block
@property (nonatomic,readonly) BOOL stored;                   //@synthesize stored=_stored - In the implementation block
@property (nonatomic,readonly) BOOL tracked;                  //@synthesize tracked=_tracked - In the implementation block
+(void)initialize;
+(id)extractedFromTemplateWithName:(id)arg1 ;
+(id)url:(id)arg1 ;
+(id)inhuman;
+(id)extractedTrain;
+(id)categoryTagWithCategoryType:(int)arg1 ;
+(id)confidenceScore:(float)arg1 ;
+(void)rememberLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
+(id)fromTextMessage;
+(id)reservationContainerReferenceWithData:(id)arg1 ;
+(id)fromForwardedMessage;
+(id)allTags;
+(id)isPartiallyDownloaded;
+(id)hardName;
+(id)defaultDuration;
+(id)intentResponseUserActivityString:(id)arg1 ;
+(id)interactionId:(id)arg1 ;
+(id)extractedBoat;
+(id)timezoneIdentifier:(id)arg1 ;
+(id)reminderMetadata:(id)arg1 ;
+(void)tombstoneLabel:(id)arg1 ;
+(id)eventMetadata:(id)arg1 ;
+(id)mailingListId:(id)arg1 ;
+(id)extractedFromTemplateWithShortName:(id)arg1 ;
+(id)ekEventAvailabilityState:(id)arg1 ;
+(id)titleGeneratedFromTemplate;
+(id)contactDetail:(id)arg1 ;
+(id)extractedHotel;
+(id)interactionTeamId:(id)arg1 ;
+(id)eventHash:(id)arg1 ;
+(id)extractedBus;
+(id)extractedTicket;
+(id)fromInteraction;
+(id)reservationContainerReference:(id)arg1 ;
+(id)isSent;
+(id)schemaOrg:(id)arg1 ;
+(id)naturalLanguageEventLanguageID:(id)arg1 ;
+(id)extraKey:(id)arg1 ;
+(id)naturalLanguageEventAttributes:(unsigned long long)arg1 ;
+(id)calendarAppUsageLevel:(float)arg1 ;
+(id)resolveName:(id)arg1 ;
+(id)fullyDissected;
+(id)messagesAppUsageLevel:(unsigned char)arg1 ;
+(id)interactionGroupId:(id)arg1 ;
+(id)usedBubblesCount:(unsigned char)arg1 ;
+(id)reservationItemReferencesWithData:(id)arg1 ;
+(id)geocodingModePOIOnly;
+(id)identity:(id)arg1 ;
+(id)messageWithMailMessageKey:(id)arg1 ;
+(id)messageWithEmailKey:(id)arg1 ;
+(id)poiFilters:(id)arg1 ;
+(id)interactionContactIdentifier:(id)arg1 ;
+(id)extractedFood;
+(id)fromReply;
+(id)significantSender;
+(id)testTag:(int)arg1 ;
+(id)titleGeneratedFromSubject;
+(id)fromSync;
+(id)remember:(id)arg1 ;
+(id)templateException;
+(id)interactionBundleId:(id)arg1 ;
+(id)tagForLabel:(id)arg1 value:(id)arg2 ;
+(id)reservationItemReferences:(id)arg1 ;
+(id)geocodingModeAddressThenPOI;
+(id)extractedEventCancellation;
+(id)extractedCarRental;
+(id)containsEntityExtraction:(long long)arg1 ;
+(id)messageWithMessageId:(id)arg1 fromSource:(id)arg2 ;
+(id)textCalendarAttachment:(id)arg1 ;
+(id)mailAppUsageLevel:(unsigned char)arg1 ;
+(id)allDay;
+(id)extractedEvent;
+(id)extractedFlight;
+(id)naturalLanguageEvent;
+(id)participantCount:(unsigned char)arg1 ;
+(id)reminderHash:(id)arg1 ;
+(id)geocodingModeAddressOnly;
+(id)naturalLanguageEventTypeIdentifier:(id)arg1 ;
+(id)extractedMovie;
+(id)fromExtractedDomain;
+(id)fromCalendarAttachment;
+(id)human;
+(id)geocodingModeAddressWithCanonicalSearch;
+(id)domain:(id)arg1 ;
+(id)extractedSocial;
-(BOOL)tracked;
-(BOOL)isInteractionId;
-(BOOL)isExtraKey;
-(BOOL)isParticipantCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 stored:(BOOL)arg3 indexed:(BOOL)arg4 tracked:(BOOL)arg5 ;
-(BOOL)isUsedBubblesCount;
-(id)reminderMetadata;
-(BOOL)indexed;
-(BOOL)isConfidenceScore;
-(BOOL)isEKEventAvailabilityState;
-(BOOL)isEventMetadata;
-(id)intentResponseUserActivityString;
-(id)reservationItemReferences;
-(BOOL)isInteractionContactIdentifier;
-(BOOL)stored;
-(BOOL)isEventHash;
-(BOOL)isCalendarAppUsageLevel;
-(BOOL)isContactDetail;
-(NSString *)value;
-(BOOL)isReservationContainerReference;
-(BOOL)isReminderMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isTemplateShortName;
-(BOOL)isSchemaOrg;
-(BOOL)isReservationItemReferences;
-(BOOL)isDomain;
-(BOOL)isMessagesAppUsageLevel;
-(id)eventMetadata;
-(BOOL)isMailAppUsageLevel;
-(BOOL)isInteractionTeamId;
-(BOOL)isNaturalLanguageEventAttributes;
-(BOOL)isNaturalLanguageEventTypeIdentifier;
-(BOOL)isReminderHash;
-(id)reservationContainerReference;
-(BOOL)isPOIFilters;
-(BOOL)isInteractionBundleId;
-(NSString *)label;
-(BOOL)isTemplateName;
-(BOOL)isMailingListId;
-(BOOL)isInteractionGroupId;
-(unsigned long long)hash;
-(BOOL)isIntentResponseUserActivityString;
-(id)name;
-(BOOL)isEqualToEntityTag:(id)arg1 ;
-(BOOL)isUrl;
-(id)description;
-(id)initWithLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
-(BOOL)isExtractedEventCategory;
-(BOOL)isNaturalLanguageEventLanguageID;
@end

