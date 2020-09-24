/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, _HKMedicalIDData, SOSContactsManager, WDNotificationManager, UIViewController, UIAlertController;

@interface WDContactConsolidationController : NSObject {

	HKHealthStore* _healthStore;
	_HKMedicalIDData* _medicalIDData;
	SOSContactsManager* _sosContactsManager;
	WDNotificationManager* _notificationManager;
	UIViewController* _presentingViewController;
	UIAlertController* _consolidationAlertController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                                     //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) SOSContactsManager * sosContactsManager;                              //@synthesize sosContactsManager=_sosContactsManager - In the implementation block
@property (nonatomic,retain) WDNotificationManager * notificationManager;                          //@synthesize notificationManager=_notificationManager - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * consolidationAlertController;              //@synthesize consolidationAlertController=_consolidationAlertController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingConsolidationAlert; 
-(WDNotificationManager *)notificationManager;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setNotificationManager:(WDNotificationManager *)arg1 ;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(UIViewController *)presentingViewController;
-(_HKMedicalIDData *)medicalIDData;
-(HKHealthStore *)healthStore;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithProfile:(id)arg1 presentingViewController:(id)arg2 ;
-(void)checkAlertNecessity;
-(SOSContactsManager *)sosContactsManager;
-(void)presentContactsConsolidationAlert;
-(UIAlertController *)consolidationAlertController;
-(void)_showLearnMoreViewController;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(void)setConsolidationAlertController:(UIAlertController *)arg1 ;
-(BOOL)isPresentingConsolidationAlert;
-(void)presentContactConsolidationAlertWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSosContactsManager:(SOSContactsManager *)arg1 ;
@end
