/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface _MKJunctionElement : NSObject {

	CGPoint _leftBasePoint;
	CGPoint _rightBasePoint;
	double _angle;

}

@property (assign,nonatomic) CGPoint leftBasePoint;               //@synthesize leftBasePoint=_leftBasePoint - In the implementation block
@property (assign,nonatomic) CGPoint rightBasePoint;              //@synthesize rightBasePoint=_rightBasePoint - In the implementation block
@property (assign,nonatomic) double angle;                        //@synthesize angle=_angle - In the implementation block
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(CGPoint)leftBasePoint;
-(CGPoint)rightBasePoint;
-(CGPoint)leftEdgePointAtDistanceFromBase:(double)arg1 ;
-(void)setLeftBasePoint:(CGPoint)arg1 ;
-(CGPoint)rightEdgePointAtDistanceFromBase:(double)arg1 ;
-(void)setRightBasePoint:(CGPoint)arg1 ;
@end

