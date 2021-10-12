//
//  UbiXAdBase.h
//  UbiXAdSDK
//
//  Created by UbiX on 2021/5/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
#define UbiXCheckNSNull(object) ([object isKindOfClass:[NSNull class]]) ? nil : object

@interface UbiXAdBase : NSObject

@property (nonatomic, assign)BOOL enableLog;

+ (NSString *)getBundleName;

+ (NSString *)getUserAgent;

+ (NSString *)getIPAddress;

+ (NSString *)getIdfa;

+ (NSString *)getIdfv;

+ (NSString *)getSystemLanguage;

+ (NSString *)getCountryCode;

+ (NSString *)getNetworkCode;

+ (NSString *)getLocaleCountryCode;

+ (NSString *)getLocaleLanguageCode;

+ (NSString *)getDeviceModel;

+ (NSString *)getDeviceType;

+ (NSString *)getBase64Encode:(NSString*)data;

+ (NSString *)getOSVersion;

+ (NSString *)getCPUType;

+ (NSString *)getDeviceInfo;

+ (NSString *)getDeviceName;

+ (NSDate *)stringToDate:(NSString *)string;

+ (NSString *)dateToString:(NSDate *)date;

+ (NSString *)md5:(NSString *)str;

+ (NSString *)getBundlePath:(NSString *)assetName;

+ (unsigned long)getActiveProcessorCount;

+ (unsigned long long)getMemoryUsage;

+ (float)getTotalDiskSpace;

+ (float)getFreeDiskSpace;

+ (NSInteger)getCurrentNetState;

+ (NSString *)getBootUpTime;

+ (NSString *)getBootUpTimeStamp;

+ (int)getPhysicalCoresCount;

+ (int)getBatteryLevel;

+ (NSUInteger)getIDFAAuthStatus;

+ (unsigned long long)getPhysicalMemory;

+ (unsigned long long)getAvailableMemorySize;

+ (void)copyToClipboard:(NSString *)content;

+ (UIViewController *)getCurrentVC;

+ (int)creativeOrientation;

+ (NSDate *)dateFromString:(NSString *)dateTimeStr;

+ (BOOL)jailbreak;

+ (BOOL)isNum:(NSString *)checkedNumString;

+ (void)ubixLog:(NSString *)log;

@end

NS_ASSUME_NONNULL_END
