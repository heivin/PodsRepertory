//
//  UIControl+Extensions.h
//  VExtensions
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (UIControl_Extensions)

- (void) addEventHandler:(void(^)(void))handler forControlEvents:(UIControlEvents)controlEvents;

@end