/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCardMediaObject.h>

@class NSDictionary, CNContactVCardSummary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject {

	BOOL _vCardParsingFailed;
	NSDictionary* _contactMediaInfo;
	unsigned long long _oopPreviewRequestCount;
	CNContactVCardSummary* _vCardSummary;
	UIImage* _vCardImage;

}

@property (nonatomic,retain) NSDictionary * contactMediaInfo;                        //@synthesize contactMediaInfo=_contactMediaInfo - In the implementation block
@property (assign,nonatomic) unsigned long long oopPreviewRequestCount;              //@synthesize oopPreviewRequestCount=_oopPreviewRequestCount - In the implementation block
@property (nonatomic,retain) CNContactVCardSummary * vCardSummary;                   //@synthesize vCardSummary=_vCardSummary - In the implementation block
@property (assign,nonatomic) BOOL vCardParsingFailed;                                //@synthesize vCardParsingFailed=_vCardParsingFailed - In the implementation block
@property (nonatomic,retain) UIImage * vCardImage;                                   //@synthesize vCardImage=_vCardImage - In the implementation block
+(id)fallbackFilenamePrefix;
+(BOOL)shouldUseTranscoderGeneratedPreviewSize;
+(id)UTITypes;
-(int)mediaType;
-(id)subtitle;
-(BOOL)generatePreviewOutOfProcess;
-(unsigned long long)oopPreviewRequestCount;
-(void)setOopPreviewRequestCount:(unsigned long long)arg1 ;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(UIImage *)vCardImage;
-(CNContactVCardSummary *)vCardSummary;
-(BOOL)supportsBlastDoor;
-(NSDictionary *)contactMediaInfo;
-(id)vCardImageOfSize:(CGSize)arg1 ;
-(id)previewCacheKey;
-(id)previewDispatchCache;
-(id)_transcodeControllerSharedInstance;
-(void)generateOOPPreview;
-(Class)previewBalloonViewClass;
-(id)contactCardPayloadFileURL:(id)arg1 ;
-(Class)coloredBalloonViewClass;
-(void)setContactMediaInfo:(NSDictionary *)arg1 ;
-(void)setVCardSummary:(CNContactVCardSummary *)arg1 ;
-(BOOL)vCardParsingFailed;
-(void)setVCardParsingFailed:(BOOL)arg1 ;
-(void)setVCardImage:(UIImage *)arg1 ;
-(CGSize)bbSize;
-(id)title;
-(id)metricsCollectorMediaType;
-(id)icon;
-(id)attachmentSummary:(unsigned long long)arg1 ;
-(id)previewItemTitle;
-(id)previewItemURL;
@end

