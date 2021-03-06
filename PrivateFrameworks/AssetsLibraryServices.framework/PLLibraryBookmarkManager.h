/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSMutableDictionary;

@interface PLLibraryBookmarkManager : NSObject {

	NSMutableDictionary* _activeURLsByPathKey;

}
+(id)_securityScopedURLWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
+(id)resolveSecurityScopedBookmark:(id)arg1 isStale:(BOOL*)arg2 error:(id*)arg3 ;
+(id)sharedBookmarkManager;
-(void)removeInvalidSSBsExcept:(id)arg1 ;
-(void)removeSSBForLibraryURL:(id)arg1 ;
-(id)_newSandboxExtensionDataForClient:(SCD_Struct_PL11)arg1 path:(id)arg2 writable:(BOOL)arg3 ;
-(void)dealloc;
-(void)_removeSSBForPathKey:(id)arg1 ;
-(id)_activeURLForClientLibraryURL:(id)arg1 ;
-(id)init;
-(void)_storeSecurityScopedURL:(id)arg1 pathKey:(id)arg2 ;
-(id)sandboxExtensionsByPathForClient:(id)arg1 pathManager:(id)arg2 ;
-(void)_importLithiumAccessRights;
-(id)URLFromClientLibraryURL:(id)arg1 sandboxExtension:(id)arg2 error:(id*)arg3 ;
-(void)_saveToDefaults;
-(void)_loadFromDefaults;
-(void)_removeActiveURLForPathKey:(id)arg1 ;
-(id)allKnownLibraryURLs;
@end

