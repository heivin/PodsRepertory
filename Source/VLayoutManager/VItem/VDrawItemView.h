//
//  PKDrawItemView.h
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import "VDrawItem.h"

@interface VDrawItemView : VDrawItem
@property (nonatomic, strong)  UIColor *backgroundColor;
@property (nonatomic)BOOL isFill;
@property (nonatomic)CGFloat cornerRadius;
@property (nonatomic)CGFloat strokeLineWidth;
@property (nonatomic, strong)UIColor *strokeLineColor;
@end
