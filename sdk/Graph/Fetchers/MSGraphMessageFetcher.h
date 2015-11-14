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



#ifndef MSGRAPHMESSAGEFETCHER_H
#define MSGRAPHMESSAGEFETCHER_H

#import "MSGraphModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphItemBodyFetcher;
@class MSGraphRecipientFetcher;
@class MSGraphRecipientCollectionFetcher;
@class MSGraphExtensionCollectionFetcher;
@class MSGraphAttachmentCollectionFetcher;
@class MSGraphEventMessageFetcher;	
@class MSGraphExtensionCollectionFetcher;
@class MSGraphAttachmentCollectionFetcher;
@class MSGraphExtensionFetcher;
@class MSGraphAttachmentFetcher;
@class MSGraphMessageOperations;


/** MSGraphMessageFetcher
 *
 */
@interface MSGraphMessageFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphMessageOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphMessage *, MSOrcError *))callback;
- (void)update:(MSGraphMessage *)Message callback:(void (^)(MSGraphMessage *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphMessageFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphMessageFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphMessageFetcher *)select:(NSString *)params;
- (MSGraphMessageFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=extensions) MSGraphExtensionCollectionFetcher *extensions;

- (MSGraphExtensionFetcher *)extensionsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=attachments) MSGraphAttachmentCollectionFetcher *attachments;

- (MSGraphAttachmentFetcher *)attachmentsById:(id)identifier;

- (MSGraphEventMessageFetcher *)asEventMessage;	

@end

#endif