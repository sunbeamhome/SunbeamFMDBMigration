//
//  SunbeamDBService.h
//  Pods
//
//  Created by sunbeam on 16/6/21.
//
//

#import <Foundation/Foundation.h>

/**
 *  数据库迁移服务
 */
#import "SunbeamDBMigrationService.h"

/**
 *  单例
 */
#import "SunbeamSingletonService.h"

@interface SunbeamDBService : NSObject

/**
 *  单例
 */
sunbeam_singleton_interface(SunbeamDBService)

/**
 *  SBFMDBMigration数据库迁移服务
 */
@property (nonatomic, strong, readonly) SunbeamDBMigrationService* sunbeamDBMigrationService;

/**
 *  初始化SBFMDB服务
 *
 *  @param dbFilePath 数据库文件路径
 *  @param dbFileName 数据库文件名称
 */
- (void) initSunbeamDBService:(NSString *) dbFilePath dbFileName:(NSString *) dbFileName;

/**
 *  获取FMDBDatabase实例
 *
 *  @return FMDBDatabase
 */
- (id) getSunbeamDBDatabase;

/**
 *  执行sql语句更新命令
 *
 *  @param sql sql更新语句
 *
 *  @return 执行结果
 */
- (BOOL) executeTransactionSunbeamDBUpdate:(NSString*)sql, ...;

/**
 *  执行sql语句查询命令
 *
 *  @param sql sql查询语句
 *
 *  @return 查询结果
 */
- (NSMutableArray *) executeSunbeamDBQuery:(NSString*)sql, ...;

@end
