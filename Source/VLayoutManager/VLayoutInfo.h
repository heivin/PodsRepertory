//
//  PKLayoutInfo.h
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VDrawItem.h"
#import "VDrawItemText.h"
#import "VDrawItemImage.h"
#import "VDrawItemEmotion.h"
#import "VDrawItemURL.h"
#import "VDrawItemAttatch.h"
#import "VDrawItemCoreText.h"
#import "VDrawItemView.h"

@interface VLayoutInfo : NSObject
{

}
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, assign) CGRect rect;
@property (nonatomic, strong) id info;

//Public methords
- (void)addItem:(VDrawItem*)item;
- (void)addItems:(NSArray *)items;
- (void)removeAllItems;
- (void)removeItem:(VDrawItem*)item;
- (VDrawItem *)itemWithTag:(NSInteger)tag;
- (void)increaseHeight:(CGFloat)height;
- (void)setHeight:(CGFloat)height;

@end
