//
//  UbiXDaqReporter.h
//  UbiXDaq
//
//  Created by UbiX on 2021/9/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UbiXDaqEventParam : NSObject

@end

@interface UbiXDaqReporter : NSObject

- (instancetype)initWithAppId:(NSString *)appId sdkVersion:(NSString *)version reportUrl:(NSString *)url uploadCount:(int)uploadCount uploadPeriod:(int)uploadPeriod isMediation:(BOOL)isMediation;

- (void)uploadEventCode:(NSString *)eventCode attribute:(NSDictionary *_Nullable)attribute immediately:(BOOL)isImmediately;

@end

NS_ASSUME_NONNULL_END
