/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisibilityPropagationView.h>

@class CALayerHost;

@interface _UILayerHostView : _UIVisibilityPropagationView {

	int _pid;
	unsigned _contextID;

}

@property (assign,nonatomic) unsigned contextID; 
@property (assign,nonatomic) BOOL inheritsSecurity; 
@property (nonatomic,retain,readonly) CALayerHost * layerHost; 
+(Class)layerClass;
-(void)setInheritsSecurity:(BOOL)arg1 ;
-(BOOL)inheritsSecurity;
-(unsigned)contextID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContextID:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
-(CALayerHost *)layerHost;
-(void)setPid:(int)arg1 contextID:(unsigned)arg2 ;
@end
