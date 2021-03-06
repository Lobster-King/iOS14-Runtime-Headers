/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding> {

	LSBundleRecord* _realRecord;

}

@property (nonatomic,readonly) LSBundleRecord * _realRecord;              //@synthesize realRecord=_realRecord - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classFallbacksForKeyedArchiver;
+(Class)classForKeyedUnarchiver;
+(id)description;
-(void)detach;
-(id)entitlements;
-(id)SDKVersion;
-(id)machOUUIDs;
-(LSBundleRecord *)_realRecord;
-(id)managedPersonas;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2 ;
-(BOOL)isUPPValidated;
-(char)developerType;
-(id)accentColorName;
-(id)_loadRealRecord;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg1 ;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 ;
-(id)intentDefinitionURLs;
-(id)UIBackgroundModes;
-(id)WKBackgroundModes;
-(id)serviceRecords;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(BOOL)isProfileValidated;
-(BOOL)isFreeProfileValidated;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(id)intentsRestrictedWhileLocked;
-(BOOL)supportsNowPlaying;
-(id)signerOrganization;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)supportedIntentMediaCategories;
-(void)forwardInvocation:(id)arg1 ;
-(id)localizedShortName;
-(id)dataContainerURL;
-(id)bundleIdentifier;
-(id)supportedIntents;
-(id)applicationIdentifier;
-(Class)classForCoder;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)debugDescription;
-(id)localizedName;
-(id)URL;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)executableURL;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(void)encodeWithCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)platform;
-(id)description;
@end

