/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding> {

	BOOL _attributedThread;
	NSArray* _topFrames;

}

@property (readonly) BOOL attributedThread;              //@synthesize attributedThread=_attributedThread - In the implementation block
@property (readonly) NSArray * topFrames;                //@synthesize topFrames=_topFrames - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(BOOL)arg2 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)attributedThread;
-(NSArray *)topFrames;
@end
