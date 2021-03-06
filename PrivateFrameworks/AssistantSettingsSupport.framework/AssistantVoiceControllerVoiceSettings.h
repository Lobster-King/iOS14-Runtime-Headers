/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFVoiceInfo;

@interface AssistantVoiceControllerVoiceSettings : NSObject {

	AFVoiceInfo* _inProgressVoice;
	AFVoiceInfo* _currentVoice;

}

@property (nonatomic,retain) AFVoiceInfo * inProgressVoice;              //@synthesize inProgressVoice=_inProgressVoice - In the implementation block
@property (nonatomic,retain) AFVoiceInfo * currentVoice;                 //@synthesize currentVoice=_currentVoice - In the implementation block
+(id)settingsWithInProgressVoice:(id)arg1 currentVoice:(id)arg2 ;
-(void)setInProgressVoice:(AFVoiceInfo *)arg1 ;
-(void)setCurrentVoice:(AFVoiceInfo *)arg1 ;
-(AFVoiceInfo *)inProgressVoice;
-(AFVoiceInfo *)currentVoice;
@end

