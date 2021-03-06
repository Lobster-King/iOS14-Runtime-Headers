/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIRTTUtilities.h>

@class RTTTelephonyUtilities, NSString;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities> {

	RTTTelephonyUtilities* _utilityProvider;

}

@property (nonatomic,retain) RTTTelephonyUtilities * utilityProvider;              //@synthesize utilityProvider=_utilityProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(id)init;
-(BOOL)relayIsSupported;
-(id)initWithUtilityProvider:(id)arg1 ;
-(id)nts_lazyUtilityProvider;
-(RTTTelephonyUtilities *)utilityProvider;
-(void)setUtilityProvider:(RTTTelephonyUtilities *)arg1 ;
@end

