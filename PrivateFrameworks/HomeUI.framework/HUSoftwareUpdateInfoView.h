/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HUInlineWebContainerViewDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUSoftwareUpdateInternalResizingDelegate;
@class HFItem, HUSoftwareUpdateAnimatedIcon, UIImage, UIImageView, UIStackView, UILabel, HUInlineWebContainerView, NSLayoutConstraint, NSString;

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol> {

	HFItem* _item;
	id<HUSoftwareUpdateInternalResizingDelegate> _internalViewResizingDelegate;
	HUSoftwareUpdateAnimatedIcon* _animatedGearView;
	UIImage* _gearBackgroundImage;
	UIImageView* _gearBackgroundImageView;
	UIStackView* _labelStackView;
	UILabel* _updateNameLabel;
	UILabel* _publisherNameLabel;
	UILabel* _sizeLabel;
	HUInlineWebContainerView* _releaseNotesSummaryView;
	NSLayoutConstraint* _releaseNotesHeightConstraint;

}

@property (assign,nonatomic,__weak) id<HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate;              //@synthesize internalViewResizingDelegate=_internalViewResizingDelegate - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateAnimatedIcon * animatedGearView;                                               //@synthesize animatedGearView=_animatedGearView - In the implementation block
@property (nonatomic,retain) UIImage * gearBackgroundImage;                                                                 //@synthesize gearBackgroundImage=_gearBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImageView * gearBackgroundImageView;                                                         //@synthesize gearBackgroundImageView=_gearBackgroundImageView - In the implementation block
@property (nonatomic,retain) UIStackView * labelStackView;                                                                  //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) UILabel * updateNameLabel;                                                                     //@synthesize updateNameLabel=_updateNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * publisherNameLabel;                                                                  //@synthesize publisherNameLabel=_publisherNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabel;                                                                           //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) HUInlineWebContainerView * releaseNotesSummaryView;                                            //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * releaseNotesHeightConstraint;                                             //@synthesize releaseNotesHeightConstraint=_releaseNotesHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                                                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(void)setSizeLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UILabel *)sizeLabel;
-(UIImage *)gearBackgroundImage;
-(UIImageView *)gearBackgroundImageView;
-(void)setGearBackgroundImageView:(UIImageView *)arg1 ;
-(HUInlineWebContainerView *)releaseNotesSummaryView;
-(UIStackView *)labelStackView;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(void)setAnimatedGearView:(HUSoftwareUpdateAnimatedIcon *)arg1 ;
-(HUSoftwareUpdateAnimatedIcon *)animatedGearView;
-(void)setUpdateNameLabel:(UILabel *)arg1 ;
-(UILabel *)updateNameLabel;
-(void)setPublisherNameLabel:(UILabel *)arg1 ;
-(UILabel *)publisherNameLabel;
-(void)setReleaseNotesSummaryView:(HUInlineWebContainerView *)arg1 ;
-(void)setReleaseNotesHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)releaseNotesHeightConstraint;
-(id<HUSoftwareUpdateInternalResizingDelegate>)internalViewResizingDelegate;
-(void)_updateReleaseNotesHeightIfNeeded;
-(void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1 ;
-(void)setInternalViewResizingDelegate:(id<HUSoftwareUpdateInternalResizingDelegate>)arg1 ;
-(void)setGearBackgroundImage:(UIImage *)arg1 ;
@end

