/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject {

	SUScriptMediaItemCollection* _collection;

}

@property (readonly) SUScriptMediaItemCollection * collection; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(SUScriptMediaItemCollection *)collection;
-(void)dealloc;
-(id)attributeKeys;
-(id)initWithCollection:(id)arg1 ;
-(id)_className;
-(id)scriptAttributeKeys;
@end
