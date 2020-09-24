/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSNumber, NSArray, NSDictionary, NSString;

@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding> {

	NSNumber* _processId;
	NSArray* _contextIds;
	NSDictionary* _layerNamesByContext;

}

@property (nonatomic,retain) NSNumber * processId;                          //@synthesize processId=_processId - In the implementation block
@property (nonatomic,copy) NSArray * contextIds;                            //@synthesize contextIds=_contextIds - In the implementation block
@property (nonatomic,copy) NSDictionary * layerNamesByContext;              //@synthesize layerNamesByContext=_layerNamesByContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)processId;
-(void)setProcessId:(NSNumber *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSArray *)contextIds;
-(void)setContextIds:(NSArray *)arg1 ;
-(NSDictionary *)layerNamesByContext;
-(id)initWithProcessId:(id)arg1 contextIds:(id)arg2 ;
-(void)setLayerNamesByContext:(NSDictionary *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end
