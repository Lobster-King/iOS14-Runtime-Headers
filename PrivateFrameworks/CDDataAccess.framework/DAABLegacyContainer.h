/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAContainer.h>

@class NSString;

@interface DAABLegacyContainer : NSObject <DAContainer> {

	void* _source;

}

@property (nonatomic,readonly) void* source;                                                   //@synthesize source=_source - In the implementation block
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLocal;
-(id)identifier;
-(BOOL)isContact;
-(id)cTag;
-(void)setExternalIdentifier:(id)arg1 ;
-(void)markForDeletion;
-(BOOL)isGroup;
-(id)externalIdentifier;
-(void)dealloc;
-(id)syncTag;
-(void)updateSaveRequest:(id)arg1 ;
-(id)accountIdentifier;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianRestricted;
-(long long)type;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(void)setName:(id)arg1 ;
-(BOOL)isContainer;
-(id)syncData;
-(void)setType:(long long)arg1 ;
-(BOOL)isAccount;
-(void)setSyncData:(id)arg1 ;
-(void)setSyncTag:(id)arg1 ;
-(void*)source;
-(void)setCTag:(id)arg1 ;
-(void*)asSource;
-(id)meContactIdentifier;
-(void)setMeContactIdentifier:(id)arg1 ;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1 ;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1 ;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(id)asContainer;
-(id)initWithABSource:(void*)arg1 ;
-(id)name;
-(void)setAccountIdentifier:(id)arg1 ;
@end

