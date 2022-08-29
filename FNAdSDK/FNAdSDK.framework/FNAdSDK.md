[聚合SDK核心目录结构

├── [FNAdSDK   #FNAdSDK framework 目录结构
│   ├── [Category  #类别<错误、环境、通知、数据库、上报、策略、定时器>
│   │   ├── NSObject+Error.h                # 错误处理
│   │   ├── NSObject+Error.m
│   │   ├── NSObject+FNProperty.h           # 环境设置
│   │   ├── NSObject+FNProperty.m
│   │   ├── NSObject+Notification.h         # 通知
│   │   ├── NSObject+Notification.m
│   │   ├── NSObject+OperationalSqlite.h    # 数据库
│   │   ├── NSObject+OperationalSqlite.m
│   │   ├── NSObject+RequestReport.h        # 上报请求
│   │   ├── NSObject+RequestReport.m
│   │   ├── NSObject+StrategyInitalizeSDK.h # 策略
│   │   ├── NSObject+StrategyInitalizeSDK.m
│   │   ├── NSObject+TimeOut.h              #定时器
│   │   ├── NSObject+TimeOut.m
│   │   ├── UIViewController+FNSDKLoadAd.h  #目前已经废弃
│   │   └── UIViewController+FNSDKLoadAd.m
│   ├── [Class # 广告统一调用核心类<开屏、插屏、激励视屏、横幅、信息流>
│   │   ├── [BannerAds
│   │   │   ├── FNInitalizeBanner.h            # Banner初始化
│   │   │   └── FNInitalizeBanner.m
│   │   ├── FNADManagers.h                     # FNAdSDK初始化
│   │   ├── FNADManagers.m
│   │   ├── [FNFeedAds
│   │   │   ├── FNOnlyFeedAds.h                # 信息流初始化
│   │   │   └── FNOnlyFeedAds.m
│   │   ├── FNInitalizeSDK.h                   # 各渠道平台初始化
│   │   ├── FNInitalizeSDK.m
│   │   ├── [InterstitialAds
│   │   │   ├── FNInitalizeInterstitial.h      # 插屏初始化
│   │   │   ├── FNInitalizeInterstitial.m
│   │   │   └── FNLoadInterstitialAdDelegate.h # 插屏代理
│   │   ├── [RewardVideoAds
│   │   │   ├── FNInitalizeRardVideo.h         # 激励视屏
│   │   │   ├── FNInitalizeRardVideo.m
│   │   │   └── FNLoadReardVideoAdDelegate.h   # 激励视屏代理
│   │   └── [SplashAds
│   │       ├── FNInitializeSplash.h           # 开屏初始化
│   │       ├── FNInitializeSplash.m
│   │       └── FNLoadSplashAdDelegate.h       # 开屏代理
│   ├── FNAdPrefixHeader.pch                   # 头文件引入
│   ├── FNAdSDK.h                              # SDKpublic头文件
│   ├── FNAdSDK.md
│   ├── Info.plist
│   ├── [Model #数据model
│   │   ├── AdType.h                           # 策略一级级数据层
│   │   ├── AdType.m
│   │   ├── AdTypeMiddleNum.h                  # 策略二级数据层
│   │   ├── AdTypeMiddleNum.m
│   │   ├── AdTypeNum.h                        # 策略详情model
│   │   ├── AdTypeNum.m
│   │   ├── InitFNAd.h                         # 定时上报model
│   │   └── InitFNAd.m
│   ├── [NetWork
│   │   ├── FNNativeNetworking.h               # 封装AFNetWorking
│   │   ├── FNNativeNetworking.m
│   │   ├── FNURLHeader.h                      # 请求数据接口头
│   │   ├── GetAdTypeRequest.h                 # 请求数据方法
│   │   └── GetAdTypeRequest.m
│   ├── [SDK
│   │   └── [FNModel     # 请求数据格式解析
│   │       ├── [01;32mFNClassInfo.h[00m
│   │       ├── [01;32mFNClassInfo.m[00m
│   │       ├── [01;32mFNModel.h[00m
│   │       ├── [01;32mNSObject+FNModel.h[00m
│   │       └── [01;32mNSObject+FNModel.m[00m
│   ├── [SDKStrategypb.proto   #请求数据pb加密类
│   ├── Sdkstrategypb.pbobjc.h
│   ├── Sdkstrategypb.pbobjc.m
│   ├── [Tools
│   │   ├── FNGetCurrentController.h      # 获取当前rootVC
│   │   ├── FNGetCurrentController.m
│   │   ├── FNGetIphoneInfo.h             # header参数
│   │   ├── FNGetIphoneInfo.m
│   │   ├── FNPersistentDefine.h          # 宏定义
│   │   ├── FNSingletonSDK.h              # 数据处理      
│   │   ├── FNSingletonSDK.m
│   │   ├── FNUserDefaultsName.h          # 暂未使用
│   │   ├── FNUserDefaultsName.m
│   │   ├── SqliteDB.h                    # 数据库封装
│   │   └── SqliteDB.m
│   └── VersionRecord.h
├── FNAdSDK.md
└── [01;34mFNAdSDK.xcodeproj[00m
    ├── project.pbxproj
    ├── [01;34mproject.xcworkspace[00m
    │   ├── contents.xcworkspacedata
    │   ├── [01;34mxcshareddata[00m
    │   │   └── IDEWorkspaceChecks.plist
    │   └── [01;34mxcuserdata[00m
    │       └── [01;34mhelei.xcuserdatad[00m
    │           └── UserInterfaceState.xcuserstate
    ├── [01;34mxcshareddata[00m
    │   └── [01;34mxcschemes[00m
    │       └── FNAdSDK.xcscheme
    └── [01;34mxcuserdata[00m
        └── [01;34mhelei.xcuserdatad[00m
            └── [01;34mxcschemes[00m
                └── xcschememanagement.plist

23 directories, 77 files
