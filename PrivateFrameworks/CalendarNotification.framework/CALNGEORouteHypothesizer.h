/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNRouteHypothesizer.h>

@class EKTravelEngineHypothesis, CADRouteHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer> {

	CADRouteHypothesis* currentCADRouteHypothesis;
	GEORouteHypothesizer* _routeHypothesizer;

}

@property (nonatomic,readonly) GEORouteHypothesizer * routeHypothesizer;                  //@synthesize routeHypothesizer=_routeHypothesizer - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) EKTravelEngineHypothesis * currentHypothesis; 
@property (nonatomic,readonly) id updateHandler; 
@property (nonatomic,retain) CADRouteHypothesis * currentCADRouteHypothesis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestRefresh;
-(void)setCurrentCADRouteHypothesis:(CADRouteHypothesis *)arg1 ;
-(void)stopHypothesizing;
-(EKTravelEngineHypothesis *)currentHypothesis;
-(id)updateHandler;
-(void)startHypothesizingWithUpdateHandler:(/*^block*/id)arg1 ;
-(id)initWithRouteHypothesizer:(id)arg1 ;
-(GEORouteHypothesizer *)routeHypothesizer;
-(CADRouteHypothesis *)currentCADRouteHypothesis;
-(unsigned long long)state;
-(void)didPostUINotification:(unsigned long long)arg1 ;
@end

