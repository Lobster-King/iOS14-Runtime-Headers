/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPoint : NSObject <NSCopying, NSSecureCoding> {

	double _x;
	double _y;

}

@property (readonly) CGPoint location; 
@property (x,readonly) double x;                    //@synthesize x=_x - In the implementation block
@property (y,readonly) double y;                    //@synthesize y=_y - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pointByApplyingVector:(id)arg1 toPoint:(id)arg2 ;
+(double)distanceBetweenPoint:(id)arg1 point:(id)arg2 ;
+(id)zeroPoint;
-(double)y;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)location;
-(id)init;
-(double)x;
-(id)initWithLocation:(CGPoint)arg1 ;
-(double)distanceToPoint:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithX:(double)arg1 y:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

