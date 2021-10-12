//
//  UbiXSingleTon.h
//  UbiXMediation
//
//  Created by UbiX on 2021/8/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UbiXSingleton : NSObject

+ (instancetype)sharedInstance;

@end

NS_ASSUME_NONNULL_END
