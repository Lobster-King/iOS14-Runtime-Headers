/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapItemAttribution, NSString, NSArray;

@interface _MKMapItemAttribution : NSObject {

	GEOMapItemAttribution* _geoAttribution;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) BOOL requiresAttributionInCallout; 
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) NSString * appAdamID; 
-(NSArray *)attributionApps;
-(id)providerSnippetLogoImageForScale:(double)arg1 ;
-(BOOL)shouldOpenInAppStore;
-(NSString *)appAdamID;
-(NSString *)providerName;
-(id)providerLogoImageForScale:(double)arg1 ;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(BOOL)arg3 ;
-(NSString *)providerID;
-(BOOL)requiresAttributionInCallout;
-(NSArray *)attributionURLs;
@end

