/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AEOptionMirror : NSObject {

	NSDictionary* _rightOptionsByLeft;
	NSDictionary* _leftOptionsByRight;

}

@property (nonatomic,readonly) long long leftClearMask; 
@property (nonatomic,readonly) long long rightClearMask; 
-(id)initWithMirroredOptions:(id)arg1 ;
-(long long)leftOptionsFromRight:(long long)arg1 ;
-(long long)rightOptionsFromLeft:(long long)arg1 ;
-(long long)leftClearMask;
-(long long)rightClearMask;
@end
