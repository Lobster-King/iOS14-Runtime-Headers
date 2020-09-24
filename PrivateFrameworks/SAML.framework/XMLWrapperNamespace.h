/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@class NSString;

@interface XMLWrapperNamespace : NSObject {

	xmlNs* _xmlNs;
	NSString* _href;
	NSString* _prefix;

}

@property (nonatomic,retain) NSString * href;                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)prefix;
-(id)initWithNsNode:(xmlNs*)arg1 error:(id*)arg2 ;
-(xmlNs*)xmlNsForNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end
