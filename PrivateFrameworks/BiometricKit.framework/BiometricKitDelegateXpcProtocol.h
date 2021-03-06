/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BiometricKitDelegateXpcProtocol <NSObject>
@required
-(BOOL)isDelegate;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)homeButtonPressed:(unsigned long long)arg1;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;

@end

