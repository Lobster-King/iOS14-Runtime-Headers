/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface WFSSHKeyEncoder : NSObject {

	NSMutableData* _data;

}

@property (nonatomic,readonly) NSMutableData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) NSData * encodedData; 
-(NSMutableData *)data;
-(NSData *)encodedData;
-(id)init;
-(void)encodeData:(id)arg1 ;
-(void)encodeString:(id)arg1 ;
-(unsigned long long)encodedLength;
-(void)encodeChar:(char)arg1 ;
-(void)encodeInteger:(unsigned)arg1 ;
-(void)encodeStringWithPreceedingLength:(id)arg1 ;
-(void)encodeDataWithPreceedingLength:(id)arg1 ;
@end
