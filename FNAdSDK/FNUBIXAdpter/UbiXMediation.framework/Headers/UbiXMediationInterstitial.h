//
//  UbiXMediationInterstitial.h
//  UbiXMediation
//
//  Created by UbiX on 2021/8/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UbiXMediationInterstitial;

@protocol UbiXMediationInterstitialDelegate <NSObject>

// 插屏广告加载成功
- (void)mediationInterstitialDidLoad:(UbiXMediationInterstitial *)interstitial;

// 插屏广告接收失败回调
- (void)mediationInterstitialDidFailToLoad:(UbiXMediationInterstitial *)interstitial error:(NSError *)error;

// 插屏广告展示成功
- (void)mediationInterstitialDidShow:(UbiXMediationInterstitial *)interstitial;

// 插屏点击广告回调
- (void)interstitialClick:(UbiXMediationInterstitial *)interstitial;

// 插屏关闭广告回调
- (void)interstitialClosed:(UbiXMediationInterstitial *)interstitial;


@end

@interface UbiXMediationInterstitial : NSObject

@property (nonatomic, weak)id<UbiXMediationInterstitialDelegate> delegate;

@property (nonatomic, copy)NSString *slotId;

@property (nonatomic, assign)BOOL isReady;

- (void)loadAd;

- (void)showAd:(UIViewController *)controller;

@end

NS_ASSUME_NONNULL_END
