/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation {

	/*^block*/id mBookLibraryProxy;
	NSMutableArray* mBooks;
	BOOL mIncludeImages;

}
-(BOOL)isAsynchronous;
-(void)main;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 includeImages:(BOOL)arg2 ;
-(void)parseBookMetadataOperationDidFail:(id)arg1 ;
-(void)parsePDFMetadataOperationDidFail:(id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 request:(id)arg2 error:(id*)arg3 ;
@end

