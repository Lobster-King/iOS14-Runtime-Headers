/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@class NSString, NSArray;

@interface SIRINLUSystemInformed : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	NSArray* _entities;

}

@property (nonatomic,retain) NSArray * entities;                   //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(NSArray *)entities;
-(void)setEntities:(NSArray *)arg1 ;
-(id)initWithEntities:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
@end

