//
//  UbixNativeAd.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/7/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UbiXNativeDataObject.h"

NS_ASSUME_NONNULL_BEGIN

@class UbiXNativeAd;

@protocol UbiXNativeDelegate <NSObject>
/**
 * 信息流广告加载完毕
 */
- (void)ubixNativeAdDidReceiveAd:(UbiXNativeAd *)nativeAd;
/**
 * 信息流广告加载失败
 */
- (void)ubixNativeAdDidFailToLoad:(UbiXNativeAd *)nativeAd error:(NSError *)error;
/**
 * 信息流广告即将展示
 */
- (void)ubixNativeAdWillShow:(UbiXNativeAd *)nativeAd;
/**
 * 信息流广告展示完毕
 */
- (void)ubixNativeAdDidShow:(UbiXNativeAd *)nativeAd;
/**
 * 信息流广告点击
 */
- (void)ubixNativeAdDidClick:(UbiXNativeAd *)nativeAd;
@end

@interface UbiXNativeAd : NSObject

@property (nonatomic, copy, readonly)NSString *placementId;


/**
 *  信息流广告素材模型
 */
@property (nonatomic, strong)UbiXNativeDataObject *nativeData;

/**
 *  委托对象
 */
@property (nonatomic, weak)id<UbiXNativeDelegate>delegate;

/**
 *  竞价价格，单位分
 */
@property (nonatomic, assign)uint64_t bidPrice;

/**
 *  构造方法
 *  @param placementId 广告位ID
 */
- (instancetype)initWithPlacementId:(NSString *)placementId;

/**
 *  加载信息流广告
 */
- (void)loadAd;


@end

NS_ASSUME_NONNULL_END
