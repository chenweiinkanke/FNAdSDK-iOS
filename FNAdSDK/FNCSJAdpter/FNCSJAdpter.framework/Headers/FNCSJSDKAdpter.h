//
//  FNCSJSDKAdpter.h
//  FNAD
//
//  Created by ALAN on 2021/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNCSJSDKAdpter : NSObject

+ (void)initialize_SDK:(NSDictionary *)paramsAd completionHandler:(void(^)(BOOL success, NSError *error))handler;
@end

NS_ASSUME_NONNULL_END
