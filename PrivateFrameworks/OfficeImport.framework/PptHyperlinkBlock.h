/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer, ESDObject;

@interface PptHyperlinkBlock : NSObject {

	ESDContainer* mInteractiveInfoContainerHolder;
	ESDObject* mTxInteractiveInfoAtomHolder;

}
-(id)interactiveInfoContainerHolder;
-(void)setInteractiveInfoContainerHolder:(id)arg1 ;
-(PptTxInteracInfoAtom*)txtInteractiveInfoAtom;
-(void)setTxInteractiveInfoAtomHolder:(id)arg1 ;
@end

