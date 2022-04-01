//
//  FNInitalizeInterstitial.h
//  FNAD
//
//  Created by ALAN on 2021/5/11.
//

#import <Foundation/Foundation.h>
#import "FNLoadInterstitialAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface FNInitalizeInterstitial : NSObject

/**
 *  委托对象
 */
@property(nonatomic,weak) id<FNLoadInterstitialAdDelegate> delegate;



/// 构造方法
/// @param appId 初始化平台id
/// @param adsId 广告位
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;


/// 加载并显示
- (void)loadFnInterstitialAd;


@end

NS_ASSUME_NONNULL_END
