//
//  FNOnlyFeedAds.h
//  FNAD
//
//  Created by ALAN on 2021/6/18.
//

#import <Foundation/Foundation.h>
#import "FNFeedAdsObject.h"
//#import "FNOnlyNativeAdDataObject.h"

NS_ASSUME_NONNULL_BEGIN

@protocol FNOnlyFeedAdsDelegate <NSObject>

/**
 广告数据回调
 @param onlyNativeAdDataObjects 广告数据数组
 @param error 错误信息
 */
- (void)fn_onlyNativeAdLoaded:(NSArray * _Nullable)onlyNativeAdDataObjects error:(NSError * _Nullable)error;


/**
 广告数据回调
 @param error 错误信息
 */
- (void)fnFeedError:(NSError *)error;



/**
 广告曝光回调
 */
- (void)fn_onlyNativeAdViewWillExpose;


/**
 广告点击回调
 */
- (void)fn_onlyNativeAdViewDidClick:(FNFeedAdsObject *)adsObj;


/**
 广告详情页关闭回调
 */
- (void)fn_onlyNativeAdDetailViewClosed:(FNFeedAdsObject *)adsObj;

/**
 广告关闭回调
 */
- (void)fn_onlyNativeAdDislike:(FNFeedAdsObject *)adsObj;


@end


@interface FNOnlyFeedAds : NSObject

@property (nonatomic, weak) id<FNOnlyFeedAdsDelegate> delegate;

/**
 请求视频的时长下限，视频时长有效值范围为[5,60]。
 以下两种情况会使用系统默认的最小值设置，1:不设置  2:minVideoDuration大于maxVideoDuration
*/
@property (nonatomic) NSInteger minVideoDuration;

/**
 请求视频的最大时长，视频时长有效值范围为[5,60]。
 */
@property (nonatomic) NSInteger maxVideoDuration;


+ (instancetype)shareFnOnlyFeed;

/**初始化SDK*/
/**params adsID 由平台分配初始化ID*/
/**params adsID 由平台分配广告位ID*/
/**params loadView 承载广告位的view*/
/**params controller
*  viewControllerForPresentingModalView
*  详解：开发者传入用来弹出目标页的ViewController，一般为当前ViewController*/
/**params count 广告个数 The number of ads requested,The maximum is 5
*/
- (void)loadFeedAd:(NSString *)appid  ADS:(NSString *)adsID  withView:(UIView *)loadView withController:(UIViewController *)controller loadCount:(int)count;


/**初始化SDK*/
/**params adsID 由平台分配初始化ID*/
/**params adsID 由平台分配广告位ID*/
/**params loadView 承载广告位的view*/
/**params count 广告个数 The number of ads requested,The maximum is 5
*/
- (void)loadFeedAd:(NSString *)appid  ADS:(NSString *)adsID  withView:(UIView *)loadView loadCount:(int)count;

/**初始化SDK*/
//只有一个信息流广告位
/**params adsID 由平台分配初始化ID*/
/**params adsID 由平台分配广告位ID*/
/**params loadView 承载广告位的view
 */
- (void)loadOnlyFnFeedAd:(NSString *)appid  ADS:(NSString *)adsID withView:(UIView *)loadView;


/**初始化SDK*/
//只有一个信息流广告位
/**params adsID 由平台分配初始化ID*/
/**params adsID 由平台分配广告位ID*/
/**params loadView 承载广告位的view*/
/**params controller
*  viewControllerForPresentingModalView
*  详解：开发者传入用来弹出目标页的ViewController，一般为当前ViewController*/

- (void)loadOnlyFnFeedAd:(NSString *)appid  ADS:(NSString *)adsID withView:(UIView *)loadView withController:(UIViewController *)controller;

/// 绑定广告
/// @param view 用于显示广告的视图
/// @param itemAd  一个广告条目
- (void)registerViewForInteraction:(nonnull UIView *)view itemAd:(nonnull id)itemAd;

@end

NS_ASSUME_NONNULL_END
