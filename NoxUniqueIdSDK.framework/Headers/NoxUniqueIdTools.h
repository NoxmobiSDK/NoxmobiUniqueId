//
//  NoxUniqueIdTools.h
//  NoxUniqueIdSDK
//
//  Created by nox on 2023/7/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString * const uniqueId_ver = @"1.0.0000";

@interface NoxUniqueIdTools : NSObject

+ (instancetype)shareInstance;

// 必须先初始化Firebase 且只能调用一次
- (void)initFirebase;

/**
 获取uuid+时间戳并上传

 @param completion   没有error就是成功了
 */
- (void)uidForkeychain:(void(^)(NSString *uniqId, NSError *error))completion;

// 自己实现存 (uuid、时间戳、uuid+时间戳、手机型号、手机系统、BundleID等)

// @param name        唯一标识的name
// @param pwd         唯一标识的值
// @param service     唯一标识service
// @param existing    唯一标识：默认YES
- (BOOL)saveWith:(NSString *)name withPwd:(NSString *)pwd forService:(NSString *)service updateExisting:(BOOL)existing withError:(NSError *)error;

// 自己实现取

// @param name        唯一标识的name
// @param service     唯一标识service

// @return            唯一标识的值
- (NSString *)obtainWith:(NSString *)name withService:(NSString *)service withError:(NSError *)error;

// 自己实现删

// @param name        唯一标识的name
// @param service     唯一标识service
- (void)deleteWith:(NSString *)name withService:(NSString *)service withError:(NSError *)error;

/**
 开发者可以自己上传相关数据
 
 @param idfa         idfa
 @param idfv         idfv
 @param gaid         gaid
 @param uuid         uuid
 @param timeStamp    时间戳
 @param signedUuid   uuid+时间戳 的md5
 @param brand        手机类型
 @param model        手机型号
 @param os           手机系统
 @param osVersion    系统版本
 @param language     语言
 @param bundleId     bundleId
 @param appVersion   APP版本
 @param completion   没有error就是成功了
 */
- (void)postRequestidfa:(NSString *)idfa idfv:(NSString *)idfv gaid:(NSString *)gaid uuid:(NSString *)uuid timeStamp:(NSString *)timeStamp signedUuid:(NSString *)signedUuid brand:(NSString *)brand model:(NSString *)model os:(NSString *)os osVersion:(NSString *)osVersion language:(NSString *)language bundleId:(NSString *)bundleId appVersion:(NSString *)appVersion :(void(^)(NSError *error))completion;

@end

NS_ASSUME_NONNULL_END
