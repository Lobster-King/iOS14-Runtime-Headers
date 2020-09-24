/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMediaSelectionGroup.h>

@class AVAssetWriterInputGroupInternal, NSArray, AVAssetWriterInput;

@interface AVAssetWriterInputGroup : AVMediaSelectionGroup {

	AVAssetWriterInputGroupInternal* _internal;

}

@property (nonatomic,readonly) NSArray * provisionalInputs; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) AVAssetWriterInput * defaultInput; 
+(id)assetWriterInputGroupWithInputs:(id)arg1 defaultInput:(id)arg2 ;
+(id)assetWriterInputGroupWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3 ;
-(NSArray *)inputs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AVAssetWriterInput *)defaultInput;
-(NSArray *)provisionalInputs;
-(id)initWithInputs:(id)arg1 defaultInput:(id)arg2 ;
-(void)_startObservingInputPropertiesThatMayChangeValueOfOptions;
-(void)_stopObservingInputPropertiesThatMayChangeValueOfOptions;
-(id)initWithInputs:(id)arg1 provisionalInputs:(id)arg2 defaultInput:(id)arg3 ;
-(id)options;
-(void)dealloc;
-(id)init;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
