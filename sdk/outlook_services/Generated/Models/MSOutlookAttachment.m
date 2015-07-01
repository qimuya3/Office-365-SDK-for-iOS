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

#import "MSOutlookModels.h"

/**
* The implementation file for type MSOutlookAttachment.
*/

@implementation MSOutlookAttachment	

@synthesize odataType = _odataType;
@synthesize Name = _name;
@synthesize ContentType = _contentType;
@synthesize Size = _size;
@synthesize IsInline = _isInline;
@synthesize DateTimeLastModified = _dateTimeLastModified;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.Attachment";
    }

	return self;
}

 
- (void)setName:(NSString *)  name;
{
    _name =  name;
    [self valueChanged:name forProperty:@"Name"];
}

 
- (void)setContentType:(NSString *)  contentType;
{
    _contentType =  contentType;
    [self valueChanged:contentType forProperty:@"ContentType"];
}

 
- (void)setSize:(int )  size;
{
    _size =  size;
    [self valueChangedForInt:size forProperty:@"Size"];
}

 
- (void)setIsInline:(BOOL )  isInline;
{
    _isInline =  isInline;
    [self valueChangedForBool:isInline forProperty:@"IsInline"];
}

 
- (void)setDateTimeLastModified:(NSDate *)  dateTimeLastModified;
{
    _dateTimeLastModified =  dateTimeLastModified;
    [self valueChanged:dateTimeLastModified forProperty:@"DateTimeLastModified"];
}

@end