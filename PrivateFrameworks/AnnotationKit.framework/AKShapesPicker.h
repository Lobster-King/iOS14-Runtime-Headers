/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKModernToolbarPicker.h>

@class NSArray;

@interface AKShapesPicker : AKModernToolbarPicker {

	NSArray* _shapes;
	long long _style;

}

@property (nonatomic,copy) NSArray * shapes;              //@synthesize shapes=_shapes - In the implementation block
@property (assign) long long style;                       //@synthesize style=_style - In the implementation block
-(NSArray *)shapes;
-(long long)style;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setShapes:(NSArray *)arg1 ;
-(void)_shapeButtonPressed:(id)arg1 ;
-(void)_updateCurrentAppearanceIfNeeded;
-(id)initWithFrame:(CGRect)arg1 shapeTags:(id)arg2 ;
@end
