/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSSet, NSString;

@interface WBSDomainWhitelistSnapshot : NSObject <WBSRemotePlistSnapshot> {

	NSSet* _whitelistedDomains;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDomains:(id)arg1 ;
-(BOOL)isDomainWhitelisted:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
@end
