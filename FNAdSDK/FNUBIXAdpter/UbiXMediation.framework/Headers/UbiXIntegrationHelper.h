//
//  UbiXIntegrationHelper.h
//  UbiXMediation
//
//  Created by UbiX on 2021/8/18.
//

#import "UbiXSingleton.h"

NS_ASSUME_NONNULL_BEGIN

@interface UbiXIntegrationHelper : UbiXSingleton

@property (nonatomic, strong)NSDictionary *mediationConfigs;

+ (void)validateIntegration;

@end

NS_ASSUME_NONNULL_END
