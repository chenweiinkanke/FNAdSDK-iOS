//
//  FNInitalizeBanner.h
//  FNAD
//
//  Created by ALAN on 2021/5/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@protocol FNLoadBannerAdDelegate <NSObject>


@optional

/**
 *  请求广告条数据失败后调用
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)fnBannerError:(NSError *)error;


/**
 *  banner广告曝光
 */
- (void)fnBannerShow;


/**
 *  banner条被用户关闭时调用
 *  详解:用户有可能点击关闭按钮从而把广告条关闭
 */
- (void)fnBannerClosed;

/**
 * 点击回调
 */
- (void)fnBannerViewClicked;

@end

@interface FNInitalizeBanner : NSObject

/**委托对象*/
@property(nonatomic,weak) id<FNLoadBannerAdDelegate> delegate;



/// 构造方法
/// @param appId 初始化平台Id
/// @param adsId 广告位Id
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;


/**构造方法*/
/**params view   当前用于展示banner的视图*/
- (void)loadFnBannerAdWithView:(UIView *)view;
@end

NS_ASSUME_NONNULL_END
