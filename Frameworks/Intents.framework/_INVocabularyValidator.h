/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _INVocabularyValidator : NSObject
+(void)initialize;
-(void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)validatedItemsFromVocabularySpeakables:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
-(unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1 ;
-(id)_intentsUsingVocabularyType:(long long)arg1 ;
-(BOOL)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2 ;
-(id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
-(id)_validatedItemsFromVocabularyObject:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 withItemFactory:(/*^block*/id)arg4 ;
-(void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
