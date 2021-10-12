//
//  UbiXNativeAd.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/6/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UbiXNativeExpressAd;
@class UbiXNativeExpressView;

@protocol UbiXNativeExpressAdDelegate <NSObject>

@optional
/**
 *  信息流模板广告竞价完成
 */
- (void)ubixNativeExpressAd:(UbiXNativeExpressAd *)nativeExpressAd biddingFinished:(NSString *_Nullable)bidSecret error:(NSError *_Nullable)error;
/**
 *  信息流模板广告素材加载完毕
 */
- (void)ubixNativeExpressAdDidLoad:(UbiXNativeExpressAd *)nativeExpressAd;

/**
 *  信息流模板广告素材加载失败
 */
- (void)ubixNativeExpressAdDidFailToLoad:(UbiXNativeExpressAd *)nativeExpressAd error:(NSError *)error;

/**
 *  信息流模板广告即将展示
 */
- (void)ubixNativeExpressAdWillShow:(UbiXNativeExpressAd *)nativeExpressAd;

/**
 *  信息流模板广告展示完毕
 */
- (void)ubixNativeExpressAdDidShow:(UbiXNativeExpressAd *)nativeExpressAd;

/**
 *  信息流模板广告点击
 */
- (void)ubixNativeExpressAdDidClick:(UbiXNativeExpressAd *)nativeExpressAd;

/**
 *  信息流模板广告点击关闭
 *  详解：开发者应在此回调中移除expressView
 */
- (void)ubixNativeExpressClickDislike:(UbiXNativeExpressAd *)nativeExpressAd;

@end

@interface UbiXNativeExpressAd : NSObject

/**
 信息流模板view，在ubixNativeExpressAdDidLoad回调后使用
 */
@property (nonatomic, strong)UIView *expressView;

/**
 信息流广告的广告位id
 */
@property (nonatomic, copy, readonly)NSString *placementId;

/**
 * 是否渲染完毕
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 *  竞价价格，单位分
 */
@property (nonatomic, assign)uint64_t bidPrice;

/**
 *  委托对象
 */
@property (nonatomic, weak) id<UbiXNativeExpressAdDelegate> delegate;

/**
 *  构造方法
 *  @param placementId 广告位ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId adSize:(CGSize)size;

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



- (void)registContainerView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
