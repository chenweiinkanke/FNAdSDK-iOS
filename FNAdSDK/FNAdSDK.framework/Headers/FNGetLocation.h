//
//  FNGetLocation.h
//  FNAdSDK
//
//  Created by ALEN on 2022/6/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNGetLocation : NSObject

/**初始化当前类*/ 
+ (instancetype)sharedInstance;

- (void)getLocation:(NSString*)currentTime;

@end

NS_ASSUME_NONNULL_END
