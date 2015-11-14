/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSOUTLOOKATTACHMENTFETCHER_H
#define MSOUTLOOKATTACHMENTFETCHER_H

#import "MSOutlookModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOutlookFileAttachmentFetcher;	
@class MSOutlookItemAttachmentFetcher;	
@class MSOutlookReferenceAttachmentFetcher;	
@class MSOutlookAttachmentOperations;


/** MSOutlookAttachmentFetcher
 *
 */
@interface MSOutlookAttachmentFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOutlookAttachmentOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOutlookAttachment *, MSOrcError *))callback;
- (void)update:(MSOutlookAttachment *)Attachment callback:(void (^)(MSOutlookAttachment *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOutlookAttachmentFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookAttachmentFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOutlookAttachmentFetcher *)select:(NSString *)params;
- (MSOutlookAttachmentFetcher *)expand:(NSString *)value;
- (MSOutlookFileAttachmentFetcher *)asFileAttachment;	
- (MSOutlookItemAttachmentFetcher *)asItemAttachment;	
- (MSOutlookReferenceAttachmentFetcher *)asReferenceAttachment;	

@end

#endif