/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface ENUIViewControllerFactory : NSObject {

	 inflightOnboardingStack;
	 inflightVerificationStack;

}

@property (assign,__weak,nonatomic) UIViewController * inflightOnboardingStack; 
@property (assign,__weak,nonatomic) UIViewController * inflightVerificationStack; 
+(id)sharedInstance;
-(id)init;
-(UIViewController *)inflightOnboardingStack;
-(void)setInflightOnboardingStack:(UIViewController *)arg1 ;
-(UIViewController *)inflightVerificationStack;
-(void)setInflightVerificationStack:(UIViewController *)arg1 ;
-(id)createOnboardingStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 fromAvailabilityAlert:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)createVerificationStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 sessionIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)createKeyReleaseDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createPreApprovalDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

