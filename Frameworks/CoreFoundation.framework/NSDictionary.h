/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/PHFetchDictionaryAccessing.h>
#import <libobjc.A.dylib/ASDNotificationType.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/AMSHashable.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/PQLBindable.h>
#import <libobjc.A.dylib/AFSecurityDigestibleChunksProviding.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/CUByteCodable.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSArray;

@interface NSDictionary : NSObject <PHFetchDictionaryAccessing, ASDNotificationType, NSFetchRequestResult, AMSHashable, HMFObject, CSCoderEncoder, PQLBindable, AFSecurityDigestibleChunksProviding, INJSONSerializable, CUByteCodable, NSFetchRequestResult, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * hashedDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (nonatomic,copy,readonly) NSString * if_JSONStringRepresentation; 
@property (nonatomic,readonly) unsigned short fileHFSFlags; 
@property (nonatomic,readonly) unsigned long long fileHFSResourceForkSize; 
@property (readonly) unsigned long long count; 
+(unsigned long long)hashOfHighlighInfo:(id)arg1 ;
+(id)mergeFieldElement:(id)arg1 withElement:(id)arg2 ;
+(id)highlightInfoForSearchStringWithPrefixMatchInAllFields:(id)arg1 language:(id)arg2 ;
+(id)mergeHighlightInfo:(id)arg1 withHighlighInfo:(id)arg2 ;
+(BOOL)highlightInfoContainsPrefixMatch:(id)arg1 ;
+(id)decomposedHighlightInfo:(id)arg1 ;
+(id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)safari_dictionaryWithJSONData:(id)arg1 options:(unsigned long long)arg2 ;
+(id)safari_dictionaryWithJSONOrPropertyListData:(id)arg1 ;
+(id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(/*^block*/id)arg2 ;
+(id)safari_dictionaryWithPropertyListData:(id)arg1 ;
+(id)ams_dictionaryWithEncryptionResult:(SCD_Struct_NS15)arg1 ;
+(id)shortDescription;
+(BOOL)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(BOOL)arg2 ;
+(id)hk_acceptedMetadataValueClasses;
+(void)_addDerivedPublicKeyIfNecessaryForPrivateKey:(id)arg1 mutableDictionary:(id)arg2 ;
+(id)hk_acceptedPublicMetadataValueClasses;
+(id)hk_secureCodingClasses;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)ak_dictionaryWithResponseData:(id)arg1 ;
+(id)ak_jsonDictionaryWithResponseData:(id)arg1 ;
+(id)_geo_dictionaryFromXPCObject:(id)arg1 ;
+(id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2 ;
+(id)MCShortenedData:(id)arg1 ;
+(id)MCShortenedArray:(id)arg1 ;
+(id)MCShortenedDictionary:(id)arg1 ;
+(id)MCShortenedObject:(id)arg1 ;
+(id)MCDictionaryFromFile:(id)arg1 ;
+(id)if_dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 uniquingKeysWith:(/*^block*/id)arg3 ;
+(id)if_dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 uniquingKeysWith:(/*^block*/id)arg4 ;
+(id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dictionaryWithPlistData:(id)arg1 ;
+(id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2 ;
+(id)MI_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dmlmr_buildVersionKey;
+(id)dmlmr_successKey;
+(id)dmlmr_lastMigrationResultsWithSuccess:(BOOL)arg1 buildVersion:(id)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 error:(id*)arg3 ;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dictionary;
-(id)mf_filterUsingMap:(id)arg1 inverse:(BOOL)arg2 ;
-(BOOL)mf_boolForKey:(id)arg1 ;
-(int)mf_integerForKey:(id)arg1 ;
-(id)DAMergeOverrideDictionary:(id)arg1 ;
-(id)DAObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)MSMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(BOOL)MSASIsGlobalResetSync;
-(id)MSASAlbumResetSyncAlbumGUID;
-(BOOL)MSASIsLocalChange;
-(id)MSASEventIsDueToAlbumDeletionAlbumGUID;
-(id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
-(BOOL)MSASIsNotInteresting;
-(BOOL)MSASIsErrorRecovery;
-(id)_uniquedDictionary:(Class)arg1 ;
-(id)uniquedDictionary;
-(id)mutableUniquedDictionary;
-(id)ic_prettyDescriptionWithTabLevel:(unsigned long long)arg1 ;
-(id)ic_objectForNonNilKey:(id)arg1 ;
-(id)ic_md5;
-(id)_FTFilteredDictionaryForAPS;
-(id)ef_objectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)ef_mapValues:(/*^block*/id)arg1 ;
-(id)ef_filter:(/*^block*/id)arg1 ;
-(id)wb_stringForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_URLForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_numberForKey:(id)arg1 ;
-(BOOL)wb_boolForKey:(id)arg1 ;
-(id)wb_numberForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_dictionaryForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_arrayForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)wb_objectOfType:(Class)arg1 forKey:(id)arg2 isValid:(BOOL*)arg3 ;
-(id)wb_dateForKey:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)_safari_sortedTupleArray;
-(id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(BOOL)arg2 ;
-(id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)safari_URLForKey:(id)arg1 ;
-(id)safari_UUIDForKey:(id)arg1 ;
-(id)safari_setForKey:(id)arg1 ;
-(id)safari_userActivityForKey:(id)arg1 ;
-(id)safari_dictionaryWithLowercaseKeys;
-(id)safari_mapTableForKey:(id)arg1 ;
-(id)safari_mapAndFilterKeysUsingBlock:(/*^block*/id)arg1 ;
-(id)safari_diffWithDictionary:(id)arg1 ;
-(id)safari_dictionaryByRemovingNullObjects;
-(BOOL)safari_containsObject:(id)arg1 ;
-(id)safari_stringForKey:(id)arg1 ;
-(id)safari_numberForKey:(id)arg1 ;
-(id)safari_arrayForKey:(id)arg1 ;
-(id)safari_dictionaryForKey:(id)arg1 ;
-(BOOL)safari_boolForKey:(id)arg1 ;
-(id)safari_dateForKey:(id)arg1 ;
-(id)safari_dataForKey:(id)arg1 ;
-(id)safari_dictionaryByMergingWithDictionary:(id)arg1 ;
-(id)safari_mapAndFilterKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)airMessageCanonicalForm;
-(id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1 ;
-(id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1 ;
-(id)axssDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(BOOL)axssDecodeBoolForKey:(id)arg1 ;
-(id)axssDecodeArrayOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)parsec_stringForKey:(id)arg1 ;
-(id)parsec_numberForKey:(id)arg1 ;
-(id)sf_imageForKey:(id)arg1 reply:(id)arg2 ;
-(BOOL)parsec_boolForKey:(id)arg1 ;
-(id)parsec_arrayForKey:(id)arg1 ;
-(id)sf_asRichText:(id)arg1 ;
-(id)parsec_dictionaryForKey:(id)arg1 ;
-(int)sf_textColorForKey:(id)arg1 ;
-(id)sf_asPunchout:(id)arg1 ;
-(id)sf_asActionItem:(id)arg1 ;
-(id)parsec_URLForKey:(id)arg1 ;
-(id)sf_asImage:(id)arg1 ;
-(id)sf_asFormattedText:(id)arg1 ;
-(id)sf_asAirport;
-(void)sf_baseCardSection:(id)arg1 reply:(id)arg2 ;
-(id)sf_asMediaOffer:(id)arg1 ;
-(id)sf_asAppLink:(id)arg1 ;
-(id)sf_asTrack:(id)arg1 ;
-(id)sf_asColor:(id)arg1 ;
-(id)sf_asPunchout;
-(id)sf_asMediaItem:(id)arg1 ;
-(id)sf_asMediaDetail:(id)arg1 ;
-(id)sf_asTableAlignmentSchema;
-(id)sf_asButton:(id)arg1 ;
-(id)sf_asFlight;
-(id)sf_asWatchListItem:(id)arg1 ;
-(id)sf_asSearchResult:(id)arg1 factory:(id)arg2 ;
-(id)sf_asSuggestion:(id)arg1 ;
-(id)sf_asRowCardSection:(id)arg1 ;
-(id)sf_asRichTitleCardSection:(id)arg1 ;
-(id)sf_asTitleCardSection:(id)arg1 ;
-(id)sf_asAppLinkCardSection:(id)arg1 ;
-(id)sf_asTrackListCardSection:(id)arg1 ;
-(id)sf_asDescriptionCardSection:(id)arg1 ;
-(id)sf_asMediaInfoCardSection:(id)arg1 ;
-(id)sf_asMediaPlayerCardSection:(id)arg1 ;
-(id)sf_asSocialMediaPostCardSection:(id)arg1 ;
-(id)sf_asMetaInfoCardSection:(id)arg1 ;
-(id)sf_asScoreboardCardSection:(id)arg1 ;
-(id)sf_asNowPlayingCardSection:(id)arg1 ;
-(id)sf_asKeyValueDataCardSection:(id)arg1 ;
-(id)sf_asTableRowCardSection:(id)arg1 ;
-(id)sf_asDetailedRowCardSection:(id)arg1 ;
-(id)sf_asTextColumnsCardSection:(id)arg1 ;
-(id)sf_asStockChartCardSection:(id)arg1 ;
-(id)sf_asWebCardSection:(id)arg1 ;
-(id)sf_asFlightCardSection:(id)arg1 ;
-(id)sf_asSuggestionCardSection:(id)arg1 ;
-(id)sf_asWatchListCardSection:(id)arg1 ;
-(id)parsec_dictionaryByMappingKeysUsingBlock:(/*^block*/id)arg1 ;
-(id)parsec_dataForKey:(id)arg1 ;
-(id)parsec_dateForKey:(id)arg1 ;
-(id)parsec_UUIDForKey:(id)arg1 ;
-(id)locationFromDataForKey:(id)arg1 ;
-(id)regionFromDataForKey:(id)arg1 ;
-(id)ams_arrayUsingTransform:(/*^block*/id)arg1 ;
-(NSString *)hashedDescription;
-(id)ams_objectForCaseInsensitiveKey:(id)arg1 ;
-(id)ams_mapWithTransform:(/*^block*/id)arg1 ;
-(id)ams_filterUsingTest:(/*^block*/id)arg1 ;
-(SCD_Struct_NS15)ams_encryptionResult;
-(id)ams_firstObjectPassingTest:(/*^block*/id)arg1 ;
-(id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(id)ams_firstKeyObjectPassingTest:(/*^block*/id)arg1 ;
-(id)ams_componentsJoinedByString:(id)arg1 ;
-(id)ams_firstKeyPassingTest:(/*^block*/id)arg1 ;
-(id)ssb_arrayForKey:(id)arg1 ;
-(id)ssb_stringForKey:(id)arg1 ;
-(id)ssb_dictionaryForKey:(id)arg1 ;
-(id)ssb_numberForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)urlForKey:(id)arg1 ;
-(id)hmf_dictionaryForKey:(id)arg1 ;
-(NSString *)privateDescription;
-(id)predicateFromDataForKey:(id)arg1 ;
-(id)arrayOfDateComponentsFromDataForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)nullForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(NSString *)shortDescription;
-(id)uuidForKey:(id)arg1 ;
-(id)mutableSetForKey:(id)arg1 ;
-(id)dateComponentsForKey:(id)arg1 ;
-(id)hmf_dateComponentsForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)errorForKey:(id)arg1 ;
-(id)hmf_timeZoneForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(id)hmf_mutableArrayForKey:(id)arg1 ;
-(id)hmf_mutableDictionaryForKey:(id)arg1 ;
-(id)setForKey:(id)arg1 ;
-(id)errorFromDataForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)hmf_unarchivedObjectForKey:(id)arg1 ofClasses:(id)arg2 ;
-(id)hmf_dateForKey:(id)arg1 ;
-(id)hmf_stringForKey:(id)arg1 ;
-(id)hmf_dataForKey:(id)arg1 ;
-(id)uuidFromStringForKey:(id)arg1 ;
-(id)hmf_numberForKey:(id)arg1 ;
-(BOOL)hmf_boolForKey:(id)arg1 isPresent:(BOOL*)arg2 ;
-(BOOL)hmf_boolForKey:(id)arg1 ;
-(id)hmf_UUIDForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)hmf_arrayForKey:(id)arg1 ;
-(id)timeZoneForKey:(id)arg1 ;
-(id)hmf_errorForKey:(id)arg1 ;
-(id)dateComponentsFromDataForKey:(id)arg1 ;
-(id)hmf_mutableSetForKey:(id)arg1 ;
-(id)hmf_URLForKey:(id)arg1 ;
-(id)secureDescriptionWithBlacklistKeys:(id)arg1 ;
-(id)hmf_setForKey:(id)arg1 ;
-(id)hmf_base64EncodedDataForKey:(id)arg1 ;
-(id)secureDescriptionWithIndent:(id)arg1 newLine:(BOOL)arg2 blacklistedKeys:(id)arg3 ;
-(id)hmf_calendarForKey:(id)arg1 ;
-(id)hmf_nullForKey:(id)arg1 ;
-(id)hmf_valueForKey:(id)arg1 ;
-(id)mutableDictionaryForKey:(id)arg1 ;
-(id)mutableArrayForKey:(id)arg1 ;
-(id)base64EncodedDataForKey:(id)arg1 ;
-(id)timeZoneFromDataForKey:(id)arg1 ;
-(id)calendarForKey:(id)arg1 ;
-(id)calendarFromDataForKey:(id)arg1 ;
-(id)nsValueForKey:(id)arg1 ;
-(id)objectForCaseInsensitiveKey:(id)arg1 ;
-(id)na_flatMap:(/*^block*/id)arg1 ;
-(id)na_map:(/*^block*/id)arg1 ;
-(BOOL)na_any:(/*^block*/id)arg1 ;
-(void)na_each:(/*^block*/id)arg1 ;
-(id)na_reduceWithInitialValue:(id)arg1 reducer:(/*^block*/id)arg2 ;
-(id)na_dictionaryByMappingValues:(/*^block*/id)arg1 ;
-(id)na_filter:(/*^block*/id)arg1 ;
-(id)na_firstKeyPassingTest:(/*^block*/id)arg1 ;
-(BOOL)na_allSatisfy:(/*^block*/id)arg1 ;
-(BOOL)hasCaseIgnoringKey:(id)arg1 ;
-(id)hk_sortedKeys;
-(id)hk_allValuesBySortedKeys;
-(id)hk_filterKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_copyWithoutPrivateMetadataKeysShouldDerivePublicKeys:(BOOL)arg1 ;
-(BOOL)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 applicationSDKVersion:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)_hk_validateMetadataBaseValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_hk_validateMetadataYukonValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)_hk_validateMetadataAzulValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)hk_copyWithoutPrivateMetadataKeys;
-(id)hk_copySanitizedForPublicClient;
-(id)hk_map:(/*^block*/id)arg1 ;
-(BOOL)_hk_validateMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 forKey:(id)arg3 applicationSDKVersion:(unsigned)arg4 error:(id*)arg5 ;
-(BOOL)_hk_validateBaseMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id*)arg4 ;
-(BOOL)_hk_validateYukonMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id*)arg4 ;
-(BOOL)hk_validateMetadataKeysAndValuesForWorkoutEvent:(id)arg1 applicationSDKVersion:(unsigned)arg2 error:(id*)arg3 ;
-(id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(id)hk_filter:(/*^block*/id)arg1 ;
-(BOOL)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(BOOL)arg1 applicationSDKVersion:(unsigned)arg2 error:(id*)arg3 ;
-(id)hk_filteredDictionaryForKeys:(id)arg1 ;
-(SCNVector3)SCNVector3Value;
-(SCNVector4)SCNVector4Value;
-(unsigned long long)SCN_safeHash;
-(SCNMatrix4)SCNMatrix4Value;
-(id)SCNMutableDeepCopy;
-(id)CalMutableRecursiveCopy;
-(id)mutableCopyWithElementsCopy;
-(BOOL)CalHasKeyIn:(id)arg1 ;
-(id)filteredDictionaryPassingTest:(/*^block*/id)arg1 ;
-(id)CalDictionaryWithEmptyObjectsRemoved;
-(id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
-(id)_web_messageText;
-(int)_web_messageType;
-(int)_web_messageLineNumber;
-(id)_web_messageSourceURL;
-(BOOL)_ui_dictionaryContainsUIStringDrawingKeys;
-(BOOL)_boolForKey:(id)arg1 ;
-(id)_IS_stringForKey:(id)arg1 ;
-(id)_IS_arrayForKey:(id)arg1 ;
-(id)_IS_dictionaryForKey:(id)arg1 ;
-(id)_IS_objectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)_IS_numberForKey:(id)arg1 ;
-(id)_webkit_objectForMIMEType:(id)arg1 ;
-(id)_webkit_stringForKey:(id)arg1 ;
-(BOOL)_webkit_boolForKey:(id)arg1 ;
-(id)_webkit_arrayForKey:(id)arg1 ;
-(id)_webkit_numberForKey:(id)arg1 ;
-(id)exMRL_dataForKey:(id)arg1 ;
-(id)exMRL_arrayForKey:(id)arg1 ;
-(id)exMRL_stringForKey:(id)arg1 ;
-(id)exMRL_numberForKey:(id)arg1 ;
-(BOOL)exMRL_boolForKey:(id)arg1 keyPresent:(BOOL*)arg2 ;
-(BOOL)exMRL_boolForKey:(id)arg1 ;
-(id)exMRL_dictionaryForKey:(id)arg1 ;
-(id)exMRL_setForKey:(id)arg1 ;
-(id)aa_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(id)invertedDictionary;
-(id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)CDVObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)CDVMergeOverrideDictionary:(id)arg1 ;
-(void)encodeKeysAndValuesWithCSCoder:(id)arg1 filterBlock:(/*^block*/id)arg2 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)pet_numForKey:(id)arg1 ;
-(id)pet_arrayForKey:(id)arg1 ;
-(id)pet_dictForKey:(id)arg1 ;
-(id)pet_strForKey:(id)arg1 ;
-(id)pet_objectForKey:(id)arg1 class:(Class)arg2 ;
-(id)_cn_map:(/*^block*/id)arg1 ;
-(id)_cn_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)_cn_each:(/*^block*/id)arg1 ;
-(id)_cn_diff:(id)arg1 ;
-(id)_cn_mapKeys:(/*^block*/id)arg1 ;
-(id)_cn_keysAndValues;
-(id)_cn_mapValues:(/*^block*/id)arg1 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(id)fp_filter:(/*^block*/id)arg1 ;
-(id)fp_removingObjectsNotKindOfClasses:(id)arg1 ;
-(id)fp_copyItemKeysUnwrappedAndKeyMap:(id)arg1 ;
-(id)fp_copyItemKeysAndValuesUnwrappedAndKeyMap:(id)arg1 ;
-(id)__swift_objectForKeyedSubscript:(id)arg1 ;
-(id)__swiftInitWithDictionary_NSDictionary:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)matchesUID:(id)arg1 ;
-(unsigned)bw_optimalMicPolarPattern;
-(BOOL)bw_containsBuiltInMicAsAnInput;
-(id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned)arg1 ;
-(id)initWithPropertyKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(id)initWithPropertyKey:(id)arg1 display:(unsigned long long)arg2 andParameter:(id)arg3 ;
-(id)initWithPropertyKey:(id)arg1 ;
-(id)initWithPropertyKey:(id)arg1 andCategory:(unsigned long long)arg2 ;
-(id)getKeyString;
-(unsigned long long)getKeyDisplayID;
-(id)getKeyDisplayIDRef;
-(unsigned long long)getKeyCategory;
-(id)getKeyCategoryRef;
-(id)getKeyPropertyParameter;
-(id)initWithPropertyKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(unsigned long long)getKeyKeyboardID;
-(id)getKeyKeyboardIDRef;
-(id)CAMLType;
-(KeyValueArray*)CA_copyRenderKeyValueArray;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)CKFirstUrlForKeys:(id)arg1 ;
-(id)CKSingleLineDescription;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_intents_indexingRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)ak_redactedCopy;
-(id)ak_mapObjects:(/*^block*/id)arg1 ;
-(id)_ak_truncatedTokensCopy;
-(id)ak_mapObjectsNullable:(/*^block*/id)arg1 ;
-(id)ak_urlQueryString;
-(id)ak_toJSONString;
-(BOOL)MR_isEqualToNowPlayingInfo:(id)arg1 ;
-(id)un_nonEmptyCopy;
-(id)un_safeCastObjectForKey:(id)arg1 class:(Class)arg2 ;
-(void)msv_enumerateKeysAndObjectsOrderedByKeyDescriptors:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)msv_enumerateKeysAndObjectsOrderedByKeySelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)msv_enumerateKeysAndObjectsOrderedByKeyComparator:(/*^block*/id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_geo_errorForKey:(id)arg1 ;
-(id)_geo_newXPCObject;
-(id)_placeOrCurrentLocation:(BOOL*)arg1 ;
-(id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5 ;
-(id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8 ;
-(id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7 ;
-(id)MCMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MCDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MCDictionaryAdditiveDeltaToCreateDictionary:(id)arg1 ;
-(BOOL)MCWriteToBinaryFile:(id)arg1 ;
-(id)MCDictionarySubtractiveDeltaToCreateDictionary:(id)arg1 ;
-(id)MCRemovedKeysFromDictionary:(id)arg1 ;
-(id)MCMutableDeepCopy;
-(id)MCDictionaryWithLeafValuesSetToValue:(id)arg1 ;
-(id)MCInsertedKeysFromDictionary:(id)arg1 withNewLeafValue:(id)arg2 ;
-(id)MCDeepCopy;
-(BOOL)MCWriteToBinaryFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)MCShortenedPlistDescription;
-(id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6 ;
-(id)if_compactMap:(/*^block*/id)arg1 ;
-(NSString *)if_JSONStringRepresentation;
-(id)if_dictionaryWithNonEmptyValues;
-(id)if_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(id)dictionaryChanging:(id)arg1 to:(id)arg2 ;
-(id)ac_mapValues:(/*^block*/id)arg1 ;
-(id)ac_mapValuesNullable:(/*^block*/id)arg1 ;
-(id)entriesToStringWithIndent:(int)arg1 debug:(BOOL)arg2 ;
-(id)encodedDataAndReturnError:(id*)arg1 ;
-(const char*)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(void)bs_each:(/*^block*/id)arg1 ;
-(id)bs_filter:(/*^block*/id)arg1 ;
-(id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(BOOL)bs_boolForKey:(id)arg1 ;
-(id)bs_safeNumberForKey:(id)arg1 ;
-(id)bs_safeStringForKey:(id)arg1 ;
-(id)bs_safeURLForKey:(id)arg1 ;
-(id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(id)bs_safeArrayForKey:(id)arg1 ;
-(id)bs_safeDictionaryForKey:(id)arg1 ;
-(id)_stringForKey:(id)arg1 ;
-(id)plistData;
-(id)__imDeepCopy;
-(BOOL)__imIsMutable;
-(id)keysOfChangedEntriesComparedTo:(id)arg1 ;
-(id)dictionaryFromChanges:(id)arg1 ;
-(id)__imDictionaryByFilteringWithBlock:(/*^block*/id)arg1 ;
-(id)_dataForKey:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_arrayForKey:(id)arg1 ;
-(unsigned short)fileHFSFlags;
-(unsigned long long)fileHFSResourceForkSize;
-(unsigned long long)ls_hashQuery;
-(BOOL)_LS_BoolForKey:(id)arg1 ;
-(id)ls_parseQueryForIdentifiers:(id)arg1 ;
-(unsigned long long)_LS_integerForKey:(id)arg1 ;
-(id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1 ;
-(id)ls_insertExtensionPointVersion:(id)arg1 ;
-(id)ax_deepMutableCopy;
-(BOOL)MI_writeToURL:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_EX_stringForKey:(id)arg1 ;
-(id)_EX_dictionaryForKey:(id)arg1 ;
-(BOOL)_EX_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)_EX_boolForKey:(id)arg1 ;
-(id)_EX_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)_EX_dictionaryByRemovingObjectForKey:(id)arg1 ;
-(id)_EX_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)dmlmr_success;
-(id)dmlmr_buildVersion;
-(id)_sa_mappedDictionaryWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)fileSize;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(id)valueForKey:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)filePosixPermissions;
-(id)fileOwnerAccountName;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)descriptionInStringsFileFormat;
-(unsigned)fileHFSTypeCode;
-(BOOL)fileIsImmutable;
-(id)_stringToWrite;
-(BOOL)fileIsAppendOnly;
-(id)fileCreationDate;
-(id)_web_numberForKey:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(unsigned)fileHFSCreatorCode;
-(id)fileOwnerAccountID;
-(id)fileType;
-(BOOL)fileExtensionHidden;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(id)fileGroupOwnerAccountID;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)fileModificationDate;
-(long long)fileSystemNumber;
-(unsigned long long)fileOwnerAccountNumber;
-(unsigned long long)fileSystemFileNumber;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)countForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(BOOL)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)allKeysForObject:(id)arg1 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)invertedDictionary;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectEnumerator;
-(id)allObjects;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isNSDictionary__;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(BOOL)isEqual:(id)arg1 ;
-(id)allKeys;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKey:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(NSString *)description;
-(id)_cfMutableCopy;
@end
