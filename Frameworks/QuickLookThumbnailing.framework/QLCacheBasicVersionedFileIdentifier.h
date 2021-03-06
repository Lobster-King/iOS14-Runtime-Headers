/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheBasicFileIdentifier;

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier <NSSecureCoding>

@property (readonly) QLCacheBasicFileIdentifier * fileIdentifier; 
-(id)initWithFileIdentifier:(id)arg1 version:(id)arg2 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
@end

