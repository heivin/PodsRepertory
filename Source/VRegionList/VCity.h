//
//  VCity.h
//  HandlePlist
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VBase.h"

@interface VCity : VBase
@property(nonatomic,strong)NSString *cid;
@property(nonatomic,strong)NSArray *areas;
@end
