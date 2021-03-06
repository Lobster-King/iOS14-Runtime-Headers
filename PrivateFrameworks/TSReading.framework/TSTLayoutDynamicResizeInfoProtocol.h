/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>
@required
-(BOOL)valid;
-(void)invalidate;
-(BOOL)hasHeightForRow:(unsigned short)arg1;
-(BOOL)hasWidthForColumn:(unsigned char)arg1;
-(double)applyResizeHeightFactor:(double)arg1;
-(double)applyResizeWidthFactor:(double)arg1;
-(double)getColumnWidth:(unsigned char)arg1;
-(double)getRowHeight:(unsigned short)arg1;
-(id)initWithMasterLayout:(id)arg1;
-(id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
-(id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
-(id)initWithDynamicResizeInfo:(id)arg1;
-(double)getRowInitialHeight:(unsigned short)arg1;
-(double)getColumnInitialWidth:(unsigned char)arg1;
-(double)getRowHeightResize:(unsigned short)arg1;
-(double)getColumnWidthResize:(unsigned char)arg1;
-(void)captureNewMinimumRowHeights:(id)arg1;

@end

