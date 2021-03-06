/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject {

	NSMutableDictionary* _keyToTTSEngineMap;

}

@property (nonatomic,retain) NSMutableDictionary * keyToTTSEngineMap;              //@synthesize keyToTTSEngineMap=_keyToTTSEngineMap - In the implementation block
+(id)sharedInstance;
+(id)getKeyByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(id)init;
-(id)getEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(NSMutableDictionary *)keyToTTSEngineMap;
-(void)removeEngineByVoiceAsset:(id)arg1 resourceAsset:(id)arg2 ;
-(void)removeAllEngines;
-(void)setKeyToTTSEngineMap:(NSMutableDictionary *)arg1 ;
@end

