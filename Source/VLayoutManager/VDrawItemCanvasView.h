//
//  VDrawItemView.h
//  Vote
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VLayoutInfo.h"

/*
CGFloat	CGRectMaxX( CGRect rect ); //x+width

CGFloat	CGRectMaxY( CGRect rect ); //y+height

CGRect	CGRectOutset( CGRect rect ,CGFloat dx,CGFloat dy);

BOOL	CGRectIsInvalid( CGRect rect ); //is valid rect
*/

@interface VDrawItemCanvasView : UIView
{
    VLayoutInfo *_layoutInfo;
}

- (void)drawLayout:(VLayoutInfo *)layoutInfo;

- (void)drawLayoutRect:(CGRect)rect layoutInfo:(VLayoutInfo *)layoutInfo;

@end

