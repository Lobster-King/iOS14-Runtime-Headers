/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTStartTextToSpeechStreamingRequest;

@interface FTTextToSpeechStreamingStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechStreamingStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTStartTextToSpeechStreamingRequest * contentAsFTStartTextToSpeechStreamingRequest; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechStreamingStreamingRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechStreamingStreamingRequest*)arg2 ;
-(long long)content_type;
-(FTStartTextToSpeechStreamingRequest *)contentAsFTStartTextToSpeechStreamingRequest;
@end

