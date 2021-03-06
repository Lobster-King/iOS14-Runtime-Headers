/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBlurEffect, UIColor;

@interface HULayeredBackgroundEffect : NSObject {

	UIBlurEffect* _blurEffect;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIBlurEffect * blurEffect;              //@synthesize blurEffect=_blurEffect - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
+(id)backgroundWithFillColor:(id)arg1 ;
+(id)backgroundWithBlurEffect:(id)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setBlurEffect:(UIBlurEffect *)arg1 ;
-(UIBlurEffect *)blurEffect;
@end

