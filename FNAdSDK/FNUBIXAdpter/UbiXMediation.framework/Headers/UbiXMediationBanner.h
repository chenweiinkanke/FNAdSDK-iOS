//
//  UbiXMediationBanner.h
//  UbiXMediation
//
//  Created by UbiX on 2021/8/26.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@class UbiXMediationBanner;

@protocol UbiXMediationBannerDelegate <NSObject>

// banner广告加载成功
- (void)mediationBannerDidLoad:(UbiXMediationBanner *)banner;

// banner广告展示成功
- (void)mediationBannerDidShow:(UbiXMediationBanner *)banner;

// banner广告接收失败回调
- (void)mediationBannerDidFailToLoad:(UbiXMediationBanner *)banner error:(NSError *)error;

// banner点击广告回调
- (void)mediationBannerDidClick:(UbiXMediationBanner *)banner;

// banner移除广告回调
- (void)mediationBannerDidClose:(UbiXMediationBanner *)banner;


@end

@interface UbiXMediationBanner : NSObject

@property (nonatomic, copy)NSString *slotId;

@property (nonatomic, weak)id<UbiXMediationBannerDelegate> delegate;

@property (nonatomic, assign)CGRect frame;

- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
