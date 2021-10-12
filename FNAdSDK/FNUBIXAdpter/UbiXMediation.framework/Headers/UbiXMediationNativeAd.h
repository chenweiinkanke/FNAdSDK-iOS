
#import <Foundation/Foundation.h>

@protocol UbiXMediationNativeAdCustomEvent;

NS_ASSUME_NONNULL_BEGIN

/// The OMNative represents ad metadata to allow you to construct custom ad views.
@interface UbiXMediationNativeAd : NSObject

/// Typed access to the ad title.
@property (nonatomic, copy) NSString *title;

/// Typed access to the body text, usually a longer description of the ad.
@property (nonatomic, copy) NSString *body;

/// Typed access to the ad icon.
@property (nonatomic, copy) NSString *iconUrl;

/// Typed access to the call to action phrase of the ad.
@property (nonatomic, copy) NSString *callToAction;

/// Typed access to the ad star rating.
@property (nonatomic, assign) double rating;

@property (nonatomic, assign) BOOL rendering;//待修改 private

@property (nonatomic, strong) id<UbiXMediationNativeAdCustomEvent> mediatedAd;//待修改 private

@property (nonatomic, assign) BOOL impr;

- (instancetype)initWithMediatedAd:(id<UbiXMediationNativeAdCustomEvent>)mediatedAd;

@end

NS_ASSUME_NONNULL_END
