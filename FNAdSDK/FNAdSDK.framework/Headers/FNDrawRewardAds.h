//
//  FNDrawRewardAds.h
//  FNAdSDK
//
//  Created by ALEN on 2022/5/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FNDrawRewardAdsDelegate <NSObject>

/// 视频播放失败，error=失败原因
- (void)fnDrawRewardsAdDidFailedError:(NSError *)error;

/// 视频停止播放，finished=是否播放完成
- (void)fnDrawRewardsAdDidStopFinished:(BOOL)finished;

/// 视频恢复播放
- (void)fnDrawRewardsAdDidResume;

/// 视频暂停播放
- (void)fnDrawRewardsAdDidPause;

/// 视频开始播放
- (void)fnDrawRewardsAdDidStart;

/// 广告点击
- (void)fnDrawRewardsAdDidClick;

///  广告展示
- (void)fnDrawRewardsAdViewWillShow;

///  加载失败
- (void)fnDrawRewardsAdsDidFailWithError:(NSError *)error;

///  达到观看视频数目后奖励回调
- (void)fnDrawRewardsAdsOnReward;
@end


@interface FNDrawRewardAds : NSObject

@property (nonatomic,weak)id<FNDrawRewardAdsDelegate> delegate;

/**用户的userid*/
@property(nonatomic, copy) NSString *userIdentifier;

/**可扩展参数*/
@property(nonatomic, copy) NSString *extraInfo;

/// 初始化SDK
/// @param appId 由平台分配初始化平台ID
/// @param drawId 由平台分配视频流广告位ID
/// @param feedId 由平台分配信息流广告位ID
- (instancetype)initWithAppId:(NSString *)appId drawAdsId:(NSString *)drawId feedAdsId:(NSString *)feedId;


/// 加载并显示feedId
/// @param viewController 返回一个显示广告的UIViewController
- (void)loadAndShow:(void(^)(UIViewController *vc))viewController;
@end

NS_ASSUME_NONNULL_END
