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



#import "MSGraphFetchers.h"

@implementation MSGraphDeviceConfigurationCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent {

    return [super initWithUrl:urlComponent parent:parent asClass:[MSGraphDeviceConfiguration class]];
}

- (void)add:(MSGraphDeviceConfiguration*)entity callback:(void (^)(MSGraphDeviceConfiguration *mSGraphDeviceConfiguration, MSOrcError *error))callback {
	
	return [super add:entity callback:^(id entityAdded, MSOrcError *e) {

        callback(entityAdded,e);
    }];
}

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback {
    [super readWithCallback:^(id response, MSOrcError *error) {
        callback(response, error);
    }];
}

- (MSGraphDeviceConfigurationFetcher *)getById:(id) identifier {

    return [[MSGraphDeviceConfigurationFetcher alloc] initWithUrl:[[NSString alloc] initWithFormat:@"('%@')" , identifier] parent:self];
}

- (MSGraphDeviceConfigurationCollectionFetcher *)select:(NSString *)params {
    [super select:params];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)filter:(NSString *)params{
    [super filter:params];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)search:(NSString *)params {
    [super search:params];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)top:(int)value {
    [super top:value];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)skip:(int)value {
    [super skip:value];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)expand:(NSString *)value {
    [super expand:value];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)orderBy:(NSString *)params {
    [super orderBy:params];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value {
    [super addCustomParametersWithName:name value:value];
    
    return self;
}

- (MSGraphDeviceConfigurationCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value {
    [super addCustomHeaderWithName:name value:value];
    
    return self;
}

@end