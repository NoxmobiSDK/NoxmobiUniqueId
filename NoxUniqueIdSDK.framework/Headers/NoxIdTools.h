//
//  NoxIdTools.h
//  UID
//
//  Created by nox on 2023/7/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NoxIdTools : NSObject

+ (instancetype)shareInstance;

// 获取IDFA
- (void)noxObtainIDFA:(void(^)(NSString *idfaStr, NSError *error))completion;
//- (void)obtainIDFA:(void(^)(NSString *idfaStr, NSError *error))completion;

// 获取IDFV
- (NSString *)obtainIDFV;

// 获取BundleId
- (NSString *)obtainBundleId;

// 获取CasuId
//- (NSString *)obtainCasuId;

// 获取uuid
- (NSString *)obtainUuId;

// 获取时间戳
- (NSString *)timeStamp;

// MD5加密
+ (NSString *)md5:(NSString *)str;

// 品牌
- (NSString *)brand;

// 型号
- (NSString *)model;

// 系统
- (NSString *)system;

// 系统版本
- (NSString *)os_version;

// 语言
- (NSString *)languange;

- (float)freeSize;

- (NSString *)softwareVersion;

@end

NS_ASSUME_NONNULL_END
