/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface CACLanguageAssetManager : NSObject {

	BOOL _isRegisteredForCallback;
	BOOL _isInstallationStatusStale;
	NSMutableDictionary* _downloadProgressDictionary;
	NSMutableDictionary* _lastReportedProgressDictionary;
	NSMutableDictionary* _downloadErrorDictionary;
	NSDictionary* _cachedInstallationStatus;

}

@property (assign,nonatomic) BOOL isRegisteredForCallback;                                      //@synthesize isRegisteredForCallback=_isRegisteredForCallback - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadProgressDictionary;                  //@synthesize downloadProgressDictionary=_downloadProgressDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastReportedProgressDictionary;              //@synthesize lastReportedProgressDictionary=_lastReportedProgressDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadErrorDictionary;                     //@synthesize downloadErrorDictionary=_downloadErrorDictionary - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedInstallationStatus;                           //@synthesize cachedInstallationStatus=_cachedInstallationStatus - In the implementation block
@property (assign,nonatomic) BOOL isInstallationStatusStale;                                    //@synthesize isInstallationStatusStale=_isInstallationStatusStale - In the implementation block
+(void)initialize;
+(id)sharedManager;
+(id)downloadedLocaleIdentifiers;
+(id)downloadingLocaleIdentifiers;
-(id)init;
-(BOOL)isInstallationStatusStale;
-(void)setCachedInstallationStatus:(NSDictionary *)arg1 ;
-(void)setIsInstallationStatusStale:(BOOL)arg1 ;
-(void)markInstallationStatusStale;
-(NSDictionary *)cachedInstallationStatus;
-(id)installationStatus;
-(void)registerForCallback;
-(NSMutableDictionary *)downloadProgressDictionary;
-(NSMutableDictionary *)downloadErrorDictionary;
-(void)_downloadProgressCallback:(CFDictionaryRef)arg1 ;
-(id)supportedLocaleIdentifiers;
-(id)downloadProgressForLanguage:(id)arg1 ;
-(void)_handleErrorInDownloadForLanguage:(id)arg1 ;
-(void)_sendProgressNotificationIfNeededForLanguage:(id)arg1 ;
-(NSMutableDictionary *)lastReportedProgressDictionary;
-(void)startDownloadOfLanguage:(id)arg1 ;
-(void)cancelDownloadOfLanguage:(id)arg1 ;
-(id)purgeInstalledAsset;
-(unsigned long long)errorStatusForLanguage:(id)arg1 ;
-(BOOL)isRegisteredForCallback;
-(void)setIsRegisteredForCallback:(BOOL)arg1 ;
-(void)setDownloadProgressDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLastReportedProgressDictionary:(NSMutableDictionary *)arg1 ;
-(void)setDownloadErrorDictionary:(NSMutableDictionary *)arg1 ;
@end
