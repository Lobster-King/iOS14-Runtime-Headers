/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFVariableConfigurationOptionsViewControllerDelegate;
@class NSString, NSArray, WFVariableConfigurationOption;

@interface WFVariableConfigurationOptionsViewController : UITableViewController {

	id<WFVariableConfigurationOptionsViewControllerDelegate> _delegate;
	NSString* _userIdentifier;
	NSArray* _options;
	WFVariableConfigurationOption* _defaultOption;
	long long _selectedOptionIndex;

}

@property (nonatomic,readonly) NSArray * options;                                                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) WFVariableConfigurationOption * defaultOption;                                       //@synthesize defaultOption=_defaultOption - In the implementation block
@property (assign,nonatomic) long long selectedOptionIndex;                                                         //@synthesize selectedOptionIndex=_selectedOptionIndex - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * userIdentifier;                                                      //@synthesize userIdentifier=_userIdentifier - In the implementation block
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)userIdentifier;
-(NSArray *)options;
-(void)viewDidLoad;
-(void)setDelegate:(id<WFVariableConfigurationOptionsViewControllerDelegate>)arg1 ;
-(id<WFVariableConfigurationOptionsViewControllerDelegate>)delegate;
-(long long)selectedOptionIndex;
-(WFVariableConfigurationOption *)defaultOption;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSelectedOptionIndex:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 userIdentifier:(id)arg2 options:(id)arg3 defaultOption:(id)arg4 selectedOption:(id)arg5 ;
@end
