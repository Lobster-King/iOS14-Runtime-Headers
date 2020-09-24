/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, SAUINanoImageResource, NSString;

@interface SASTComparisonEntity : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIDecoratedText * decoratedTitle; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedValue; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)comparisonEntity;
+(id)comparisonEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)decoratedTitle;
-(void)setDecoratedTitle:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(SAUIDecoratedText *)decoratedValue;
-(void)setDecoratedValue:(SAUIDecoratedText *)arg1 ;
@end
