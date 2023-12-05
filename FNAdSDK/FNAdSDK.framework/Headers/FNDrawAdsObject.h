//
//  FNDrawAdsObject.h
//  FNAdSDK
//
//  Created by ALEN on 2023/8/21.
//

#import <Foundation/Foundation.h>
#import "FNInitializeDrawAds.h"

NS_ASSUME_NONNULL_BEGIN

@interface FNDrawAdsObject : NSObject


/**
 返回的渠道数据
 */
@property (nonatomic, strong)id thirdModel;

/**
 返回的渠道
 */
@property (nonatomic, assign)FNDRAWAD_THIRD_TYPE thirdType;

/**
 注册
 */
- (void)registerContentView:(UIView *)contentView withVC:(UIViewController *)VC;


/**
 解绑
 */
- (void)unregisterView;


@end

NS_ASSUME_NONNULL_END
