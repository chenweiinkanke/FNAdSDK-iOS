//
//  UbiXSplashAd.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/6/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UbiXSplashAd;

@protocol UbiXSplashAdDelegate <NSObject>

@optional
/**
 *  开屏广告竞价完成
 */
- (void)ubixSplashAd:(UbiXSplashAd *)splashAd didBiddingFinished:(NSString *_Nullable)bidSecret error:(NSError *_Nullable)error;
/**
 *  开屏广告素材加载完毕
 */
- (void)ubixSplashAdDidLoad:(UbiXSplashAd *)splashAd;

/**
 *  开屏广告素材加载失败
 */
- (void)ubixSplashAdDidFailToLoad:(UbiXSplashAd *)splashAd error:(NSError *_Nullable)error;

/**
 *  开屏广告即将展示
 */
- (void)ubixSplashAdWillShow:(UbiXSplashAd *)splashAd;

/**
 *  开屏广告展示完毕
 */
- (void)ubixSplashAdDidShow:(UbiXSplashAd *)splashAd;

/**
 *  开屏广告点击回调
 */
- (void)ubixSplashAdDidClick:(UbiXSplashAd *)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)ubixSplashAdDidClose:(UbiXSplashAd *)splashAd;

@end

@interface UbiXSplashAd : NSObject

@property (nonatomic, assign, getter=isReady)BOOL ready;


@property (nonatomic, strong)UIView *splashView;

/**
 开屏广告的广告位id
 */
@property (nonatomic, copy, readonly)NSString *placementId;

/**
 *  拉取广告超时时间，默认为3秒
 *  详解：然后在该超时时间内，如果广告拉取成功，则立马展示开屏广告，否则放弃此次广告展示机会。
 */
@property (nonatomic, assign) NSTimeInterval tolerateTime;

/**
 *  委托对象
 */
@property (nonatomic, weak) id<UbiXSplashAdDelegate> delegate;

/**
 *  竞价价格，单位分
 */
@property (nonatomic, assign)uint64_t bidPrice;

/**
 *  构造方法
 *
 *  @param placementId 广告位ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId;

/**
 *  加载广告
 */
- (void)loadAd;

/**
 *  获取竞价广告，参与竞价胜出后，调用loadBiddingAdWithSecret，下载物料
 */
- (void)startBidding;

/**
 *  UbiX广告竞价胜出后调用，进行广告物料下载
 */
- (void)loadBiddingAdWithBidSecret:(NSString *)bidSecret;

/**
 *  展示开屏广告
 *  @param controller 展示开屏广告的控制器
 */
- (void)showSplashToViewController:(UIViewController *)controller;

/**
 *  展示开屏广告
 *  @param controller 展示开屏广告的控制器
 *  @param bottomView 开发者自定义底部logo
 */
- (void)showSplashToViewController:(UIViewController *)controller bottonView:(UIView *)bottomView;

@end

NS_ASSUME_NONNULL_END
