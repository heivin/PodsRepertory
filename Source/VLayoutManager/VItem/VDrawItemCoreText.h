//
//  PKDrawItemCoreText.h
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import "VDrawItemText.h"
#import <CoreText/CoreText.h>

@interface VDrawItemCoreText : VDrawItemText
@property (nonatomic, assign) CTFrameRef textFrame;
@property (nonatomic, strong) NSMutableAttributedString *attributedString;
@property (nonatomic, assign) CGSize size;
@end
