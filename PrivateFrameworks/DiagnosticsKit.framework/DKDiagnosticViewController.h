/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>
#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/DKDiagnostic.h>

@class DKMutableDiagnosticResult, CXCallObserver, DKDiagnosticContext, NSLock, _UILegibilityLabel, CAGradientLayer, NSString;

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic_Internal, CAAnimationDelegate, NSExtensionRequestHandling, DKDiagnostic> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	BOOL _shouldShowPressHomeLabel;
	DKMutableDiagnosticResult* _result;
	CXCallObserver* _callObserver;
	DKDiagnosticContext* _context;
	NSLock* _finishedLock;
	_UILegibilityLabel* _pressHomeLabel;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) CXCallObserver * callObserver;                    //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,retain) DKDiagnosticContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * pressHomeLabel;              //@synthesize pressHomeLabel=_pressHomeLabel - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                  //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPressHomeLabel;                    //@synthesize shouldShowPressHomeLabel=_shouldShowPressHomeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isSetup,nonatomic) BOOL setup;                        //@synthesize setup=_setup - In the implementation block
@property (nonatomic,retain) DKMutableDiagnosticResult * result;               //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
-(void)cancel;
-(BOOL)isSetup;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(CAGradientLayer *)gradientLayer;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(DKMutableDiagnosticResult *)result;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)setContext:(DKDiagnosticContext *)arg1 ;
-(void)start;
-(void)setSetup:(BOOL)arg1 ;
-(id)init;
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(BOOL)isCancelled;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(DKDiagnosticContext *)context;
-(CXCallObserver *)callObserver;
-(NSLock *)finishedLock;
-(BOOL)shouldShowPressHomeLabel;
-(void)setShouldShowPressHomeLabel:(BOOL)arg1 ;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(void)displayPressHomeLabel;
-(void)monitorIncomingCall;
-(void)setPressHomeLabel:(_UILegibilityLabel *)arg1 ;
-(_UILegibilityLabel *)pressHomeLabel;
-(void)createGradientLayer;
-(void)resetGradientAndLabelBefore:(BOOL)arg1 ;
@end

