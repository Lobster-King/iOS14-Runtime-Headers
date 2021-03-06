/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSUUID, NSString, NSNumber, NSDate, NSData;

@interface NBBackup : NSObject <NSSecureCoding> {

	BOOL _locationOptInEnabled;
	BOOL _diagnosticsOptInEnabled;
	BOOL _hasResolvedActiveWatchFaceFilePath;
	NSURL* _activeWatchFaceFileURL;
	NSUUID* _uuid;
	unsigned long long _backupType;
	NSString* _name;
	NSString* _productType;
	NSString* _productName;
	NSString* _systemVersion;
	NSString* _systemBuildVersion;
	NSString* _marketingVersion;
	NSString* _deviceColor;
	NSString* _deviceEnclosureColor;
	NSNumber* _bottomEnclosureMaterial;
	NSNumber* _topEnclosureMaterial;
	NSNumber* _fcmMaterial;
	NSNumber* _bcmWindowMaterial;
	NSNumber* _coverGlassColor;
	NSNumber* _housingColor;
	NSNumber* _backingColor;
	NSString* _watchFace;
	NSString* _watchFaceColor;
	NSDate* _lastModificationDate;
	NSNumber* _sizeInBytes;
	NSString* _deviceCSN;
	NSData* _watchFaceData;

}

@property (assign,nonatomic) BOOL hasResolvedActiveWatchFaceFilePath;                                    //@synthesize hasResolvedActiveWatchFaceFilePath=_hasResolvedActiveWatchFaceFilePath - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                              //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long backupType;                                              //@synthesize backupType=_backupType - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * productType;                                                     //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * productName;                                                     //@synthesize productName=_productName - In the implementation block
@property (nonatomic,retain) NSString * systemVersion;                                                   //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,retain) NSString * systemBuildVersion;                                              //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * marketingVersion;                                                //@synthesize marketingVersion=_marketingVersion - In the implementation block
@property (nonatomic,retain) NSString * deviceColor;                                                     //@synthesize deviceColor=_deviceColor - In the implementation block
@property (nonatomic,retain) NSString * deviceEnclosureColor;                                            //@synthesize deviceEnclosureColor=_deviceEnclosureColor - In the implementation block
@property (nonatomic,retain) NSNumber * bottomEnclosureMaterial;                                         //@synthesize bottomEnclosureMaterial=_bottomEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * topEnclosureMaterial;                                            //@synthesize topEnclosureMaterial=_topEnclosureMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * fcmMaterial;                                                     //@synthesize fcmMaterial=_fcmMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * bcmWindowMaterial;                                               //@synthesize bcmWindowMaterial=_bcmWindowMaterial - In the implementation block
@property (nonatomic,retain) NSNumber * coverGlassColor;                                                 //@synthesize coverGlassColor=_coverGlassColor - In the implementation block
@property (nonatomic,retain) NSNumber * housingColor;                                                    //@synthesize housingColor=_housingColor - In the implementation block
@property (nonatomic,retain) NSNumber * backingColor;                                                    //@synthesize backingColor=_backingColor - In the implementation block
@property (nonatomic,retain) NSString * watchFace;                                                       //@synthesize watchFace=_watchFace - In the implementation block
@property (nonatomic,retain) NSString * watchFaceColor;                                                  //@synthesize watchFaceColor=_watchFaceColor - In the implementation block
@property (assign,getter=isLocationOptInEnabled,nonatomic) BOOL locationOptInEnabled;                    //@synthesize locationOptInEnabled=_locationOptInEnabled - In the implementation block
@property (assign,getter=isDiagnosticsOptInEnabled,nonatomic) BOOL diagnosticsOptInEnabled;              //@synthesize diagnosticsOptInEnabled=_diagnosticsOptInEnabled - In the implementation block
@property (nonatomic,retain) NSDate * lastModificationDate;                                              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
@property (nonatomic,retain) NSNumber * sizeInBytes;                                                     //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,retain) NSURL * activeWatchFaceFileURL;                                             //@synthesize activeWatchFaceFileURL=_activeWatchFaceFileURL - In the implementation block
@property (nonatomic,retain) NSString * deviceCSN;                                                       //@synthesize deviceCSN=_deviceCSN - In the implementation block
@property (nonatomic,retain) NSData * watchFaceData;                                                     //@synthesize watchFaceData=_watchFaceData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)systemVersion;
-(NSString *)deviceEnclosureColor;
-(NSString *)systemBuildVersion;
-(void)setDeviceEnclosureColor:(NSString *)arg1 ;
-(void)setProductName:(NSString *)arg1 ;
-(NSNumber *)housingColor;
-(void)setHousingColor:(NSNumber *)arg1 ;
-(NSString *)productType;
-(NSString *)productName;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSNumber *)sizeInBytes;
-(void)setBackingColor:(NSNumber *)arg1 ;
-(NSString *)deviceColor;
-(NSString *)marketingVersion;
-(void)setProductType:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setMarketingVersion:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(NSDate *)lastModificationDate;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)backingColor;
-(void)setCoverGlassColor:(NSNumber *)arg1 ;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setSizeInBytes:(NSNumber *)arg1 ;
-(NSString *)name;
-(unsigned long long)backupType;
-(id)description;
-(void)setBackupType:(unsigned long long)arg1 ;
-(NSNumber *)coverGlassColor;
-(void)setLastModificationDate:(NSDate *)arg1 ;
-(NSString *)watchFace;
-(void)setWatchFace:(NSString *)arg1 ;
-(NSString *)deviceCSN;
-(NSURL *)activeWatchFaceFileURL;
-(void)setActiveWatchFaceFileURL:(NSURL *)arg1 ;
-(NSNumber *)bottomEnclosureMaterial;
-(void)setBottomEnclosureMaterial:(NSNumber *)arg1 ;
-(NSNumber *)topEnclosureMaterial;
-(void)setTopEnclosureMaterial:(NSNumber *)arg1 ;
-(NSNumber *)fcmMaterial;
-(void)setFcmMaterial:(NSNumber *)arg1 ;
-(NSNumber *)bcmWindowMaterial;
-(void)setBcmWindowMaterial:(NSNumber *)arg1 ;
-(NSString *)watchFaceColor;
-(void)setWatchFaceColor:(NSString *)arg1 ;
-(BOOL)isLocationOptInEnabled;
-(void)setLocationOptInEnabled:(BOOL)arg1 ;
-(BOOL)isDiagnosticsOptInEnabled;
-(void)setDiagnosticsOptInEnabled:(BOOL)arg1 ;
-(void)setDeviceCSN:(NSString *)arg1 ;
-(NSData *)watchFaceData;
-(void)setWatchFaceData:(NSData *)arg1 ;
-(BOOL)hasResolvedActiveWatchFaceFilePath;
-(void)setHasResolvedActiveWatchFaceFilePath:(BOOL)arg1 ;
@end

