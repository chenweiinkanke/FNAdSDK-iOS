//
//  FNAdSDK.h
//  FNAdSDK
//
//  Created by ALAN on 2021/8/4.
//

#import <Foundation/Foundation.h>

//! Project version number for FNAdSDK.
FOUNDATION_EXPORT double FNAdSDKVersionNumber;

//! Project version string for FNAdSDK.
FOUNDATION_EXPORT const unsigned char FNAdSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FNAdSDK/PublicHeader.h>
#import <FNAdSDK/FNADManagers.h>
#import <FNAdSDK/NSObject+FNProperty.h>

//splash
#import <FNAdSDK/FNLoadSplashAdDelegate.h>
#import <FNAdSDK/FNInitializeSplash.h>
// interstitial
#import <FNAdSDK/FNLoadInterstitialAdDelegate.h>
#import <FNAdSDK/FNInitalizeInterstitial.h>
#import <FNAdSDK/FNInitalizeInterstitialFullScreen.h>

//rewardVideo
#import <FNAdSDK/FNLoadReardVideoAdDelegate.h>
#import <FNAdSDK/FNInitalizeRardVideo.h>
//banner
#import <FNAdSDK/FNInitalizeBanner.h>
//feed
#import <FNAdSDK/FNOnlyFeedAds.h>
// drawAd
#import <FNAdSDK/FNInitializeDrawAds.h>

//cpuChannel
#import <FNAdSDK/FNInitalizeCpuChannel.h>

//#import <FNAdSDK/FNDrawRewardAds.h>



