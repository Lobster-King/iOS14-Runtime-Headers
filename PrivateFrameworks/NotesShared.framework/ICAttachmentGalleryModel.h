/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICAttachmentModel.h>

@class ICCRDTIdentifierOrderedSetVersionedDocument, CROrderedSet;

@interface ICAttachmentGalleryModel : ICAttachmentModel {

	ICCRDTIdentifierOrderedSetVersionedDocument* _attachmentIdentifiersOrderedSetDocument;

}

@property (nonatomic,retain) ICCRDTIdentifierOrderedSetVersionedDocument * attachmentIdentifiersOrderedSetDocument;              //@synthesize attachmentIdentifiersOrderedSetDocument=_attachmentIdentifiersOrderedSetDocument - In the implementation block
@property (nonatomic,readonly) CROrderedSet * attachmentIdentifiersOrderedSet; 
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(id)fileURLForTypeIdentifier:(id)arg1 ;
-(id)activityItems;
-(id)providerFileTypes;
-(void)drawPreviewInRect:(CGRect)arg1 ;
-(/*^block*/id)genericBrickThumbnailCreator;
-(id)quicklookPreviewItems;
-(/*^block*/id)genericListThumbnailCreator;
-(BOOL)needToGeneratePreviews;
-(BOOL)generatePreviewsInOperation:(id)arg1 ;
-(BOOL)canSaveURL;
-(id)firstSubAttachment;
-(unsigned long long)subAttachmentsCount;
-(id)singleSubAttachmentAtIndex:(unsigned long long)arg1 ;
-(CROrderedSet *)attachmentIdentifiersOrderedSet;
-(void)insertSubAttachment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)subAttachmentIdentifiers;
-(BOOL)hasThumbnailImage;
-(BOOL)attachmentHasMergeableData;
-(id)subAttachmentIdentifierAtIndex:(unsigned long long)arg1 ;
-(ICCRDTIdentifierOrderedSetVersionedDocument *)attachmentIdentifiersOrderedSetDocument;
-(void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(BOOL)arg1 ;
-(id)searchableStringArray;
-(void)enumerateSubAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(long long)previewImageOrientation;
-(void)attachmentWillRefresh:(BOOL)arg1 ;
-(void)attachmentWillTurnIntoFault;
-(void)attachmentDidRefresh:(BOOL)arg1 ;
-(BOOL)canSaveURLWithOtherAttachments;
-(id)previewImageTypeUTI;
-(id)titleForSubAttachment:(id)arg1 ;
-(BOOL)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1 ;
-(void)addSubAttachment:(id)arg1 ;
-(void)removeSubAttachment:(id)arg1 ;
-(unsigned long long)indexOfSubAttachmentWithIdentifier:(id)arg1 ;
-(BOOL)mergeWithMergeableData:(id)arg1 ;
-(void)writeMergeableData;
-(short)sectionForSubAttachments;
-(void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1 ;
-(void)undeleteSubAttachments;
-(id)searchableTextContent;
-(BOOL)hasPreviews;
-(void)setAttachmentIdentifiersOrderedSetDocument:(ICCRDTIdentifierOrderedSetVersionedDocument *)arg1 ;
-(BOOL)showThumbnailInNoteList;
-(BOOL)providesStandaloneTitleForNote;
-(id)standaloneTitleForNote;
@end
