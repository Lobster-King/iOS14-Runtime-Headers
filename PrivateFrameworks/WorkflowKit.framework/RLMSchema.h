/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying> {

	NSArray* _objectSchema;
	Schema* _objectStoreSchema;
	NSMutableDictionary* _objectSchemaByName;

}

@property (nonatomic,retain) NSMutableDictionary * objectSchemaByName;              //@synthesize objectSchemaByName=_objectSchemaByName - In the implementation block
@property (nonatomic,copy) NSArray * objectSchema; 
+(id)sharedSchemaForClass:(Class)arg1 ;
+(id)dynamicSchemaFromObjectStoreSchema:(const Schema*)arg1 ;
+(id)sharedSchema;
+(id)partialPrivateSharedSchema;
+(id)schemaWithObjectClasses:(id)arg1 ;
+(Class)classForString:(id)arg1 ;
+(id)partialSharedSchema;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObjectSchema:(NSArray *)arg1 ;
-(void)setObjectSchemaByName:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)objectSchemaByName;
-(id)init;
-(BOOL)isEqualToSchema:(id)arg1 ;
-(NSArray *)objectSchema;
-(id)schemaForClassName:(id)arg1 ;
-(Schema*)objectStoreCopy;
-(id)description;
@end
