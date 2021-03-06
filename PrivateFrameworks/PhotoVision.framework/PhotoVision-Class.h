/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVVisionIntegrating, PVNotificationListener, PVPersistenceDelegate;
@class PVContext, PVVisionAnalyzer, PVFaceMerger, PVEventManager, PVClusterer, NSURL;

@interface PhotoVision : NSObject {

	id<PVVisionIntegrating> _visionIntegration;
	id<PVNotificationListener> _notificationListener;
	id<PVPersistenceDelegate> _persistenceDelegate;
	PVContext* _context;
	PVVisionAnalyzer* _analyzer;
	PVFaceMerger* _faceMerger;
	PVEventManager* _eventManager;
	PVClusterer* _clusterer;
	NSURL* _cacheDirUrl;
	unsigned _faceAlgorithmUmbrellaVersion;
	unsigned _sceneAlgorithmUmbrellaVersion;

}

@property (nonatomic,readonly) unsigned faceAlgorithmUmbrellaVersion;               //@synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion - In the implementation block
@property (nonatomic,readonly) unsigned sceneAlgorithmUmbrellaVersion;              //@synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion - In the implementation block
+(BOOL)isAppleInternal;
+(unsigned long long)defaultFaceAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
+(void)setAlgorithmRevisionForRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 algorithmCollectionType:(unsigned long long)arg3 ;
+(id)supportedSceneAlgorithmUmbrellaVersions;
+(int)_intValueForKey:(id)arg1 defaultValue:(int)arg2 ;
+(unsigned long long)faceprintAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
+(unsigned)minimumSceneAlgorithmUmbrellaVersion;
+(unsigned)maximumFaceAlgorithmUmbrellaVersion;
+(unsigned)maximumSceneAlgorithmUmbrellaVersion;
+(id)supportedFaceAlgorithmUmbrellaVersions;
+(unsigned)minimumFaceAlgorithmUmbrellaVersion;
-(id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(void)startAndSyncClusterCacheWithLibrary:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(id)context;
-(void)performFaceClusteringAndWait;
-(long long)clustererState;
-(id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)performFaceClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelFaceClustering;
-(void)performFaceClusteringIfNecessaryAndWait;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1 ;
-(unsigned long long)numberOfFacesPendingClustering;
-(id)clusteringStatus;
-(BOOL)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)clustererIsReadyToReturnSuggestions;
-(void)resetClusterer;
-(void)stop;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(BOOL)resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)buildPersonsWithCanceler:(id)arg1 keyFaceUpdateBlock:(/*^block*/id)arg2 extendTimeoutBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)cancelAllSuggestionRequests;
-(id)initWithPersistenceDelegate:(id)arg1 visionIntegration:(id)arg2 workingDirectoryURL:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned)arg4 sceneAlgorithmUmbrellaVersion:(unsigned)arg5 notificationListener:(id)arg6 ;
-(void)cancelSuggestionRequest:(id)arg1 ;
-(id)suggestionsForFaceClusterSequenceNumbers:(id)arg1 error:(id*)arg2 ;
-(id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)arg1 error:(id*)arg2 ;
@end

