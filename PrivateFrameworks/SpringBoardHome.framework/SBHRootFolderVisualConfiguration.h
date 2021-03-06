/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHRootFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	SBRootFolderViewPageManagementLayoutMetrics _pageManagement2x1LayoutMetrics;
	SBRootFolderViewPageManagementLayoutMetrics _pageManagement2x2LayoutMetrics;
	SBRootFolderViewPageManagementLayoutMetrics _pageManagement3x2LayoutMetrics;
	SBRootFolderViewPageManagementLayoutMetrics _pageManagement3x3LayoutMetrics;
	double _idleTextVerticalOffset;
	double _pageControlVerticalOffset;
	double _pageManagementPageCheckboxVerticalMargin;
	double _pageManagementPageCheckboxDiameter;
	double _dockViewHeight;
	double _dockBackgroundViewCornerRadius;
	CGSize _pageControlFrameInset;
	CGSize _pageControlCustomPadding;
	UIOffset _editModeButtonLayoutOffset;
	CGSize _editModeButtonSize;
	UIEdgeInsets _dockBackgroundViewInsets;
	UIEdgeInsets _dockListViewInsets;
	UIEdgeInsets _editModeButtonContentEdgeInsets;

}

@property (assign,nonatomic) double idleTextVerticalOffset;                                //@synthesize idleTextVerticalOffset=_idleTextVerticalOffset - In the implementation block
@property (assign,nonatomic) double pageControlVerticalOffset;                             //@synthesize pageControlVerticalOffset=_pageControlVerticalOffset - In the implementation block
@property (assign,nonatomic) CGSize pageControlFrameInset;                                 //@synthesize pageControlFrameInset=_pageControlFrameInset - In the implementation block
@property (assign,nonatomic) CGSize pageControlCustomPadding;                              //@synthesize pageControlCustomPadding=_pageControlCustomPadding - In the implementation block
@property (assign,nonatomic) double pageManagementPageCheckboxVerticalMargin;              //@synthesize pageManagementPageCheckboxVerticalMargin=_pageManagementPageCheckboxVerticalMargin - In the implementation block
@property (assign,nonatomic) double pageManagementPageCheckboxDiameter;                    //@synthesize pageManagementPageCheckboxDiameter=_pageManagementPageCheckboxDiameter - In the implementation block
@property (assign,nonatomic) double dockViewHeight;                                        //@synthesize dockViewHeight=_dockViewHeight - In the implementation block
@property (assign,nonatomic) double dockBackgroundViewCornerRadius;                        //@synthesize dockBackgroundViewCornerRadius=_dockBackgroundViewCornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets dockBackgroundViewInsets;                        //@synthesize dockBackgroundViewInsets=_dockBackgroundViewInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets dockListViewInsets;                              //@synthesize dockListViewInsets=_dockListViewInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets editModeButtonContentEdgeInsets;                 //@synthesize editModeButtonContentEdgeInsets=_editModeButtonContentEdgeInsets - In the implementation block
@property (assign,nonatomic) UIOffset editModeButtonLayoutOffset;                          //@synthesize editModeButtonLayoutOffset=_editModeButtonLayoutOffset - In the implementation block
@property (assign,nonatomic) CGSize editModeButtonSize;                                    //@synthesize editModeButtonSize=_editModeButtonSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEditModeButtonLayoutOffset:(UIOffset)arg1 ;
-(void)setPageManagementPageCheckboxDiameter:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)editModeButtonSize;
-(void)setDockListViewInsets:(UIEdgeInsets)arg1 ;
-(void)setPageControlCustomPadding:(CGSize)arg1 ;
-(SBRootFolderViewPageManagementLayoutMetrics)pageManagementLayoutMetricsForLayoutConfiguration:(long long)arg1 ;
-(CGSize)pageControlFrameInset;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setPageControlVerticalOffset:(double)arg1 ;
-(void)setPageManagementPageCheckboxVerticalMargin:(double)arg1 ;
-(double)pageManagementPageCheckboxVerticalMargin;
-(UIOffset)editModeButtonLayoutOffset;
-(double)dockViewHeight;
-(id)init;
-(double)pageControlVerticalOffset;
-(void)setEditModeButtonSize:(CGSize)arg1 ;
-(double)dockBackgroundViewCornerRadius;
-(double)idleTextVerticalOffset;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)dockListViewInsets;
-(void)setDockViewHeight:(double)arg1 ;
-(void)setEditModeButtonContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)pageControlCustomPadding;
-(void)setDockBackgroundViewInsets:(UIEdgeInsets)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(void)setPageControlFrameInset:(CGSize)arg1 ;
-(UIEdgeInsets)dockBackgroundViewInsets;
-(void)setDockBackgroundViewCornerRadius:(double)arg1 ;
-(void)setPageManagementLayoutMetrics:(SBRootFolderViewPageManagementLayoutMetrics)arg1 forLayoutConfiguration:(long long)arg2 ;
-(UIEdgeInsets)editModeButtonContentEdgeInsets;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(void)setIdleTextVerticalOffset:(double)arg1 ;
-(double)pageManagementPageCheckboxDiameter;
@end

