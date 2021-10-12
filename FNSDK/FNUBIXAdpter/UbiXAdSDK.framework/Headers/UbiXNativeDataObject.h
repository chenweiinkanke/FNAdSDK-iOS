//
//  UbiXNativeDataObject.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/7/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UbiXNativeDataObject : NSObject

//信息流标题
@property (nonatomic, copy)NSString *title;

//广告来源
@property (nonatomic, copy)NSString *source;

//广告图片
@property (nonatomic, strong)NSArray <NSString *>*imageURLs;

@end

NS_ASSUME_NONNULL_END
