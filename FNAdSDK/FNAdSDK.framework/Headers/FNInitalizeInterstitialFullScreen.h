//
//  FNInitalizeInterstitialFullScreen.h
//  FNAdSDK
//
//  Created by ALAN on 2022/3/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@protocol FNInitalizeInterstitialFullScreenDelegate <NSObject>

/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 *   @param error 发生错误时会有相应的code和message
 */
- (void)fnFullScreenInterstitialError:(NSError *)error;

/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)fnFullScreenInterstitialShow;

/**
 *  插屏广告展示结束回调
 *  详解: 插屏广告展示结束回调该函数
 */
- (void)fnFullScreenInterstitialClosed;


/**
 *  插屏广告点击回调
 *  详解: 插屏广告点击后回调该函数
 */
- (void)fnFullScreenInterstitialClicked;


@end

@interface FNInitalizeInterstitialFullScreen : NSObject


///  委托对象
@property (nonatomic, weak) id<FNInitalizeInterstitialFullScreenDelegate> delegate;


/// 构造方法
/// @param appId 初始化平台id
/// @param adsId 广告位
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;

/// 插屏视频全屏广告加载展示
- (void)loadFnInterstitialFullScreenAd;

@end

NS_ASSUME_NONNULL_END
