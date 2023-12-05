//
//  FNBDCPUChannelAdpter.h
//  FNBDAdpter
//
//  Created by ALEN on 2022/3/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNBDCPUChannelAdpter : NSObject

/**
 *  返回媒体URL
 *
 *  @param channelId   频道ID
 *  @param appId 应用ID
 *  说明：
 */
- (void)getFnCpuInfoUrlWithChannelId:(NSString *)channelId
                                   appId:(NSString *)appId;

@end

NS_ASSUME_NONNULL_END


