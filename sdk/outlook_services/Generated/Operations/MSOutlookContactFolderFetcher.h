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

@class MSOutlookContactFetcher;
@class MSOutlookContactCollectionFetcher;
@class MSOutlookContactFolderFetcher;
@class MSOutlookContactFolderCollectionFetcher;
@class MSOutlookContactFolderOperations;
@class MSOutlookContactFolderFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookContactFolderFetcher.
*/

@protocol MSOutlookContactFolderFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSOutlookContactFolder *contactFolder, MSOrcError *error))callback;
- (MSOutlookContactFolderFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookContactFolderFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOutlookContactFolderFetcher *)select:(NSString *)params;
- (MSOutlookContactFolderFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookContactFolderOperations *operations;

@end

@interface MSOutlookContactFolderFetcher : MSOrcEntityFetcher<MSOutlookContactFolderFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSOutlookContactFolder *)contactFolder callback:(void(^)(MSOutlookContactFolder *contactFolder, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

@property (retain, nonatomic, readonly, getter=contacts) MSOutlookContactCollectionFetcher *contacts;

- (MSOutlookContactFetcher *)getContactsById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=childFolders) MSOutlookContactFolderCollectionFetcher *childFolders;

- (MSOutlookContactFolderFetcher *)getChildFoldersById:(NSString*)id;


@end