/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVBonjourServiceDelegate <NSObject>
@optional
-(id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1;

@required
-(void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2;
-(void)bonjourService:(id)arg1 didCloseChannel:(id)arg2;

@end

