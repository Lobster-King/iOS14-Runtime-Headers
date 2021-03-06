/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKWebsiteDataSize, NSString, NSSet;

@interface WKWebsiteDataRecord : NSObject <WKObject> {

	ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;

}

@property (nonatomic,readonly) _WKWebsiteDataSize * _dataSize; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSSet * dataTypes; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)displayName;
-(Object*)_apiObject;
-(void)dealloc;
-(id)_originsStrings;
-(_WKWebsiteDataSize *)_dataSize;
-(NSSet *)dataTypes;
-(NSString *)description;
@end

