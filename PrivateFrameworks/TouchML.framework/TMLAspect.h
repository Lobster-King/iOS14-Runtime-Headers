/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface TMLAspect : NSObject {

	int _advice;
	NSObject* _target;
	NSString* _signalName;
	NSString* _registrationKey;
	/*^block*/id _block;
	/*^block*/id _unregisterBlock;

}

@property (assign,nonatomic,__weak) NSObject * target;                  //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) int advice;                                //@synthesize advice=_advice - In the implementation block
@property (nonatomic,copy) NSString * signalName;                       //@synthesize signalName=_signalName - In the implementation block
@property (nonatomic,copy) id block;                                    //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id unregisterBlock;                          //@synthesize unregisterBlock=_unregisterBlock - In the implementation block
@property (nonatomic,readonly) NSString * registrationKey;              //@synthesize registrationKey=_registrationKey - In the implementation block
+(id)aspectForRegistrationKey:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(/*^block*/id)jsConvertedBlock:(id)arg1 ;
+(id)aspectForTarget:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(id)aspectForObjectsImplementingProtocolNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(id)aspectForObjectsWithClassNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(id)tmlAspectForObjectsImplementingProtocolNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 ;
+(id)tmlAspectForObjectsWithClassNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 ;
+(id)tmlAspectForTarget:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 ;
-(void)dealloc;
-(int)advice;
-(void)setUnregisterBlock:(id)arg1 ;
-(id)block;
-(void)setSignalName:(NSString *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)unregister;
-(id)unregisterBlock;
-(NSString *)signalName;
-(NSObject *)target;
-(void)setTarget:(NSObject *)arg1 ;
-(void)setAdvice:(int)arg1 ;
-(void)tmlDispose;
-(void)activateWithObject:(id)arg1 arguments:(id)arg2 returnValue:(id)arg3 newArguments:(id*)arg4 newReturnValue:(id*)arg5 ;
-(NSString *)registrationKey;
@end
