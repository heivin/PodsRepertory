//
//  BaseJSONModel.h
//  VWebService
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014 Heivin Woo. All rights reserved.
//
#import "JSONModelLib.h"

//定义一个可变的参数的block
typedef void (^ModelBlock)(id model,NSError *error) ;

@interface BaseJSONModel : JSONModel

@end
