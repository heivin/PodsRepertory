//
//  NSArray+Extensions.m
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import "NSArray+Extensions.h"

@implementation NSArray (NSArray_Extensions)

- (BOOL)writeToFile:(NSString *)path{
    NSData * data = [NSKeyedArchiver archivedDataWithRootObject:self];
    return [data writeToFile:path
                  atomically:YES];
}

+(NSArray*)readFile:(NSString*)path{
    NSData * data = [NSData dataWithContentsOfFile:path];
    return  [NSKeyedUnarchiver unarchiveObjectWithData:data];
}
@end

@implementation NSDictionary (NSDictionary_Extensions)
- (BOOL)writeToFile:(NSString *)path{
    NSData * data = [NSKeyedArchiver archivedDataWithRootObject:self];
    return [data writeToFile:path
                  atomically:YES];
}

+(NSArray*)readFile:(NSString*)path{
    NSData * data = [NSData dataWithContentsOfFile:path];
    return  [NSKeyedUnarchiver unarchiveObjectWithData:data];
}
@end
