/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphEdge.h>

@class NSMutableDictionary, NSString;

@interface PGGraphConcreteEdge : PGGraphEdge {

	NSMutableDictionary* _properties;
	unsigned short _domain;
	float _weight;
	NSString* _label;

}

@property (assign,nonatomic) float weight;              //@synthesize weight=_weight - In the implementation block
-(void)mergeProperties:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)setWeight:(float)arg1 ;
-(void)removeAllProperties;
-(void)removePropertyForKey:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)hasProperties;
-(unsigned long long)propertiesCount;
-(void)setLocalProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(unsigned short)domain;
-(id)propertyDictionary;
-(id)propertyKeys;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id)label;
-(float)weight;
@end

