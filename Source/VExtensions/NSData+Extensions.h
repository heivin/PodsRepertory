//
//  NSData+Extensions.h
//  VExtensions
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (NSData_Extensions)

//NSData的md5，可以对文件完整性进行校验
- (NSString *)MD5;

@end
