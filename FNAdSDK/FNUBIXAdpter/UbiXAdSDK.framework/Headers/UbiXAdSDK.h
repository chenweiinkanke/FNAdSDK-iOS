//
//  UbiXAdSDK.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/5/24.
//

#import <Foundation/Foundation.h>
#import "UbiXSplashAd.h"
#import "UbiXNativeExpressAd.h"
#import "UbiXNativeAd.h"
#import "UbiXNativeAdView.h"
#import "UbiXNativeDataObject.h"

@interface UbiXAdSDK : NSObject

@property (nonatomic, copy)NSString *appId;

#pragma mark - SDK Initialization

/**
 * SDK 初始化接口，请在 app 初始化时调用。
 * @param appId - UbiX开发者后台创建的appId
 * @param completionBlock - 初始化结果
 */
+ (void)initWithAppId:(NSString *)appId completionHandler:(void(^)(BOOL result))completionBlock;

/**
 * 获取 SDK 版本
 */
+ (NSString *)SDKVersion;


@end

