/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TSUTemporaryDirectoryManager : NSObject {

	NSURL* _baseDirectoryURL;

}
+(id)sharedManager;
+(id)baseDirectoryURL;
+(id)makeUniqueDirectoryWithBaseDirectory:(id)arg1 filename:(id)arg2 ;
+(Class)managedTemporaryDirectoryClass;
-(id)init;
-(id)newDirectoryWithFilename:(id)arg1 ;
-(id)_readDirectories;
-(void)_clearDirectories:(id)arg1 ;
@end
