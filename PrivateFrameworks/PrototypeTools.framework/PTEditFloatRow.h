/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow {

	unsigned long long _precision;
	double _minValue;
	double _maxValue;

}

@property (assign,nonatomic) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
@property (assign,nonatomic) double minValue;                           //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                           //@synthesize maxValue=_maxValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(Class)tableViewCellClass;
-(unsigned long long)precision;
-(void)setMaxValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maxValue;
-(double)minValue;
-(id)init;
-(void)setMinValue:(double)arg1 ;
-(id)precision:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)between:(double)arg1 and:(double)arg2 ;
-(unsigned long long)hash;
-(id)_validatedValue:(id)arg1 ;
@end
