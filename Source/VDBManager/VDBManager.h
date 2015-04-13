//
//  VDBManager.h
//  VDBManager
//
//  Created by Heivin on 14-1-9.
//  Copyright (c) 2014年 Heivin Woo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VExtensions.h"
#import "FMDB.h"

typedef void (^DBBlock)() ;

typedef id (^DBCallBackBlock)(id value) ;

//数据库名
static NSString * const kDBName                  = @"datas";

@interface VDBManager : NSObject

@property (nonatomic, retain) FMDatabase *dataBase;
@property (nonatomic, retain) FMDatabaseQueue *dbQueue;

//初始化数据库,子类实现
+ (void) initDB;

//加载数据库
- (void) setupDB;

//快速获取FMDatabase
+ (FMDatabase *)db;

//执行sql语句没有回调
- (void)executeBlock:(DBBlock)block;

//执行sql语句回调id类型
- (id)executeCallBlockBlock:(DBCallBackBlock)block;

/*******************生成sql语句 Start*********************/

//生成create语句，可以定义integer类型
+ (NSString *)generateCreateTableSql:(Class)_class integerkeys:(NSArray *)integerkeys primaryKey:(NSString *)primaryKey;

//生成create语句，全部都是text类型
+ (NSString *)generateCreateTableSql:(Class)_class;

//生成insert语句
+ (NSString *)generateInsertSql:(NSString *)tablename
                           info:(NSDictionary *)infos
                         values:(NSMutableArray *)values;

//生成update语句
+ (NSString *)generateUpdateSql:(NSString *)tablename
                   conditionKey:(NSString *)conditionKey
                           info:(NSDictionary *)infos
                         values:(NSMutableArray *)values;

/*******************生成sql语句 End*********************/

//创建数据库表,需要在subclass中实现
- (void)createTables;

@end
