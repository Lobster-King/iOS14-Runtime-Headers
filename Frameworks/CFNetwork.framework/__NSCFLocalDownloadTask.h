/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFLocalSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionDownloadTaskSubclass.h>
#import <libobjc.A.dylib/__NSCFLocalDownloadFileOpener.h>

@protocol OS_dispatch_data;
@class __NSCFLocalDownloadFile, NSObject, NSDictionary, NSString;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

	/*^block*/id _fileCompletion;
	__NSCFLocalDownloadFile* _downloadFile;
	NSObject*<OS_dispatch_data> _writeBuffer;
	unsigned long long _ioSuspend;
	long long _totalWrote;
	/*^block*/id _resumeCallback;
	long long _initialResumeSize;
	NSDictionary* _originalResumeInfo;
	unsigned long long _transientWriteProgress;
	/*^block*/id _afterDidReportProgressOnQueue;
	/*^block*/id _dataAckCompletion;
	int _seqNo;
	BOOL _canWrite;
	BOOL _suppressProgress;
	BOOL _needFinish;
	BOOL _didIssueNeedFinish;

}

@property (retain) __NSCFLocalDownloadFile * downloadFile;              //@synthesize downloadFile=_downloadFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_expandResumeData:(id)arg1 ;
-(void)_onqueue_completeInitialization;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
-(__NSCFLocalDownloadFile *)downloadFile;
-(void)terminateExtractorWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
-(id)createResumeInformation:(id)arg1 ;
@end
