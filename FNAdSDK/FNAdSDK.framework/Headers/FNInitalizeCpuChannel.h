//
//  FNInitalizeCpuChannel.h
//  FNAdSDK
//
//  Created by ALEN on 2022/3/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FNInitalizeCpuChannelDelegate;

@interface FNInitalizeCpuChannel : NSObject


@property (nonatomic, weak) id<FNInitalizeCpuChannelDelegate> delegate;

/**初始化SDK*/
/**params appId 由平台分配初始化平台ID*/
/**params adsId 由平台分配广告位ID*/
- (instancetype)initWithPlacementId:(NSString *)appId adsId:(NSString *)adsId;


/// 获取资讯URL
/// @param channelId 频道ID
/// @param urlStr 媒体URL
- (void)loadCpuInfoUrlWithChannelId:(NSString *)channelId;

- (void)viewRegisterViewForeInteractionWithAdArray:(NSMutableArray *)dataArray withIndexPath:(NSIndexPath *)indexPath withArray:(NSArray *)indexArray;
@end


@protocol FNInitalizeCpuChannelDelegate<NSObject>
@optional
- (void)fnCpuInfoUrldidFailWithError:(NSError *_Nullable)error;

- (void)fnCpuInfoUrldidLoadSuccessWithDataSouceArray:(NSMutableArray *)fnCpuDataSouceArray withCellHArry:(NSMutableArray *)fnCpuCellHArray withDataViewArray:(NSMutableArray *)fnCpuDataViewArray;



@end

NS_ASSUME_NONNULL_END
