/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSIGroup;

@interface PSIRankedGroup : NSObject {

	PSIGroup* _group;
	double _score;

}

@property (nonatomic,readonly) PSIGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
-(double)score;
-(void)setScore:(double)arg1 ;
-(PSIGroup *)group;
-(id)initWithGroup:(id)arg1 score:(double)arg2 ;
@end

