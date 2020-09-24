/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSDictionary;

@interface WKWallpaperBundleImporter : NSObject {

	NSObject*<OS_dispatch_queue> __bundleImportQueue;
	NSArray* __wallpaperTypesOrdering;
	NSDictionary* __wallpaperTypeToBundleCollection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _bundleImportQueue;              //@synthesize _bundleImportQueue=__bundleImportQueue - In the implementation block
@property (nonatomic,retain) NSArray * _wallpaperTypesOrdering;                            //@synthesize _wallpaperTypesOrdering=__wallpaperTypesOrdering - In the implementation block
@property (nonatomic,retain) NSDictionary * _wallpaperTypeToBundleCollection;              //@synthesize _wallpaperTypeToBundleCollection=__wallpaperTypeToBundleCollection - In the implementation block
@property (nonatomic,readonly) long long numberOfWallpaperBundleCollections; 
+(id)wallpapersConfigurationFileURL;
+(id)defaultWallpaperBundleImporter;
-(id)init;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1 ;
-(id)wallpaperBundleWithIdentifier:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)_bundleImportQueue;
-(void)_loadWallpapersFromDisk;
-(NSArray *)_wallpaperTypesOrdering;
-(NSDictionary *)_wallpaperTypeToBundleCollection;
-(long long)numberOfWallpaperBundleCollections;
-(unsigned long long)wallpaperTypeAtIndex:(long long)arg1 ;
-(id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)arg1 ;
-(void)set_bundleImportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_wallpaperTypesOrdering:(NSArray *)arg1 ;
-(void)set_wallpaperTypeToBundleCollection:(NSDictionary *)arg1 ;
@end
