/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {

	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigTrackReaderRef _trackReader;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(SCD_Struct_AV7)timeRange;
-(float)preferredVolume;
-(id)languageCode;
-(id)mediaType;
-(long long)layer;
-(id)extendedLanguageTag;
-(id)_trackReferences;
-(int)trackID;
-(CGSize)naturalSize;
-(BOOL)isPlayable;
-(long long)alternateGroupID;
-(id)asset;
-(BOOL)isSelfContained;
-(CGAffineTransform)preferredTransform;
-(BOOL)isEnabled;
-(long long)provisionalAlternateGroupID;
-(void)dealloc;
-(id)segmentForTrackTime:(SCD_Struct_AV6)arg1 ;
-(BOOL)isDecodable;
-(int)decodabilityValidationResult;
-(long long)totalSampleDataLength;
-(SCD_Struct_AV6)latentBaseDecodeTimeStampOfFirstTrackFragment;
-(float)nominalFrameRate;
-(id)formatDescriptions;
-(BOOL)requiresFrameReordering;
-(BOOL)isEqual:(id)arg1 ;
-(id)commonMetadata;
-(int)naturalTimeScale;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(OpaqueFigTrackReaderRef)_figTrackReader;
-(BOOL)hasAudioSampleDependencies;
-(unsigned long long)hash;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(float)peakDataRate;
-(SCD_Struct_AV6)minSampleDuration;
-(id)availableMetadataFormats;
-(float)estimatedDataRate;
-(id)metadataForFormat:(id)arg1 ;
-(id)mediaCharacteristics;
-(int)playabilityValidationResult;
-(CGSize)dimensions;
-(long long)defaultAlternateGroupID;
-(unsigned)_figMediaType;
-(id)segments;
-(id)loudnessInfo;
@end

