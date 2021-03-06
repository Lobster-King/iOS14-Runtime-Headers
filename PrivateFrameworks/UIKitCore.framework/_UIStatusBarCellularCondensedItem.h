/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem {

	BOOL _reducesFontSize;
	_UIStatusBarDualCellularSignalView* _dualSignalView;
	_UIStatusBarMultilineStringView* _dualNameView;
	_UIStatusBarStringView* _dualSingleLineNameView;
	_UIStatusBarStringView* _dualSingleLineNameAndTypeView;

}

@property (nonatomic,retain) _UIStatusBarDualCellularSignalView * dualSignalView;                 //@synthesize dualSignalView=_dualSignalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarMultilineStringView * dualNameView;                      //@synthesize dualNameView=_dualNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dualSingleLineNameView;                     //@synthesize dualSingleLineNameView=_dualSingleLineNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dualSingleLineNameAndTypeView;              //@synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView - In the implementation block
@property (assign,nonatomic) BOOL reducesFontSize;                                                //@synthesize reducesFontSize=_reducesFontSize - In the implementation block
+(id)dualSingleLineNameDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
+(id)dualNameDisplayIdentifier;
+(id)dualSignalStrengthDisplayIdentifier;
+(id)dualSingleLineNameAndTypeDisplayIdentifier;
-(_UIStatusBarStringView *)dualSingleLineNameAndTypeView;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)_create_dualSingleLineNameAndTypeView;
-(BOOL)_showCallFowardingForEntry:(id)arg1 ;
-(id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double*)arg3 ;
-(void)_create_dualSignalView;
-(BOOL)reducesFontSize;
-(id)_singleCellularEntryMatching:(/*^block*/id)arg1 ;
-(id)dependentEntryKeys;
-(id)_stringForCellularType:(long long)arg1 ;
-(void)setReducesFontSize:(BOOL)arg1 ;
-(void)_create_dualSingleLineNameView;
-(void)setDualSignalView:(_UIStatusBarDualCellularSignalView *)arg1 ;
-(id)entryForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarMultilineStringView *)dualNameView;
-(void)setDualSingleLineNameView:(_UIStatusBarStringView *)arg1 ;
-(void)setDualNameView:(_UIStatusBarMultilineStringView *)arg1 ;
-(_UIStatusBarDualCellularSignalView *)dualSignalView;
-(void)setDualSingleLineNameAndTypeView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)dualSingleLineNameView;
-(NSRange)_nonCondensedFontRangeForEntry:(id)arg1 ;
-(void)_create_dualNameView;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
@end

