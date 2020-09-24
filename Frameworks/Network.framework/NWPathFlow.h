/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path_flow;
@class NSObject, NWInterface, NWEndpoint, NSUUID;

@interface NWPathFlow : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path_flow> _internalPathFlow;

}

@property (readonly) NSObject*<OS_nw_path_flow> internalPathFlow;              //@synthesize internalPathFlow=_internalPathFlow - In the implementation block
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWEndpoint * localEndpoint; 
@property (nonatomic,readonly) NWEndpoint * remoteEndpoint; 
@property (nonatomic,readonly) NSUUID * flowID; 
@property (nonatomic,readonly) NSUUID * nexusAgent; 
@property (nonatomic,readonly) NSUUID * nexusInstance; 
@property (nonatomic,readonly) unsigned nexusPort; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (getter=isAssigned,nonatomic,readonly) BOOL assigned; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (getter=isDefunct,nonatomic,readonly) BOOL defunct; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
-(BOOL)isLocal;
-(unsigned)nexusPort;
-(BOOL)isViable;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)privateDescription;
-(NWEndpoint *)remoteEndpoint;
-(NSUUID *)flowID;
-(NWInterface *)interface;
-(NWEndpoint *)localEndpoint;
-(BOOL)isDirect;
-(BOOL)supportsIPv4;
-(BOOL)isDefunct;
-(id)initWithPathFlow:(id)arg1 ;
-(NSUUID *)nexusAgent;
-(BOOL)supportsIPv6;
-(BOOL)isAssigned;
-(NSObject*<OS_nw_path_flow>)internalPathFlow;
-(id)description;
-(NSUUID *)nexusInstance;
@end
