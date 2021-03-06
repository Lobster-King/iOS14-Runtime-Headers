/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class AVSynchronizedLayer, AVPlayerItem;

@interface PMAVSynchronizedView : UIView

@property (nonatomic,retain) AVSynchronizedLayer * layer; 
@property (nonatomic,retain) AVPlayerItem * playerItem; 
+(Class)layerClass;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(AVPlayerItem *)playerItem;
-(id)makeBackingLayer;
@end

