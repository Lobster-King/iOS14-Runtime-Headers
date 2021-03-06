/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CADObjectID;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {

	int _entityType;
	int _rowID;
	NSArray* _loadedValues;
	CADObjectID* _objectID;
	BOOL _deleted;

}

@property (nonatomic,readonly) BOOL deleted;              //@synthesize deleted=_deleted - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)deleted;
-(id)loadedValues;
-(id)objectID;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 ;
-(id)initWithCalEntity:(void*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

