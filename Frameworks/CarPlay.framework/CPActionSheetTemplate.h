/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPAlertDelegate.h>

@protocol CPAlertDelegate;
@class NSString, NSArray;

@interface CPActionSheetTemplate : CPTemplate <CPAlertDelegate> {

	NSString* _title;
	NSString* _message;
	NSArray* _actions;
	id<CPAlertDelegate> _alertDelegate;

}

@property (nonatomic,retain) id<CPAlertDelegate> alertDelegate;              //@synthesize alertDelegate=_alertDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<CPAlertDelegate>)alertDelegate;
-(NSArray *)actions;
-(NSString *)title;
-(void)setAlertDelegate:(id<CPAlertDelegate>)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)message;
-(void)handleAlertActionForIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
@end
