//
//  VAppstoreComment.h
//  VAppstoreComment
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014年 Heivin Woo. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "VExtensions.h"

@interface VAppstoreComment : NSObject

/**
 *  启动app的时候调用此方法注册应用的appstore id号，应用的名称
 *
 *  @param appstoreId appstore上应用的id号
 *  @param appName    应用的名称
 */
+ (void)initWithAppId:(NSString *)appstoreId
              appName:(NSString *)appName;

//在需要提醒的地方调用一次
+ (void)remind;

//跳转到AppStore去评论，请用真机测试
+ (void)gotoAppstore;

@end
