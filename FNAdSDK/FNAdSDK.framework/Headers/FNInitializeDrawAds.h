//
//  FNInitializeDrawAds.h
//  FNAdSDK
//
//  Created by ALAN on 2022/2/22.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    FNDRAWAD_THIRD_TYPE_GDT = 4,
    FNDRAWAD_THIRD_TYPE_KS = 6,
    
} FNDRAWAD_THIRD_TYPE;

NS_ASSUME_NONNULL_BEGIN

@protocol FNInitializeDrawAdsDelegate;

@interface FNInitializeDrawAds : NSObject

@property (nonatomic, weak) id<FNInitializeDrawAdsDelegate> delegate;


/// 初始化SDK
/// @param appId 由平台分配初始化平台ID
/// @param adsId 由平台分配广告位ID
- (instancetype)initWithAppId:(NSString *)appId adsId:(NSString *)adsId;

/// 加载广告
/// @param count 加载数量,最大条数为5
- (void)loadFnAdDataWithCount:(NSInteger)count;


@end

@protocol FNInitializeDrawAdsDelegate <NSObject>

@optional
- (void)fndrawAdsManagerSuccessToLoadDrawAds:(NSArray *_Nullable)drawAdDataArray;
- (void)fndrawAdsManagerdidFailWithError:(NSError *_Nullable)error;

@end

NS_ASSUME_NONNULL_END
