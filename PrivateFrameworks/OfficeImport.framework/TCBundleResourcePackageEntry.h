/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OISFUZipEntry;

@interface TCBundleResourcePackageEntry : NSObject {

	OISFUZipEntry* mZipEntry;
	xmlDoc* mXmlDocument;

}
-(id)data;
-(void)dealloc;
-(xmlDoc*)xmlDocument;
-(id)initWithZipEntry:(id)arg1 ;
@end

