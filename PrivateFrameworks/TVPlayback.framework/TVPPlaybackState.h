/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPPlaybackState : NSObject {

	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)loading;
+(id)playing;
+(id)paused;
+(id)stopped;
+(id)scanning;
-(id)initWithName:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
@end

