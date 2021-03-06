/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPSUtilities : NSObject
+(id)openURL:(id)arg1 ;
+(id)openURL:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)deviceHasHomeButton;
+(id)localizedDeviceName;
+(BOOL)isNetworkConstrained;
+(BOOL)deviceIsPad;
+(BOOL)deviceHasCapabilities:(id)arg1 ;
+(BOOL)deviceIsLocked;
+(int)_deviceClass;
+(BOOL)isBundleIdentifierBeingInstalled:(id)arg1 ;
+(id)versionIdentifierForAppWithBundleIdentifier:(id)arg1 isPlaceholder:(BOOL*)arg2 ;
+(void)uninstallAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)poweredByCaptionForAppName:(id)arg1 ;
+(void)openURL:(id)arg1 inAppWithBundleIdentifier:(id)arg2 promptForUnlock:(BOOL)arg3 originIsControlCenter:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)openURL:(id)arg1 inAppWithBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)openAppWithBundleIdentifier:(id)arg1 ;
+(id)lowercasedDeviceFamilyName;
+(id)oppositeDeviceFamilyName;
+(BOOL)shouldPlayHaptics;
@end

