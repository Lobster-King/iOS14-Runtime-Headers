/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderDataRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<NSString>* _typeIdentifier;
	RetainPtr<NSData>* _data;

}

@property (nonatomic,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)data;
-(NSData *)dataForClient;
-(void)registerItemProvider:(id)arg1 ;
-(NSString *)typeIdentifierForClient;
-(id)initWithData:(id)arg1 type:(id)arg2 ;
-(NSString *)typeIdentifier;
-(NSString *)description;
@end

