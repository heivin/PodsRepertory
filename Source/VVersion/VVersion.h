//
//  VVersion.h
//  VVersion
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VVersion : NSObject


/**
 *  检查新版本
 *
 *  @param appId appstore的应用id号，例如684198097
 *  @param block 回调，返回yes表示有新版本，否则没有
 */

+ (void)check:(NSString *)appId
     finished:(void(^)(BOOL isFinished))block;


@end
