/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGridGraphNode : GKGraphNode {

	GKCGridGraphNode* _cGridGraphNode;

}

@property (nonatomic,readonly)  gridPosition; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithGridPosition:;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-()gridPosition;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGridGraphNode*)cGridGraphNode;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)initWithGridPosition:;
@end

