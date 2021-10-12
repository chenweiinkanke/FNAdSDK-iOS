//
//  FNInitializeSplash.h
//  FNAD
//
//  Created by ALAN on 2021/5/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FNLoadSplashAdDelegate.h"


NS_ASSUME_NONNULL_BEGIN

@interface FNInitializeSplash : NSObject

/**自定义底部视图*/
@property(nonatomic,strong) UIView *bottomView;

/**委托对象*/
@property(nonatomic,weak) id<FNLoadSplashAdDelegate> delegate;

/**获取是否需要logo状态   1为不带logo    2为带logo*/
@property (nonatomic,assign)NSInteger isLogoType;

/**初始化当前类*/
+ (instancetype)shareFnSplash;

/// 构造方法
/// @param appId 联系商务分配appId
/// @param adsId 联系商务分配adsId
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;


/**初始化SDK*/
/**params appid 由平台分配初始化平台ID*/
/**params adsID 由平台分配广告位ID*/
- (void)loadFnSplashAd:(NSString *)appid   ADS:(NSString *)adsID  ;

@end

NS_ASSUME_NONNULL_END
