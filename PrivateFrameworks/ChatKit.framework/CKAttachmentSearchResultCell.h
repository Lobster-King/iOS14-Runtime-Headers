/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UIImageView, UILabel, UIDateLabel, NSString, CKSearchAvatarSupplementryView;

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	BOOL _suppressAvatars;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UIDateLabel* _dateLabel;
	NSString* _identifier;
	CKSearchAvatarSupplementryView* _avatarView;
	UIEdgeInsets marginInsets;

}

@property (assign,nonatomic) BOOL suppressAvatars;                                                      //@synthesize suppressAvatars=_suppressAvatars - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                                                   //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKSearchAvatarSupplementryView * avatarView;                               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CGPoint avatarOffsetLTR; 
@property (nonatomic,readonly) CGPoint avatarOffsetRTL; 
@property (nonatomic,readonly) double editModeHorizontalOffset; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)setAvatarView:(CKSearchAvatarSupplementryView *)arg1 ;
-(CKSearchAvatarSupplementryView *)avatarView;
-(NSString *)identifier;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(UILabel *)titleLabel;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)prepareForReuse;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIDateLabel *)dateLabel;
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(BOOL)suppressAvatars;
-(double)editModeHorizontalOffset;
-(CGPoint)avatarOffsetLTR;
-(CGPoint)avatarOffsetRTL;
-(void)setSuppressAvatars:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)_thumbnailGenerated:(id)arg1 ;
@end

