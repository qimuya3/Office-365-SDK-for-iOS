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



#ifndef MSONENOTESECTIONFETCHER_H
#define MSONENOTESECTIONFETCHER_H

#import "MSOneNoteModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSOneNoteIdentitySetFetcher;
@class MSOneNoteNotebookFetcher;
@class MSOneNoteSectionGroupFetcher;
@class MSOneNotePageCollectionFetcher;
@class MSOneNoteNotebookFetcher;
@class MSOneNoteSectionGroupFetcher;
@class MSOneNotePageCollectionFetcher;
@class MSOneNotePageFetcher;
@class MSOneNoteSectionOperations;


/** MSOneNoteSectionFetcher
 *
 */
@interface MSOneNoteSectionFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteSectionOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteSection *, MSOrcError *))callback;
- (void)update:(MSOneNoteSection *)Section callback:(void (^)(MSOneNoteSection *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteSectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteSectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteSectionFetcher *)select:(NSString *)params;
- (MSOneNoteSectionFetcher *)expand:(NSString *)value;

@property (strong, nonatomic, readonly, getter=parentNotebook) MSOneNoteNotebookFetcher *parentNotebook;

@property (strong, nonatomic, readonly, getter=parentSectionGroup) MSOneNoteSectionGroupFetcher *parentSectionGroup;
@property (strong, nonatomic, readonly, getter=pages) MSOneNotePageCollectionFetcher *pages;

- (MSOneNotePageFetcher *)pagesById:(id)identifier;


@end

#endif