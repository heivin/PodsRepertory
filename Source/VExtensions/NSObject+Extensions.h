//
//  NSObject+Extensions.h
//  VExtensions
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <objc/runtime.h>
#import <Foundation/Foundation.h>

@interface NSObject(NSObject_PropertyExtension)

- (NSArray *)getPropertyList;

- (NSArray *)getPropertyList: (Class)clazz;

- (NSString *)tableSql:(NSString *)tablename;

- (NSString *)tableSql;

- (NSDictionary *)convertDictionary;

- (id)initWithDictionary:(NSDictionary *)dict;

- (NSString *)className;

//object转为json字符串
- (NSString *)toJsonString;

@end
