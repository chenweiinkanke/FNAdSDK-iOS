//
//  UbiXMediationFullScreenVideo.h
//  UbiXMediation
//
//  Created by UbiX on 2021/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class UbiXMediationFullScreenVideo;

@protocol UbiXMediationFullScreenVideoDelegate <NSObject>

// 全屏视频广告加载成功
- (void)mediationFullScreenVideoDidLoad:(UbiXMediationFullScreenVideo *)fullScreenVideo;

// 全屏视频广告展示成功
- (void)mediationFullScreenVideoDidShow:(UbiXMediationFullScreenVideo *)fullScreenVideo;

// 全屏视频广告接收失败回调
- (void)mediationFullScreenVideoDidFailToLoad:(UbiXMediationFullScreenVideo *)fullScreenVideo error:(NSError *)error;

// 全屏视频点击广告回调
- (void)mediationFullScreenVideoClick:(UbiXMediationFullScreenVideo *)fullScreenVideo;

// 全屏视频关闭广告回调
- (void)mediationFullScreenVideoClosed:(UbiXMediationFullScreenVideo *)fullScreenVideo;

@end



@interface UbiXMediationFullScreenVideo : NSObject

@property (nonatomic, copy)NSString *slotId;

@property (nonatomic, weak)id<UbiXMediationFullScreenVideoDelegate> delegate;

@property (nonatomic, assign)BOOL isReady;

- (void)loadAd;

- (void)showAd;

@end

NS_ASSUME_NONNULL_END
