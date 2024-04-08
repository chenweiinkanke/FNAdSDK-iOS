//
//  FNLoadInterstitialAdDelegate.h
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
    FN_i_BID_TYPE = 1,
    /**
     固价
     */
    FN_i_GP_TYPE,
} FN_Interstitial_PRICE_TYPE;

@protocol FNLoadInterstitialAdDelegate <NSObject>

@optional
/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 *   @param error 发生错误时会有相应的code和message
 */
- (void)fnInterstitialError:(NSError *)error;

/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)fnInterstitialShow;

/**
 *  插屏广告展示结束回调
 *  详解: 插屏广告展示结束回调该函数
 */
- (void)fnInterstitialClosed;


/**
 *  插屏广告点击回调
 *  详解: 插屏广告点击后回调该函数
 */
- (void)fnInterstitialClicked;


//
//#pragma mark - 全屏广告的代理方法
//
///**
// *  广告预加载失败回调
// *  详解:当接收服务器返回的广告数据失败后调用该函数
// *   @param error 发生错误时会有相应的code和message
// */
//- (void)fnFullScreenInterstitialError:(NSError *)error;
//
///**
// *  插屏广告视图展示成功回调
// *  详解: 插屏广告展示成功回调该函数
// */
//- (void)fnFullScreenInterstitialShow;
//
///**
// *  插屏广告展示结束回调
// *  详解: 插屏广告展示结束回调该函数
// */
//- (void)fnFullScreenInterstitialClosed;
//
//
///**
// *  插屏广告点击回调
// *  详解: 插屏广告点击后回调该函数
// */
//- (void)fnFullScreenInterstitialClicked;


/**
 加赞成功之后回调的价格代理方法
 fnPriceType 是固价还是竞价
 price 当前广告价格
 thirdAdId:第三方广告位id
 */
- (void)loadSuccess:(FN_Interstitial_PRICE_TYPE)fnPriceType withPrice:(id)price withThirdAdID:(NSString *)thirdAdId;

@end

NS_ASSUME_NONNULL_END
