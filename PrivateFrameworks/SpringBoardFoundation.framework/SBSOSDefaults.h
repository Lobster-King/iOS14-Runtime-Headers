/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL disablesForAccessibility; 
@property (assign,nonatomic) BOOL performedCheckForTripleClickSOSMigrationAlert; 
-(void)setPerformedCheckForTripleClickSOSMigrationAlert:(BOOL)arg1 ;
-(BOOL)performedCheckForTripleClickSOSMigrationAlert;
-(void)setDisablesForAccessibility:(BOOL)arg1 ;
-(BOOL)disablesForAccessibility;
-(BOOL)clawCanTriggerSOS;
-(long long)lockButtonSOSTriggerCount;
-(void)_bindAndRegisterDefaults;
-(BOOL)isAutomaticCallCountdownEnabled;
@end
