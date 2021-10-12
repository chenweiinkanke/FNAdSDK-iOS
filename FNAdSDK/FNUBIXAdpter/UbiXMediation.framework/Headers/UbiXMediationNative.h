//
//  UbiXMediationNative.h
//  UbiXMediation
//
//  Created by UbiX on 2021/9/7.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UbiXMediationNativeAd.h"

typedef enum {
    UbiXMediationNativeRenderTypeBoth                    = 0,   /*模板渲染+自渲染*/
    UbiXMediationNativeRenderTypeSelfRender              = 1,   /*自渲染*/
    UbiXMediationNativeRenderTypeTemplate                = 2,   /*模板渲染*/
}UbiXMediationNativeRenderType;

NS_ASSUME_NONNULL_BEGIN

@class UbiXMediationNative;

@protocol UbiXMediationNativeDelegate <NSObject>

// 信息流广告加载成功
- (void)mediationNativeDidLoad:(UbiXMediationNative *)nativeAd templateView:(UIView *)view;

- (void)mediationNativeDidLoad:(UbiXMediationNative *)nativeAd dataObject:(UbiXMediationNativeAd *)dataObject;


// 信息流广告接收失败回调
- (void)mediationNativeDidFailToLoad:(UbiXMediationNative *)nativeAd error:(NSError *)error;

// 信息流广告展示成功
- (void)mediationNativeDidShow:(UbiXMediationNative *)nativeAd;

// 信息流点击广告回调
- (void)mediationNativeDidClick:(UbiXMediationNative *)nativeAd;

// 信息流移除广告回调
- (void)mediationNativeDidClose:(UbiXMediationNative *)nativeAd;


@end

@interface UbiXMediationNative : NSObject

@property (nonatomic, copy)NSString *slotId;

@property (nonatomic, assign)UbiXMediationNativeRenderType preferRenderType;

@property (nonatomic, weak)id<UbiXMediationNativeDelegate> delegate;

@property (nonatomic, weak)UIViewController *controller;

- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
