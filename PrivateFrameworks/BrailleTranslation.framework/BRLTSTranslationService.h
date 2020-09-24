/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRLTTranslationServiceInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, BRLTSTranslator;

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	BRLTSTranslator* _queueTranslator;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BRLTSTranslator * queueTranslator;               //@synthesize queueTranslator=_queueTranslator - In the implementation block
+(id)exportedInterface;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadBrailleBundleForIdentifier:(id)arg1 ;
-(void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(BRLTSTranslator *)queueTranslator;
-(void)setQueueTranslator:(BRLTSTranslator *)arg1 ;
@end
