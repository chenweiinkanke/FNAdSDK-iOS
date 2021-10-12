//
//  UbiXNativeView.h
//  UbiXMediation
//
//  Created by UbiX on 2021/9/7.
//
#import <UIKit/UIKit.h>
#import "UbiXMediationNative.h"
#import "UbiXMediationNativeAd.h"
NS_ASSUME_NONNULL_BEGIN

@interface UbiXNativeView : UIView

@property (nonatomic, strong) UbiXMediationNativeAd *nativeAd;
@property (nonatomic, strong) UIView *mediaView;


- (instancetype)initWithFrame:(CGRect)frame;

- (void)setClickableViews:(NSArray<UIView *> *)clickableViews; //for Facebook TencentAd

@end

NS_ASSUME_NONNULL_END
