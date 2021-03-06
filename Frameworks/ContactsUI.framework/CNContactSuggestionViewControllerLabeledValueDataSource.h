/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class CNLabeledValue, NSString, NSAttributedString, NSURL;

@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	CNLabeledValue* _labeledValue;

}

@property (nonatomic,retain) CNLabeledValue * labeledValue;                        //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)from;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(NSString *)date;
-(NSString *)title;
-(NSAttributedString *)formattedSnippet;
-(CNLabeledValue *)labeledValue;
-(unsigned long long)type;
-(NSString *)appName;
-(NSURL *)url;
-(id)initWithLabeledValue:(id)arg1 ;
@end

