/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {

	BOOL _done;
	NSString* _string;
	unsigned long long _indexOfCurrentComposedCharacter;

}
-(id)allObjects;
-(id)nextObject;
-(id)initWithString:(id)arg1 ;
@end
