//
//  FNLoadReardVideoAdDelegate.h
//  FNAD
//
//  Created by ALAN on 2021/5/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum : NSUInteger {
    /**
    竞价
     */
    FN_V_BID_TYPE = 1,
    /**
     固价
     */
    FN_V_GP_TYPE,
} FN_Video_PRICE_TYPE;

@protocol FNLoadReardVideoAdDelegate <NSObject>

/**
 视频广告加载成功回调
 */
- (void)fnRewardVideoAdDidLoad;


/**
 视频广告曝光回调
 */
- (void)fnRewardVideoShow;

/**
 视频播放页关闭回调
 */
- (void)fnRewardVideoClosed;


/**
 视频广告各种错误信息回调
 @param error 具体错误信息
 */
- (void)fnRewardVideoError:(NSError *)error;


/**
 视频广告播放达到激励条件回调
 @param orderId 订单ID
 */
- (void)fnRewardVideoReward:(NSString *)orderId;


/**
 视频广告点击回调
 */
- (void)fnRewardVideoClicked;


/**
 加赞成功之后回调的价格代理方法
 fnPriceType 是固价还是竞价
 price 当前广告价格
 thirdAdId:第三方广告位id
 */
- (void)loadSuccess:(FN_Video_PRICE_TYPE)fnPriceType withPrice:(id)price withThirdAdID:(NSString *)thirdAdId;


@end

NS_ASSUME_NONNULL_END
