//
//  PKLayoutManager.h
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VLayoutInfo.h"
#import "VDrawItemCanvasView.h"

@interface VLayoutManager : NSObject

@property (nonatomic, strong) NSMutableArray *layoutInfos;

- (void)addlayoutInfo:(VLayoutInfo*)layoutInfo;

- (void)addlayoutInfo:(VLayoutInfo *)layoutInfo insert:(NSUInteger)index;

- (void)addlayoutInfos:(VLayoutInfo*)layoutInfo;

- (void)removelayoutInfoAtIndex:(NSInteger)index;

- (void)removelayoutInfo:(VLayoutInfo*)layoutInfo;

- (void)removeAlllayoutInfo;

- (NSInteger)layoutInfoCount;

- (VLayoutInfo *)layoutInfo:(NSInteger)index;

@end
