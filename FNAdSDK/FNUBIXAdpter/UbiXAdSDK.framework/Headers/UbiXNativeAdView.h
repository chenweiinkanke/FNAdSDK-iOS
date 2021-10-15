//
//  UbiXNativeAdView.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/7/14.
//

#import <UIKit/UIKit.h>
#import "UbiXNativeDataObject.h"

NS_ASSUME_NONNULL_BEGIN


@interface UbiXNativeAdView : UIView

@property (nonatomic, strong, readonly)UbiXNativeDataObject *dataObject;

- (void)registerDataObject:(UbiXNativeDataObject *)dataObject;

@end

NS_ASSUME_NONNULL_END
