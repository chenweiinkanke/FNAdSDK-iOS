//
//  UbiXMediationRewardedVideo.h
//  UbiXMediation
//
//  Created by UbiX on 2021/8/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UbiXMediationRewardedVideo;

@protocol UbiXMediationRewardedVideoDelegate <NSObject>

// 激励视频广告加载成功
- (void)mediationRewardedVideoDidLoad:(UbiXMediationRewardedVideo *)rewardVideo;

// 激励视频广告展示成功
- (void)mediationRewardedVideoDidShow:(UbiXMediationRewardedVideo *)rewardVideo;

// 激励视频广告接收失败回调
- (void)mediationRewardedVideoDidFailToLoad:(UbiXMediationRewardedVideo *)rewardVideo error:(NSError *)error;

// 激励视频奖励回调
- (void)mediationRewardedVideoDidReward:(UbiXMediationRewardedVideo *)rewardVideo;

// 激励视频点击广告回调
- (void)mediationRewardedVideoClick:(UbiXMediationRewardedVideo *)rewardVideo;

// 激励视频关闭广告回调
- (void)mediationRewardedVideoClosed:(UbiXMediationRewardedVideo *)rewardVideo;

@end

@interface UbiXMediationRewardedVideo : NSObject

@property (nonatomic, weak)id<UbiXMediationRewardedVideoDelegate> delegate;

@property (nonatomic, copy)NSString *slotId;

@property (nonatomic, assign)BOOL isReady;

- (void)loadAd;

- (void)showAd;

@end

NS_ASSUME_NONNULL_END
