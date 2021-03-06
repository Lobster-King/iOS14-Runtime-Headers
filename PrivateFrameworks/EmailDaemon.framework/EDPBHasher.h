/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDPBHasher
@required
-(long long)hashedAccountID:(id)arg1;
-(id)hashedMessageHeadersForMessage:(id)arg1;
-(long long)hashedConversationID:(long long)arg1;
-(long long)hashedString:(id)arg1;
-(long long)hashedMailboxID:(id)arg1;
-(long long)hashedContactIDForAddress:(id)arg1;
-(SCD_Struct_ED13*)hashedSubject:(id)arg1;

@end

