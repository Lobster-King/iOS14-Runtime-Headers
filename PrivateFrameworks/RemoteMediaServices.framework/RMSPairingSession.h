/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol RMSPairingSession <NSObject>
@property (assign,nonatomic,__weak) id<RMSPairingSessionDelegate> delegate; 
@property (nonatomic,retain) NSString * passcode; 
@property (nonatomic,retain) NSString * advertisedAppName; 
@property (nonatomic,retain) NSString * advertisedDeviceName; 
@property (nonatomic,retain) NSString * advertisedDeviceModel; 
@required
-(NSString *)passcode;
-(void)setDelegate:(id)arg1;
-(void)endPairing;
-(id<RMSPairingSessionDelegate>)delegate;
-(void)setPasscode:(id)arg1;
-(void)beginPairing;
-(void)unpairService:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)advertisedAppName;
-(void)setAdvertisedAppName:(id)arg1;
-(NSString *)advertisedDeviceName;
-(void)setAdvertisedDeviceName:(id)arg1;
-(NSString *)advertisedDeviceModel;
-(void)setAdvertisedDeviceModel:(id)arg1;

@end
