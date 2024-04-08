//
//  FNInitalizeInterstitialFullScreen.h
//  FNAdSDK
//
//  Created by ALAN on 2022/3/3.
//

#import <Foundation/Foundation.h>
#import "FNInterstitialFullScreenAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@interface FNInitalizeInterstitialFullScreen : NSObject


///  委托对象
@property (nonatomic, weak) id<FNInterstitialFullScreenAdDelegate> delegate;


/// 构造方法
/// @param appId 初始化平台id
/// @param adsId 广告位
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;

/// 插屏视频全屏广告加载展示
- (void)loadFnInterstitialFullScreenAd;

@end

NS_ASSUME_NONNULL_END
