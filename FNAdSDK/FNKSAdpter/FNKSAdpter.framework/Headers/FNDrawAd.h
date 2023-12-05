//
//  FNDrawAd.h
//  FNKSAdpter
//
//  Created by ALAN on 2022/2/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>




NS_ASSUME_NONNULL_BEGIN

@protocol FNDrawAdDelegate;

@interface FNDrawAd : NSObject

@property (nonatomic, weak) UIViewController *rootViewController;

//是否开启声音
@property (nonatomic, assign) BOOL videoSoundEnabled;
@property (nonatomic, weak) id<FNDrawAdDelegate> delegate;

- (void)registerContainer:(UIView *)containerView;
- (void)unregisterView;


@end

@protocol FNDrawAdDelegate <NSObject>
@optional
///广告展示
- (void)drawAdViewWillShow;
///广告点击
- (void)drawAdDidClick;
///广告跳转落地页
- (void)drawAdDidShowOtherController;
///广告关闭落地页
- (void)drawAdDidCloseOtherController;

///视频开始播放
- (void)drawAdVideoDidStart;
///视频暂停播放
- (void)drawAdVideoDidPause;
///视频恢复播放
- (void)drawAdVideoDidResume;
///视频停止播放，finished=是否播放完成
- (void)drawAdVideoDidStopFinished:(BOOL)finished;
///视频播放失败，error=失败原因
- (void)drawAdVideoDidFailedError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
