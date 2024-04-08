//
//  FNLoadSplashAdDelegate.h
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
    FN_BID_TYPE = 1,
    /**
     固价
     */
    FN_GP_TYPE,
} FN_SPLASH_PRICE_TYPE;

@protocol FNLoadSplashAdDelegate <NSObject>


/**
 *  开屏广告成功展示
 */
- (void)fnSplashShow;


/**
 *  开屏广告失败（最终请求失败）
 */
- (void)fnSplashError:(NSError *)error;


/**
 *  开屏广告关闭回调
 */
- (void)fnSplashClosed;


/**
 *  开屏广告点击回调
 */
- (void)fnSplashClicked;


/**
 加赞成功之后回调的价格代理方法
 fnPriceType 是固价还是竞价
 price 当前广告价格
 thirdAdId:第三方广告位id
 */
- (void)loadSuccess:(FN_SPLASH_PRICE_TYPE)fnPriceType withPrice:(id)price withThirdAdID:(NSString *)thirdAdId;


@end

NS_ASSUME_NONNULL_END
