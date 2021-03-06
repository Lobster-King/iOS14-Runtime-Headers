/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSDictionary, DEContext;

@interface DEVisualExecutor : NSObject {

	BOOL _debug;
	BOOL _test;
	BOOL _resetState;
	NSString* _templateDir;
	NSString* _visualCatId;
	NSString* _platform;
	NSDictionary* _parameters;
	NSDictionary* _globalParameters;
	DEContext* _context;

}

@property (nonatomic,retain) NSString * templateDir;                       //@synthesize templateDir=_templateDir - In the implementation block
@property (nonatomic,retain) NSString * visualCatId;                       //@synthesize visualCatId=_visualCatId - In the implementation block
@property (nonatomic,retain) NSString * platform;                          //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSDictionary * globalParameters;              //@synthesize globalParameters=_globalParameters - In the implementation block
@property (nonatomic,retain) DEContext * context;                          //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL debug;                                   //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL test;                                    //@synthesize test=_test - In the implementation block
@property (assign,nonatomic) BOOL resetState;                              //@synthesize resetState=_resetState - In the implementation block
-(BOOL)resetState;
-(BOOL)test;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)parameters;
-(BOOL)debug;
-(void)setPlatform:(NSString *)arg1 ;
-(void)setContext:(DEContext *)arg1 ;
-(id)init;
-(NSDictionary *)globalParameters;
-(void)setTemplateDir:(NSString *)arg1 ;
-(DEContext *)context;
-(void)setResetState:(BOOL)arg1 ;
-(NSString *)templateDir;
-(NSString *)visualCatId;
-(Context*)getContext;
-(id)consumeContext:(Context*)arg1 ;
-(void)setVisualCatId:(NSString *)arg1 ;
-(void)setGlobalParameters:(NSDictionary *)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(void)setTest:(BOOL)arg1 ;
-(NSString *)platform;
-(id)execute;
@end

