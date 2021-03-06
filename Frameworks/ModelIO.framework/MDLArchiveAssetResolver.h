/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLAssetResolver.h>

@class NSURL, NSMutableDictionary, NSString, NSData;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver> {

	NSURL* _archiveURL;
	NSMutableDictionary* _archiveDictionary;
	NSString* _rootUSDPath;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)resolveAssetNamed:(id)arg1 ;
-(BOOL)canResolveAssetNamed:(id)arg1 ;
-(void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3 ;
-(id)resolveInsideArchiveWithAssetNamed:(id)arg1 ;
-(id)assetNamesInArchive;
-(void)removeAssetNamed:(id)arg1 ;
@end

