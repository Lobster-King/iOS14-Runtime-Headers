/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {

	int _cd_rc;
	NSArray* _underlyingArray;
	_PFWeakReference* _weakmoc;

}
+(id)alloc;
+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)objectEnumerator;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)allObjects;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)_tryRetain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newArrayFromObjectIDs;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(oneway void)release;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)array;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 andContext:(id)arg2 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isDeallocating;
-(id)retain;
-(id)arrayFromObjectIDs;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)description;
@end
