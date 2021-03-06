/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUTitleViewStyler.h>

@class UIColor, NSString;

@interface NUTitleViewStyler : NSObject <NUTitleViewStyler> {

	UIColor* _textColor;

}

@property (nonatomic,readonly) UIColor * textColor;                 //@synthesize textColor=_textColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTextColor:(id)arg1 ;
-(id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(CGSize)arg3 ;
-(id)titleLargeFont;
-(id)titleParagraphStyleWithWrapping:(BOOL)arg1 ;
-(id)styleTextAsTitle:(id)arg1 boundingSize:(CGSize)arg2 ;
-(id)init;
-(UIColor *)textColor;
-(id)messageParagraphStyle;
-(id)messageSmallFont;
-(id)messageLargeFont;
-(id)titleSmallFont;
-(id)styleTextAsMessage:(id)arg1 boundingSize:(CGSize)arg2 ;
@end

