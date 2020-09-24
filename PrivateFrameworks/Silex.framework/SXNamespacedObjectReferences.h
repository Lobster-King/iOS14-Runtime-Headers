/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface SXNamespacedObjectReferences : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _componentStyleReferences;
	NSMutableDictionary* _componentTextStyleReferences;
	NSMutableDictionary* _textStyleReferences;

}
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)referencesForComponent:(id)arg1 map:(id)arg2 ;
-(id)namespacedComponentStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedComponentTextStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedTextStyleIdentifierForIdentifier:(id)arg1 component:(id)arg2 ;
-(void)populateWithSource:(id)arg1 ;
-(id)namespacedComponentStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)componentStyleIdentifierForNamespacedComponentStyleIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedComponentTextStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)componentTextStyleIdentifierForNamespacedComponentTextStyleIdentifier:(id)arg1 component:(id)arg2 ;
-(id)namespacedTextStyleIdentifiersForIdentifiers:(id)arg1 component:(id)arg2 ;
-(id)textStyleIdentifierForNamespacedTextStyleIdentifier:(id)arg1 component:(id)arg2 ;
@end
