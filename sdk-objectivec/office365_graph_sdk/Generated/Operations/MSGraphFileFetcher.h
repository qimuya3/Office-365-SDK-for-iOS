/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSGraphFileOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphFileFetcher.
*/

@protocol MSGraphFileFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphFile *file, MSODataException *exception))callback;
- (id<MSGraphFileFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphFileFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphFileFetcher>)select:(NSString *)params;
- (id<MSGraphFileFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphFileOperations *operations;


@end

@interface MSGraphFileFetcher : MSODataEntityFetcher<MSGraphFileFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateFile:(MSGraphFile *)file callback:(void (^)(MSGraphFile *file, MSODataException *error))callback;
- (NSURLSessionTask *) deleteFile:(void (^)(int status, MSODataException *exception))callback;

@end