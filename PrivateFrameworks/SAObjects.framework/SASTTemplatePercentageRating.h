/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASTTemplateRating.h>

@class SAUILocalImageResource, SAUIDecoratedText;

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
+(id)templatePercentageRating;
+(id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)value;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
@end

