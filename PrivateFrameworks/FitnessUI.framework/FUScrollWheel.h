/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FUScrollWheelDataSource, FUScrollWheelDelegate;
@class NSMutableArray, NSMutableDictionary, UIView, UIImageView, UIFont, UIScrollView, NSString;

@interface FUScrollWheel : UIView <UIScrollViewDelegate> {

	NSMutableArray* _reusableLabelsQueue;
	NSMutableDictionary* _usedLabels;
	NSRange _previousRange;
	unsigned long long _numberOfRows;
	double _scrollWheelLabelHeight;
	UIView* _topDividerView;
	UIView* _bottomDividerView;
	UIImageView* _maskLayer;
	BOOL _shouldRegenerateOpacityMask;
	BOOL _loaded;
	id<FUScrollWheelDataSource> _dataSource;
	id<FUScrollWheelDelegate> _delegate;
	long long _itemTitleAligmnent;
	unsigned long long _currentIndex;
	UIFont* _font;
	UIScrollView* _scrollView;
	double _scrollWheelLabelPageSize;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double scrollWheelLabelPageSize;                            //@synthesize scrollWheelLabelPageSize=_scrollWheelLabelPageSize - In the implementation block
@property (assign,nonatomic,__weak) id<FUScrollWheelDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<FUScrollWheelDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long itemTitleAligmnent;                               //@synthesize itemTitleAligmnent=_itemTitleAligmnent - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                            //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) UIFont * font;                                              //@synthesize font=_font - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)currentIndex;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(void)setDataSource:(id<FUScrollWheelDataSource>)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIFont *)font;
-(unsigned long long)_numberOfRows;
-(void)reloadData;
-(void)_layoutScrollView;
-(id<FUScrollWheelDataSource>)dataSource;
-(void)setDelegate:(id<FUScrollWheelDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FUScrollWheelDelegate>)delegate;
-(void)setHidden:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)setFont:(UIFont *)arg1 ;
-(double)_startingLocation;
-(void)setItemTitleAligmnent:(long long)arg1 ;
-(void)setActiveScrollWheel;
-(void)setCurrentIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setActiveScrollwheelIfNotActive;
-(void)_recycleAllLabels;
-(void)_generateOpacityMask;
-(void)_alertDidChangeToCurrentIndex:(unsigned long long)arg1 ;
-(void)_reuseLabelsWithRange:(NSRange)arg1 contentOffset:(CGPoint)arg2 ;
-(void)_recycleLabel:(id)arg1 forKey:(id)arg2 ;
-(id)_dequeueLabel;
-(id)_textForLabelAtIndex:(unsigned long long)arg1 ;
-(CGRect)_frameForLabelAtIndex:(unsigned long long)arg1 ;
-(id)_titleForItemAtIndex:(unsigned long long)arg1 ;
-(long long)itemTitleAligmnent;
-(double)_yPositionForLabelAtIndex:(unsigned long long)arg1 ;
-(double)scrollWheelLabelPageSize;
-(void)setScrollWheelLabelPageSize:(double)arg1 ;
@end

