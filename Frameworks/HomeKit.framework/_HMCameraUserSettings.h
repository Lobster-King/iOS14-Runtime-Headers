/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMCameraUserNotificationSettings, NSSet, NSString, NSArray;

@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _snapshotsAllowed;
	BOOL _periodicSnapshotsAllowed;
	BOOL _accessModeIndicatorEnabled;
	BOOL _nightVisionModeEnabled;
	BOOL _recordingAudioEnabled;
	BOOL _cameraManuallyDisabled;
	BOOL _activityZonesIncludedForSignificantEventDetection;
	NSUUID* _UUID;
	unsigned long long _supportedFeatures;
	unsigned long long _accessModeAtHome;
	unsigned long long _accessModeNotAtHome;
	unsigned long long _currentAccessMode;
	unsigned long long _recordingEventTriggers;
	HMCameraUserNotificationSettings* _notificationSettings;
	NSSet* _activityZones;

}

@property (copy) NSUUID * UUID;                                                                                                              //@synthesize UUID=_UUID - In the implementation block
@property (assign) unsigned long long supportedFeatures;                                                                                     //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (assign) unsigned long long accessModeAtHome;                                                                                      //@synthesize accessModeAtHome=_accessModeAtHome - In the implementation block
@property (assign) unsigned long long accessModeNotAtHome;                                                                                   //@synthesize accessModeNotAtHome=_accessModeNotAtHome - In the implementation block
@property (assign) unsigned long long currentAccessMode;                                                                                     //@synthesize currentAccessMode=_currentAccessMode - In the implementation block
@property (assign) unsigned long long recordingEventTriggers;                                                                                //@synthesize recordingEventTriggers=_recordingEventTriggers - In the implementation block
@property (getter=areSnapshotsAllowed) BOOL snapshotsAllowed;                                                                                //@synthesize snapshotsAllowed=_snapshotsAllowed - In the implementation block
@property (getter=arePeriodicSnapshotsAllowed) BOOL periodicSnapshotsAllowed;                                                                //@synthesize periodicSnapshotsAllowed=_periodicSnapshotsAllowed - In the implementation block
@property (getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;                                                             //@synthesize accessModeIndicatorEnabled=_accessModeIndicatorEnabled - In the implementation block
@property (getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;                                                                     //@synthesize nightVisionModeEnabled=_nightVisionModeEnabled - In the implementation block
@property (getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;                                                                       //@synthesize recordingAudioEnabled=_recordingAudioEnabled - In the implementation block
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;                                                                     //@synthesize cameraManuallyDisabled=_cameraManuallyDisabled - In the implementation block
@property (copy) HMCameraUserNotificationSettings * notificationSettings;                                                                    //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (copy) NSSet * activityZones;                                                                                                      //@synthesize activityZones=_activityZones - In the implementation block
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;              //@synthesize activityZonesIncludedForSignificantEventDetection=_activityZonesIncludedForSignificantEventDetection - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)initWithUUID:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(NSUUID *)UUID;
-(void)setNotificationSettings:(HMCameraUserNotificationSettings *)arg1 ;
-(NSString *)shortDescription;
-(void)setSupportedFeatures:(unsigned long long)arg1 ;
-(unsigned long long)supportedFeatures;
-(HMCameraUserNotificationSettings *)notificationSettings;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(unsigned long long)accessModeAtHome;
-(unsigned long long)accessModeNotAtHome;
-(unsigned long long)currentAccessMode;
-(unsigned long long)recordingEventTriggers;
-(BOOL)isAccessModeIndicatorEnabled;
-(NSSet *)activityZones;
-(BOOL)areSnapshotsAllowed;
-(BOOL)isNightVisionModeEnabled;
-(BOOL)isRecordingAudioEnabled;
-(BOOL)isCameraManuallyDisabled;
-(BOOL)areActivityZonesIncludedForSignificantEventDetection;
-(unsigned long long)hash;
-(BOOL)arePeriodicSnapshotsAllowed;
-(void)setAccessModeAtHome:(unsigned long long)arg1 ;
-(void)setAccessModeNotAtHome:(unsigned long long)arg1 ;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setRecordingEventTriggers:(unsigned long long)arg1 ;
-(void)setSnapshotsAllowed:(BOOL)arg1 ;
-(void)setPeriodicSnapshotsAllowed:(BOOL)arg1 ;
-(void)setAccessModeIndicatorEnabled:(BOOL)arg1 ;
-(NSString *)description;
-(void)setNightVisionModeEnabled:(BOOL)arg1 ;
-(void)setRecordingAudioEnabled:(BOOL)arg1 ;
-(void)setCameraManuallyDisabled:(BOOL)arg1 ;
-(void)setActivityZones:(NSSet *)arg1 ;
-(void)setActivityZonesIncludedForSignificantEventDetection:(BOOL)arg1 ;
@end
