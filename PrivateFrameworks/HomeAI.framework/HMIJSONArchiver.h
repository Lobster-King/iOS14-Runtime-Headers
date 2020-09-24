/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>

@class NSString;

@interface HMIJSONArchiver : NSCoder {

	id _container;
	long long _options;

}

@property (assign) long long options;                          //@synthesize options=_options - In the implementation block
@property (readonly) NSString * objectJSON; 
@property (readonly) NSString * objectPrettyJSON; 
+(id)JSONObjectStringWithObject:(id)arg1 pretty:(BOOL)arg2 options:(long long)arg3 ;
+(id)JSONObjectWithObject:(id)arg1 options:(long long)arg2 ;
+(id)JSONObjectStringWithObject:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)object;
-(void)_addValueToContainer:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_containerIsArray;
-(id)_valueForNumber:(id)arg1 ;
-(id)_JSONObjectWithObject:(id)arg1 options:(long long)arg2 ;
-(id)initWithDictionary;
-(void)_addClassToContainer:(Class)arg1 ;
-(id)initWithArray;
-(NSString *)objectJSON;
-(NSString *)objectPrettyJSON;
@end
