/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {

	void* _priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)performWritingBlock:(/*^block*/id)arg1 ;
-(void)performReadingBlock:(/*^block*/id)arg1 ;
-(void)lock;
-(void)unlock;
-(void)dealloc;
-(BOOL)lockForReadingBeforeDate:(id)arg1 ;
-(BOOL)lockForWritingBeforeDate:(id)arg1 ;
-(void)lockForReading;
-(void)lockForWriting;
-(BOOL)tryLockForReading;
-(BOOL)tryLockForWriting;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)description;
@end

