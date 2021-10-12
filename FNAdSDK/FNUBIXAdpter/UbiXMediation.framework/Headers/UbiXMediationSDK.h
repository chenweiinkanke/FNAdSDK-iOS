//
//  UbiXMediationSDK.h
//  UbiXMediation
//
//  Created by UbiX on 2021/7/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UbiXMediationSDK : NSObject

+ (void)initializeWithAppId:(NSString *)appid appkey:(NSString *)appKey completionHandler:(void(^)(BOOL result))completionBlock;

+ (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
