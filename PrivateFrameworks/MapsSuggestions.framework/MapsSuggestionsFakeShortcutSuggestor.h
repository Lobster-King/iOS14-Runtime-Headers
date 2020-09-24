/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {

	ReadWriteQueue _rwQueue;
	NSArray* _configuredResults;
	NSError* _configuredError;
	unsigned long long _calledPropose;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initFromResourceDepot:(id)arg1 ;
-(void)reset;
-(char)suggestShortcutsOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)configureError:(id)arg1 ;
-(void)configureResults:(id)arg1 ;
-(unsigned long long)calledRequestSuggest;
@end
