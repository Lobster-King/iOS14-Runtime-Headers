/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUCoreDiagPoint : NSObject <NSSecureCoding> {

	long long _trackType;
	NSString* _location;
	NSString* _reason;
	long long _code;
	NSString* _errorDesc;
	NSString* _previous;
	NSString* _activity;
	NSString* _next;
	NSString* _param;

}

@property (assign,nonatomic) long long trackType;               //@synthesize trackType=_trackType - In the implementation block
@property (nonatomic,retain) NSString * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long code;                    //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * errorDesc;              //@synthesize errorDesc=_errorDesc - In the implementation block
@property (nonatomic,retain) NSString * previous;               //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) NSString * activity;               //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSString * next;                   //@synthesize next=_next - In the implementation block
@property (nonatomic,retain) NSString * param;                  //@synthesize param=_param - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)typeName;
-(long long)code;
-(NSString *)param;
-(void)setActivity:(NSString *)arg1 ;
-(id)summary;
-(void)setNext:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)previous;
-(void)setReason:(NSString *)arg1 ;
-(void)setPrevious:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)activity;
-(void)setCode:(long long)arg1 ;
-(NSString *)next;
-(id)description;
-(long long)trackType;
-(id)_descriptionStandard;
-(id)_initFullySpecified:(long long)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withCode:(long long)arg4 withError:(id)arg5 previous:(id)arg6 next:(id)arg7 activity:(id)arg8 param:(id)arg9 ;
-(id)_descriptionStateEvent;
-(id)_summaryStateEvent;
-(id)_summaryStandard;
-(NSString *)errorDesc;
-(id)initOfType:(long long)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withCode:(long long)arg4 withError:(id)arg5 ;
-(id)initStateEventForFSM:(id)arg1 previousState:(id)arg2 fsmEvent:(id)arg3 nextState:(id)arg4 fsmAction:(id)arg5 eventInfo:(id)arg6 ;
-(void)setTrackType:(long long)arg1 ;
-(void)setErrorDesc:(NSString *)arg1 ;
-(void)setParam:(NSString *)arg1 ;
@end
