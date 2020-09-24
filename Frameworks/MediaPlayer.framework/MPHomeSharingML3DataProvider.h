/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaLibraryDataProviderML3.h>

@protocol OS_dispatch_queue, MPArtworkDataSource;
@class HSHomeSharingLibrary, NSMutableDictionary, NSMutableSet, NSObject;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3 {

	HSHomeSharingLibrary* _homeSharingLibrary;
	NSMutableDictionary* _tokenDataForDSIDs;
	NSMutableSet* _loadedContainerPIDs;
	NSMutableDictionary* _blocksForLoadingContainerPIDs;
	NSObject*<OS_dispatch_queue> _containerFillQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _databaseID;
	id<MPArtworkDataSource> _artworkDataSource;

}

@property (nonatomic,readonly) HSHomeSharingLibrary * homeSharingLibrary;              //@synthesize homeSharingLibrary=_homeSharingLibrary - In the implementation block
@property (nonatomic,readonly) BOOL isSupportedSharingVersion; 
@property (assign,nonatomic) unsigned databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
+(void)_determineHomeSharingGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)endScanningForLibraries;
+(void)beginScanningForLibraries;
+(id)homeSharingGroupID;
+(BOOL)isScanningForLibraries;
-(void)disconnect;
-(void)setDatabaseID:(unsigned)arg1 ;
-(id)artworkDataSource;
-(unsigned)databaseID;
-(BOOL)writable;
-(id)errorResolverForItem:(id)arg1 ;
-(void)dealloc;
-(BOOL)requiresAuthentication;
-(id)uniqueIdentifier;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/id)arg2 progressHandler:(/*^block*/id)arg3 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/id)arg2 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(id)URLForItemDataRequest:(id)arg1 ;
-(id)initWithHomeSharingLibrary:(id)arg1 ;
-(void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1 ;
-(BOOL)isSupportedSharingVersion;
-(void)_homeSharingGroupIDDidChangeNotification:(id)arg1 ;
-(void)_homeSharingLibraryDidUpdateRevisionNumber:(id)arg1 ;
-(void)_homeSharingLibraryDidBecomeUnavailable:(id)arg1 ;
-(void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2 ;
-(id)_tokenDataForAccountID:(unsigned long long)arg1 ;
-(void)_fetchTokensForAuthorizedDSIDs;
-(void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(HSHomeSharingLibrary *)homeSharingLibrary;
-(id)protectedContentSupportStorageURL;
-(id)name;
-(BOOL)hasGeniusMixes;
@end
