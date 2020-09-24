/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImageAsset, NSString;

@interface _UIImageAssetMapEnvelope : NSObject {

	UIImageAsset* _imageAsset;
	NSString* _assetName;

}

@property (assign,nonatomic,__weak) UIImageAsset * imageAsset;              //@synthesize imageAsset=_imageAsset - In the implementation block
@property (nonatomic,copy) NSString * assetName;                            //@synthesize assetName=_assetName - In the implementation block
+(id)wrapAsset:(id)arg1 ;
-(NSString *)assetName;
-(void)setImageAsset:(UIImageAsset *)arg1 ;
-(UIImageAsset *)imageAsset;
-(id)description;
-(void)setAssetName:(NSString *)arg1 ;
@end
