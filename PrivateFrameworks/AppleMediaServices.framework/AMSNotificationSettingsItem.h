/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AMSNotificationSettingsItem : NSObject {

	BOOL _enabled;
	BOOL _userChanged;
	NSString* _desc;
	NSString* _identifier;
	NSString* _title;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * desc;                                      //@synthesize desc=_desc - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL userChanged;                                       //@synthesize userChanged=_userChanged - In the implementation block
-(NSString *)desc;
-(NSString *)identifier;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isEnabled;
-(NSString *)title;
-(void)setUserChanged:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 description:(id)arg2 identifier:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)userChanged;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
@end
