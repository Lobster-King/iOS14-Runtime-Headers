/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOMapFeatureLine : NSObject {

	GEOCoarseLocationLatLng* _coordinates;
	unsigned long long _coordinateCount;
	double _length;
	BOOL _isFlipped;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) double length; 
-(void)dealloc;
-(double)length;
-(GEOCoarseLocationLatLng*)coordinates;
-(id)init;
-(id)_containingTile;
-(SCD_Struct_GE34*)_tilePointsForSection:(unsigned long long)arg1 withCount:(out unsigned long long*)arg2 ;
-(unsigned long long)coordinateCount;
@end
