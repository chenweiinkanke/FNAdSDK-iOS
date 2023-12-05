//
//  FNVideoFeed.h
//  FNAdSDK
//
//  Created by ALEN on 2023/8/1.
//

#import <Foundation/Foundation.h>


@protocol FNVideoFeedDelegate <NSObject>


/**
 *  请求广告条数据失败后调用
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)fnVideoFeedError:(NSError *_Nonnull)error;


/**
 *  VideoFeed广告曝光
 */
- (void)fnVideoFeedShow;


/**
 *  VideoFeed条被用户关闭时调用
 *  详解:用户有可能点击关闭按钮从而把广告条关闭
 */
- (void)fnVideoFeedClosed;

/**
 * 点击回调
 */
- (void)fnVideoFeedViewClicked;

@end

NS_ASSUME_NONNULL_BEGIN

@interface FNVideoFeed : NSObject


@property (nonatomic, weak)id<FNVideoFeedDelegate> delegate;

/**
 初始化
 */
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;

/**
 加载视频流
 */
- (void)loadFnVideoFeedAdWithController:(UIViewController *)controller;


@end



NS_ASSUME_NONNULL_END
