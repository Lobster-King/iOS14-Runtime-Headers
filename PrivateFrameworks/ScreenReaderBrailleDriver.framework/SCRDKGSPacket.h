/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCRDKGSPacket : NSObject {

	unsigned char _command;
	unsigned char _subCommand;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char command;                 //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned char subCommand;              //@synthesize subCommand=_subCommand - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned char)command;
-(void)setCommand:(unsigned char)arg1 ;
-(unsigned char)subCommand;
-(void)setSubCommand:(unsigned char)arg1 ;
@end
