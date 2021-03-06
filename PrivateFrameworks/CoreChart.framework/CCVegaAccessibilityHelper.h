/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreChart/CoreChart-Structs.h>
@class NSMutableArray;

@interface CCVegaAccessibilityHelper : NSObject {

	stack<CCVegaAccessibilityHelperState, std::__1::deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > >* _stateStack;
	SCD_Struct_CC17 _currentState;
	NSMutableArray* _elementCache;
	NSMutableArray* _rootAccessibilityElements;
	NSMutableArray* _children;
	NSMutableArray* _groupStack;
	id container;

}

@property (__weak) id container; 
-(void)saveState;
-(void)restoreState;
-(void)setContainer:(id)arg1 ;
-(id)container;
-(id)initWithElements:(id)arg1 ;
-(void)addElementWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(id)newAccessibilityElementWithFrame:(CGRect)arg1 ;
-(void)translateX:(double)arg1 Y:(double)arg2 ;
-(void)markAriaHidden;
-(void)enterGroupWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(void)exitGroup;
-(id)getElements;
@end

