/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PLRevGeoMapItem, CNPostalAddress, NSString, PLRevGeoCompoundNameInfo;

@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding> {

	BOOL _isHome;
	PLRevGeoMapItem* _mapItem;
	CNPostalAddress* _postalAddress;
	NSString* _addressString;
	NSString* _countryCode;
	NSString* _geoServiceProvider;
	PLRevGeoCompoundNameInfo* _compoundNameInfo;
	PLRevGeoCompoundNameInfo* _compoundSecondaryNameInfo;

}

@property (nonatomic,readonly) PLRevGeoMapItem * mapItem;                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) CNPostalAddress * postalAddress;                                   //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) NSString * addressString;                                          //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                                            //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * geoServiceProvider;                                     //@synthesize geoServiceProvider=_geoServiceProvider - In the implementation block
@property (nonatomic,readonly) PLRevGeoCompoundNameInfo * compoundNameInfo;                       //@synthesize compoundNameInfo=_compoundNameInfo - In the implementation block
@property (nonatomic,readonly) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;              //@synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo - In the implementation block
@property (assign,nonatomic) BOOL isHome;                                                         //@synthesize isHome=_isHome - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_namingOrderForAssetReverseGeoDescription;
+(id)_namingOrderForAssetDetailedReverseGeoDescription;
+(BOOL)isInvalidWithCoder:(id)arg1 ;
+(id)countryCodeWithGEOMapItem:(id)arg1 ;
+(id)newDataFromRevGeoLocationInfo:(id)arg1 ;
+(id)infoFromPlistData:(id)arg1 ;
+(BOOL)isInvalidWithPlistData:(id)arg1 ;
+(id)_newRevGeoLocationInfoFromData:(id)arg1 ;
-(id)localizedDescription;
-(NSString *)addressString;
-(id)placeWithAnnotation:(id)arg1 ;
-(PLRevGeoCompoundNameInfo *)compoundNameInfo;
-(CNPostalAddress *)postalAddress;
-(id)initWithGEOMapItem:(id)arg1 ;
-(NSString *)countryCode;
-(id)plistData;
-(void)setIsHome:(BOOL)arg1 ;
-(BOOL)locationWasResolvedWithBestRevGeoProvider;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isHome;
-(id)placeNamesForLocalizedDetailedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(PLRevGeoMapItem *)mapItem;
-(BOOL)hasLocation;
-(PLRevGeoCompoundNameInfo *)compoundSecondaryNameInfo;
-(id)initWithMapItem:(id)arg1 postalAddress:(id)arg2 addressString:(id)arg3 countryCode:(id)arg4 compoundNameInfo:(id)arg5 compoundSecondaryNameInfo:(id)arg6 isHome:(BOOL)arg7 geoServiceProvider:(id)arg8 ;
-(BOOL)_isCurrentLocaleLanguageNonReverseAddress;
-(NSString *)geoServiceProvider;
-(id)description;
-(BOOL)hasMapItem;
@end
