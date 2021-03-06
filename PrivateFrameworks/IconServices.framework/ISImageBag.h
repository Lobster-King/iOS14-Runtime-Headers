/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class NSMutableDictionary, NSString, NSArray;

@interface ISImageBag : NSObject <ISScalableCompositorResource> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imagesByScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableDictionary * imagesByScale;              //@synthesize imagesByScale=_imagesByScale - In the implementation block
@property (assign) os_unfair_lock_s lock;                            //@synthesize lock=_lock - In the implementation block
@property (copy,readonly) NSArray * images; 
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNames:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3 ;
+(id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2 ;
-(NSArray *)images;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)lock;
-(void)setImagesByScale:(NSMutableDictionary *)arg1 ;
-(NSString *)debugDescription;
-(id)init;
-(id)initWithImages:(id)arg1 ;
-(NSMutableDictionary *)imagesByScale;
-(id)imagesForScale:(double)arg1 ;
-(void)insertImage:(id)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

