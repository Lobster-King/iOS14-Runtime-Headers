/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMResidentDeviceDelegate;
@class HMFUnfairLock, NSUUID, HMHome, HMDevice, _HMContext, NSString, NSArray;

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSUUID* _uniqueIdentifier;
	unsigned long long _status;
	HMHome* _home;
	NSUUID* _accountIdentifier;
	unsigned long long _capabilities;
	id<HMResidentDeviceDelegate> _delegate;
	HMDevice* _device;
	_HMContext* _context;
	NSUUID* _uuid;

}

@property (nonatomic,retain) _HMContext * context;                                //@synthesize context=_context - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (assign) unsigned long long status;                                     //@synthesize status=_status - In the implementation block
@property (assign) unsigned long long capabilities;                               //@synthesize capabilities=_capabilities - In the implementation block
@property (__weak) HMHome * home;                                                 //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSUUID * accountIdentifier;                            //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (__weak) id<HMResidentDeviceDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) HMDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSString * name; 
@property (getter=isCurrentDevice,readonly) BOOL currentDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(HMDevice *)device;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(unsigned long long)capabilities;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(void)setStatus:(unsigned long long)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
-(NSString *)shortDescription;
-(unsigned long long)status;
-(void)setContext:(_HMContext *)arg1 ;
-(NSUUID *)accountIdentifier;
-(id)init;
-(NSUUID *)uniqueIdentifier;
-(void)setDelegate:(id<HMResidentDeviceDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(id<HMResidentDeviceDelegate>)delegate;
-(id)logIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isCurrentDevice;
-(NSString *)name;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)updatedEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(NSString *)description;
-(void)setAccountIdentifier:(NSUUID *)arg1 ;
-(HMHome *)home;
@end
