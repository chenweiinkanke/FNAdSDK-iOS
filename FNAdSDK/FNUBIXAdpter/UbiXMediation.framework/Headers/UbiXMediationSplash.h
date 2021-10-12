//
//  UbiXMediationSplash.h
//  UbiXMediation
//
//  Created by UbiX on 2021/8/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class UbiXMediationSplash;

@protocol UbiXMediationSplashDelegate <NSObject>

// 开屏广告加载成功
- (void)mediationSplashDidLoad:(UbiXMediationSplash *)splash;

// 开屏广告展示成功
- (void)mediationSplashDidShow:(UbiXMediationSplash *)splash;

// 开屏广告接收失败回调
- (void)mediationSplashDidFailToLoad:(UbiXMediationSplash *)splash error:(NSError *)error;

// 开屏点击广告回调
- (void)mediationSplashDidClick:(UbiXMediationSplash *)splash;

// 开屏关闭广告回调
- (void)mediationSplashDidClosed:(UbiXMediationSplash *)splash;

@end

@interface UbiXMediationSplash : NSObject

@property (nonatomic, weak)id<UbiXMediationSplashDelegate> delegate;

@property (nonatomic, copy)NSString *slotId;

@property (nonatomic, assign)BOOL isReady;

- (void)loadAd;

- (void)showAd:(UIViewController *)controller;

@end

NS_ASSUME_NONNULL_END
