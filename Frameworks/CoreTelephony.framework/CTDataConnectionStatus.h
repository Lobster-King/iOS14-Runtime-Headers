/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _suspended;
	BOOL _publicNetAllowed;
	unsigned _wirelessTechnologyMask;
	int _state;
	int _ipFamily;
	int _contextType;
	NSNumber* _pdp;
	NSString* _interfaceName;
	NSString* _apnName;

}

@property (nonatomic,retain) NSNumber * pdp;                               //@synthesize pdp=_pdp - In the implementation block
@property (nonatomic,retain) NSString * interfaceName;                     //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,retain) NSString * apnName;                           //@synthesize apnName=_apnName - In the implementation block
@property (assign,nonatomic) unsigned wirelessTechnologyMask;              //@synthesize wirelessTechnologyMask=_wirelessTechnologyMask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) int ipFamily;                                 //@synthesize ipFamily=_ipFamily - In the implementation block
@property (assign,nonatomic) BOOL suspended;                               //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL publicNetAllowed;                        //@synthesize publicNetAllowed=_publicNetAllowed - In the implementation block
@property (assign,nonatomic) int contextType;                              //@synthesize contextType=_contextType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)pdp;
-(void)setPublicNetAllowed:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)setState:(int)arg1 ;
-(void)setIpFamily:(int)arg1 ;
-(void)setPdp:(NSNumber *)arg1 ;
-(BOOL)publicNetAllowed;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setContextType:(int)arg1 ;
-(void)setWirelessTechnologyMask:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)ipFamily;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)interfaceName;
-(void)setApnName:(NSString *)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(int)contextType;
-(unsigned)wirelessTechnologyMask;
-(int)state;
-(id)description;
-(NSString *)apnName;
@end
