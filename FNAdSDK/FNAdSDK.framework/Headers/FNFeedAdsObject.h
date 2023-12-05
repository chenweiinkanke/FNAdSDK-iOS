//
//  FNFeedAdsObject.h
//  FNAdSDK
//
//  Created by 黄小林 on 2023/11/2.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    FNFEEDAD_THIRD_TYPE_GDT = 4,
    FNFEEDAD_THIRD_TYPE_KS = 6,
    
} FNFEEDAD_THIRD_TYPE;


NS_ASSUME_NONNULL_BEGIN

@interface FNFeedAdsObject : NSObject

/**
 渠道的原始数据
 */
@property (nonatomic, strong)id thirdModel;

/**
 渠道
 */
@property (nonatomic, assign)FNFEEDAD_THIRD_TYPE thirdType;

/**
 注册
 */
- (void)registerContentView:(UIView *)contentView;

/**
 渠道的view
 */
- (UIView *)getView;

@end

NS_ASSUME_NONNULL_END
