/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFImage.h>

@protocol OS_dispatch_group;
@class NSObject, NSURL, GEOStyleAttribute;

@interface MKSearchFoundationImage : SFImage {

	NSObject*<OS_dispatch_group> _group;
	NSURL* _url;
	GEOStyleAttribute* _styleAttribute;

}
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(id)initIconWithSize:(unsigned long long)arg1 mapItem:(id)arg2 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
