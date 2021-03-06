/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest, WKWebView, NSArray, NSData, WKFrameInfo, NSString;

@interface _WKDownload : NSObject <WKObject, NSCopying> {

	ObjectStorage<WebKit::DownloadProxy> _download;

}

@property (nonatomic,readonly) NSURLRequest * request; 
@property (nonatomic,__weak,readonly) WKWebView * originatingWebView; 
@property (nonatomic,copy,readonly) NSArray * redirectChain; 
@property (nonatomic,readonly) BOOL wasUserInitiated; 
@property (nonatomic,readonly) NSData * resumeData; 
@property (nonatomic,readonly) WKFrameInfo * originatingFrame; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)resumeData;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Object*)_apiObject;
-(void)dealloc;
-(void)publishProgressAtURL:(id)arg1 ;
-(WKWebView *)originatingWebView;
-(NSArray *)redirectChain;
-(BOOL)wasUserInitiated;
-(NSURLRequest *)request;
-(WKFrameInfo *)originatingFrame;
@end

