/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLatLng;

@interface GEOLogMsgEventPredExTrainingData : PBCodable <NSCopying> {

	PBDataReader* _reader;
	double _chanceOfPrecipitation;
	double _chanceOfRain;
	double _chanceOfSnow;
	double _dayOfWeek;
	double _durationUntilEventEnd;
	double _durationUntilEventStart;
	double _endTime;
	double _isTourist;
	double _startTime;
	double _temperature;
	double _timeOfDay;
	double _timeSinceBackgrounded;
	NSString* _userLocationGeohash4;
	GEOLatLng* _userLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _actualTransportMode;
	int _distanceFromHereToHome;
	int _distanceFromHereToOrigin;
	int _distanceFromHereToParkedCar;
	int _distanceFromHereToWork;
	int _distanceFromHere;
	int _distanceFromOriginToDestination;
	int _entryType;
	int _mapType;
	int _predictedTransportMode;
	int _preferredTransportMode;
	int _weatherType;
	BOOL _isCarplayConnected;
	BOOL _isInBasemode;
	BOOL _isTransitPossible;
	BOOL _routePlanningScreenPresented;
	struct {
		unsigned has_chanceOfPrecipitation : 1;
		unsigned has_chanceOfRain : 1;
		unsigned has_chanceOfSnow : 1;
		unsigned has_dayOfWeek : 1;
		unsigned has_durationUntilEventEnd : 1;
		unsigned has_durationUntilEventStart : 1;
		unsigned has_endTime : 1;
		unsigned has_isTourist : 1;
		unsigned has_startTime : 1;
		unsigned has_temperature : 1;
		unsigned has_timeOfDay : 1;
		unsigned has_timeSinceBackgrounded : 1;
		unsigned has_actualTransportMode : 1;
		unsigned has_distanceFromHereToHome : 1;
		unsigned has_distanceFromHereToOrigin : 1;
		unsigned has_distanceFromHereToParkedCar : 1;
		unsigned has_distanceFromHereToWork : 1;
		unsigned has_distanceFromHere : 1;
		unsigned has_distanceFromOriginToDestination : 1;
		unsigned has_entryType : 1;
		unsigned has_mapType : 1;
		unsigned has_predictedTransportMode : 1;
		unsigned has_preferredTransportMode : 1;
		unsigned has_weatherType : 1;
		unsigned has_isCarplayConnected : 1;
		unsigned has_isInBasemode : 1;
		unsigned has_isTransitPossible : 1;
		unsigned has_routePlanningScreenPresented : 1;
		unsigned read_userLocationGeohash4 : 1;
		unsigned read_userLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEntryType; 
@property (assign,nonatomic) int entryType; 
@property (assign,nonatomic) BOOL hasDurationUntilEventStart; 
@property (assign,nonatomic) double durationUntilEventStart; 
@property (assign,nonatomic) BOOL hasDurationUntilEventEnd; 
@property (assign,nonatomic) double durationUntilEventEnd; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) BOOL hasTemperature; 
@property (assign,nonatomic) double temperature; 
@property (assign,nonatomic) BOOL hasChanceOfPrecipitation; 
@property (assign,nonatomic) double chanceOfPrecipitation; 
@property (assign,nonatomic) BOOL hasChanceOfRain; 
@property (assign,nonatomic) double chanceOfRain; 
@property (assign,nonatomic) BOOL hasChanceOfSnow; 
@property (assign,nonatomic) double chanceOfSnow; 
@property (assign,nonatomic) BOOL hasTimeOfDay; 
@property (assign,nonatomic) double timeOfDay; 
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) double dayOfWeek; 
@property (assign,nonatomic) BOOL hasIsTourist; 
@property (assign,nonatomic) double isTourist; 
@property (assign,nonatomic) BOOL hasPreferredTransportMode; 
@property (assign,nonatomic) int preferredTransportMode; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) BOOL hasIsTransitPossible; 
@property (assign,nonatomic) BOOL isTransitPossible; 
@property (assign,nonatomic) BOOL hasIsInBasemode; 
@property (assign,nonatomic) BOOL isInBasemode; 
@property (assign,nonatomic) BOOL hasTimeSinceBackgrounded; 
@property (assign,nonatomic) double timeSinceBackgrounded; 
@property (assign,nonatomic) BOOL hasRoutePlanningScreenPresented; 
@property (assign,nonatomic) BOOL routePlanningScreenPresented; 
@property (assign,nonatomic) BOOL hasPredictedTransportMode; 
@property (assign,nonatomic) int predictedTransportMode; 
@property (assign,nonatomic) BOOL hasActualTransportMode; 
@property (assign,nonatomic) int actualTransportMode; 
@property (assign,nonatomic) BOOL hasDistanceFromHere; 
@property (assign,nonatomic) int distanceFromHere; 
@property (assign,nonatomic) BOOL hasDistanceFromHereToOrigin; 
@property (assign,nonatomic) int distanceFromHereToOrigin; 
@property (assign,nonatomic) BOOL hasDistanceFromOriginToDestination; 
@property (assign,nonatomic) int distanceFromOriginToDestination; 
@property (assign,nonatomic) BOOL hasDistanceFromHereToHome; 
@property (assign,nonatomic) int distanceFromHereToHome; 
@property (assign,nonatomic) BOOL hasDistanceFromHereToWork; 
@property (assign,nonatomic) int distanceFromHereToWork; 
@property (assign,nonatomic) BOOL hasDistanceFromHereToParkedCar; 
@property (assign,nonatomic) int distanceFromHereToParkedCar; 
@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEOLatLng * userLocation; 
@property (nonatomic,readonly) BOOL hasUserLocationGeohash4; 
@property (nonatomic,retain) NSString * userLocationGeohash4; 
@property (assign,nonatomic) BOOL hasIsCarplayConnected; 
@property (assign,nonatomic) BOOL isCarplayConnected; 
@property (assign,nonatomic) BOOL hasWeatherType; 
@property (assign,nonatomic) int weatherType; 
+(BOOL)isValid:(id)arg1 ;
-(double)endTime;
-(BOOL)hasStartTime;
-(int)mapType;
-(NSString *)userLocationGeohash4;
-(void)setHasEntryType:(BOOL)arg1 ;
-(BOOL)hasEntryType;
-(id)entryTypeAsString:(int)arg1 ;
-(int)StringAsEntryType:(id)arg1 ;
-(double)durationUntilEventStart;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDurationUntilEventStart:(BOOL)arg1 ;
-(BOOL)hasDurationUntilEventStart;
-(double)durationUntilEventEnd;
-(double)chanceOfRain;
-(void)setHasDurationUntilEventEnd:(BOOL)arg1 ;
-(BOOL)hasDurationUntilEventEnd;
-(double)chanceOfPrecipitation;
-(BOOL)hasChanceOfRain;
-(void)setHasChanceOfPrecipitation:(BOOL)arg1 ;
-(BOOL)hasChanceOfPrecipitation;
-(void)setHasChanceOfRain:(BOOL)arg1 ;
-(double)chanceOfSnow;
-(void)setHasChanceOfSnow:(BOOL)arg1 ;
-(BOOL)hasChanceOfSnow;
-(BOOL)isTransitPossible;
-(void)setHasIsTransitPossible:(BOOL)arg1 ;
-(BOOL)isInBasemode;
-(BOOL)hasIsTransitPossible;
-(void)setHasIsInBasemode:(BOOL)arg1 ;
-(BOOL)hasIsInBasemode;
-(double)timeSinceBackgrounded;
-(BOOL)hasWeatherType;
-(void)setHasTimeSinceBackgrounded:(BOOL)arg1 ;
-(BOOL)hasTimeSinceBackgrounded;
-(BOOL)routePlanningScreenPresented;
-(int)weatherType;
-(void)setHasRoutePlanningScreenPresented:(BOOL)arg1 ;
-(BOOL)hasRoutePlanningScreenPresented;
-(int)predictedTransportMode;
-(void)setHasPredictedTransportMode:(BOOL)arg1 ;
-(BOOL)hasPredictedTransportMode;
-(id)predictedTransportModeAsString:(int)arg1 ;
-(int)StringAsPredictedTransportMode:(id)arg1 ;
-(int)actualTransportMode;
-(void)setHasActualTransportMode:(BOOL)arg1 ;
-(BOOL)hasActualTransportMode;
-(id)actualTransportModeAsString:(int)arg1 ;
-(int)StringAsActualTransportMode:(id)arg1 ;
-(int)distanceFromHere;
-(void)setHasDistanceFromHere:(BOOL)arg1 ;
-(BOOL)hasDistanceFromHere;
-(id)distanceFromHereAsString:(int)arg1 ;
-(int)StringAsDistanceFromHere:(id)arg1 ;
-(int)distanceFromHereToOrigin;
-(void)setHasDistanceFromHereToOrigin:(BOOL)arg1 ;
-(BOOL)hasDistanceFromHereToOrigin;
-(id)distanceFromHereToOriginAsString:(int)arg1 ;
-(int)distanceFromOriginToDestination;
-(int)StringAsDistanceFromHereToOrigin:(id)arg1 ;
-(void)setHasDistanceFromOriginToDestination:(BOOL)arg1 ;
-(int)StringAsWeatherType:(id)arg1 ;
-(BOOL)hasDistanceFromOriginToDestination;
-(id)distanceFromOriginToDestinationAsString:(int)arg1 ;
-(void)setHasWeatherType:(BOOL)arg1 ;
-(int)StringAsDistanceFromOriginToDestination:(id)arg1 ;
-(int)distanceFromHereToHome;
-(void)setHasDistanceFromHereToHome:(BOOL)arg1 ;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasDistanceFromHereToHome;
-(id)distanceFromHereToHomeAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToHome:(id)arg1 ;
-(int)distanceFromHereToWork;
-(void)setHasDistanceFromHereToWork:(BOOL)arg1 ;
-(BOOL)hasDistanceFromHereToWork;
-(id)distanceFromHereToWorkAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToWork:(id)arg1 ;
-(int)distanceFromHereToParkedCar;
-(void)setHasDistanceFromHereToParkedCar:(BOOL)arg1 ;
-(BOOL)hasDistanceFromHereToParkedCar;
-(BOOL)hasUserLocationGeohash4;
-(id)distanceFromHereToParkedCarAsString:(int)arg1 ;
-(int)StringAsDistanceFromHereToParkedCar:(id)arg1 ;
-(id)weatherTypeAsString:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)dayOfWeek;
-(BOOL)readFrom:(id)arg1 ;
-(int)preferredTransportMode;
-(void)setHasIsTourist:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setPreferredTransportMode:(int)arg1 ;
-(BOOL)hasPreferredTransportMode;
-(BOOL)hasIsTourist;
-(BOOL)hasMapType;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(void)setHasPreferredTransportMode:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(id)init;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasEndTime:(BOOL)arg1 ;
-(int)entryType;
-(void)setUserLocation:(GEOLatLng *)arg1 ;
-(void)setEntryType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsCarplayConnected:(BOOL)arg1 ;
-(BOOL)isCarplayConnected;
-(void)setHasIsCarplayConnected:(BOOL)arg1 ;
-(BOOL)hasIsCarplayConnected;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTemperature;
-(void)setEndTime:(double)arg1 ;
-(void)setChanceOfPrecipitation:(double)arg1 ;
-(void)setChanceOfRain:(double)arg1 ;
-(void)setChanceOfSnow:(double)arg1 ;
-(void)setDurationUntilEventEnd:(double)arg1 ;
-(void)setDurationUntilEventStart:(double)arg1 ;
-(void)setTimeSinceBackgrounded:(double)arg1 ;
-(void)setActualTransportMode:(int)arg1 ;
-(void)setWeatherType:(int)arg1 ;
-(void)setDistanceFromHereToHome:(int)arg1 ;
-(void)setDistanceFromHereToOrigin:(int)arg1 ;
-(void)setDistanceFromHereToParkedCar:(int)arg1 ;
-(void)setDistanceFromHereToWork:(int)arg1 ;
-(void)setDistanceFromHere:(int)arg1 ;
-(void)setDistanceFromOriginToDestination:(int)arg1 ;
-(void)setPredictedTransportMode:(int)arg1 ;
-(void)setIsInBasemode:(BOOL)arg1 ;
-(void)setIsTransitPossible:(BOOL)arg1 ;
-(void)setUserLocationGeohash4:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setRoutePlanningScreenPresented:(BOOL)arg1 ;
-(void)setTemperature:(double)arg1 ;
-(double)temperature;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(double)isTourist;
-(int)StringAsMapType:(id)arg1 ;
-(GEOLatLng *)userLocation;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDayOfWeek:(double)arg1 ;
-(void)setIsTourist:(double)arg1 ;
-(void)setHasTemperature:(BOOL)arg1 ;
-(BOOL)hasUserLocation;
-(void)setHasMapType:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(void)setTimeOfDay:(double)arg1 ;
-(void)setHasTimeOfDay:(BOOL)arg1 ;
-(BOOL)hasTimeOfDay;
-(id)description;
-(double)timeOfDay;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasEndTime;
@end

