//
//  PKDrawItemImage.h
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import "VDrawItem.h"

typedef enum
{
    VDrawItemModeFill,
    VDrawItemModeAbscrat
}VDrawItemMode;

typedef enum
{
    VDrawItemTypeNoraml,
    VDrawItemTypeHighlighted
}VDrawItemType;

@interface VDrawItemImage : VDrawItem

@property (nonatomic, strong)  UIImage *image;
@property (nonatomic, strong)  NSString *imageName;
@property (nonatomic, assign)  BOOL isLocalImage;
@property (nonatomic, assign)  VDrawItemMode mode;
@property (nonatomic, assign)  VDrawItemType type;

@end
