//
//  FNReportUserInfoModel.h
//  FNAdSDK
//
//  Created by ALEN on 2023/6/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FNReportUserInfoModel : NSObject


/**用户的userid*/
@property(nonatomic, copy) NSString *userIdentifier;


/**可扩展参数*/
@property(nonatomic, copy) NSString *extraInfo;

/**
 appid
 */
@property(nonatomic, copy) NSString *fnAppId;


/**
 adsid
 */
@property(nonatomic, copy) NSString *fnAdsId;


@end

NS_ASSUME_NONNULL_END
