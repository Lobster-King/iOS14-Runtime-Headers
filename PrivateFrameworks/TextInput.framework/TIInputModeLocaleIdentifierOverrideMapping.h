/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject {

	NSDictionary* _overrideMapping;

}

@property (nonatomic,readonly) NSDictionary * overrideMapping;              //@synthesize overrideMapping=_overrideMapping - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)overrideMapping;
-(id)overrideLocaleForIdentifier:(id)arg1 ;
-(unsigned char)localeIdentifierHasOverride:(id)arg1 ;
@end
