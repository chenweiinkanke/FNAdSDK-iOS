#
#  Be sure to run `pod spec lint FNAdSDK-iOS.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "FNAdSDK-iOS"
  spec.version      = "5.2.0.1"
  spec.summary      = "A short description of FNAdSDK-iOS."

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  spec.description  = "FNAdSDK-iOS is an aggregate advertising SDK service provided by FuNeng."
                   

  spec.homepage     = "https://github.com/chenweiinkanke/FNAdSDK-iOS"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Licensing your code is important. See https://choosealicense.com for more info.
  #  CocoaPods will detect a license file if there is a named LICENSE*
  #  Popular ones are 'MIT', 'BSD' and 'Apache License, Version 2.0'.
  #

  spec.license      = "MIT"
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the authors of the library, with email addresses. Email addresses
  #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
  #  accepts just a name if you'd rather not provide an email address.
  #
  #  Specify a social_media_url where others can refer to, for example a twitter
  #  profile URL.
  #

  spec.author             = { "HL" => "chenwei@inkanke.com" }
  # Or just: spec.author    = "HL"
  # spec.authors            = { "HL" => "helei@cdcyi.cn" }
  # spec.social_media_url   = "https://twitter.com/HL"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If this Pod runs only on iOS or OS X, then specify the platform and
  #  the deployment target. You can optionally include the target after the platform.
  #

  # spec.platform     = :ios
  # spec.platform     = :ios, "5.0"

  #  When using multiple platforms
  spec.ios.deployment_target = "9.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the location from where the source should be retrieved.
  #  Supports git, hg, bzr, svn and HTTP.
  #

  spec.source       = { :git => "https://github.com/chenweiinkanke/FNAdSDK-iOS.git", :tag => spec.version }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  # spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  # spec.exclude_files = "Classes/Exclude"

  # spec.public_header_files = "Classes/**/*.h"


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # spec.framework  = "SomeFramework"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  spec.requires_arc = true
  spec.default_subspec = 'FNAdSDK'
  spec.xcconfig =
  {
    'OTHER_LDFLAGS' => '-ObjC'
  }
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  # spec.dependency "JSONKit", "~> 1.4"

 # 核心模块
  spec.subspec 'FNAdSDK' do |s|
    s.frameworks   = "MessageUI","iAd","ImageIO","SystemConfiguration","WebKit","MobileCoreServices", "SafariServices","CoreTelephony","CoreLocation","AVFoundation","CoreGraphics","MediaPlayer",
    "AdSupport","CoreMedia","CFNetwork", "CoreMotion","CoreServices", "StoreKit","Security","Photos"
    s.weak_framework = 'WebKit', 'UIKit', 'Foundation'
    s.libraries    = "c++", "sqlite3.0", "z", "xml2", "resolv.9"
    s.vendored_frameworks =  'FNAdSDK/FNAdSDK.framework'

  end

 # Sig ok
  spec.subspec 'FNSigAdpter' do |s|
         s.ios.deployment_target = '9.0'
         s.vendored_frameworks = 'FNAdSDK/FNSigAdpter/FNSigmobAdpter.framework'
         s.dependency 'FNAdSDK-iOS/FNAdSDK'
         s.dependency 'SigmobAd-iOS', '4.12.4'
        # s.dependency 'SigmobAd-iOS/SigmobTapjoyAdapter'
  end


 # GDT ok
  spec.subspec 'FNGDTAdpter' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks =  'FNAdSDK/FNGDTAdpter/FNGDTAdpter.framework'
     s.dependency 'FNAdSDK-iOS/FNAdSDK'
     s.dependency 'GDTMobSDK', '4.14.60'
  end


 # KS ok 
  spec.subspec 'FNKSAdpter' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks =  'FNAdSDK/FNKSAdpter/FNKSAdpter.framework'
     s.dependency 'FNAdSDK-iOS/FNAdSDK'
     s.dependency 'KSAdSDK', '3.3.32'
  end
  
  
 # CSJ ok
  spec.subspec 'FNCSJAdpter' do |s|
     s.ios.deployment_target = '11.0'
     s.vendored_frameworks =  'FNAdSDK/FNCSJAdpter/FNCSJAdpter.framework'
     s.dependency 'FNAdSDK-iOS/FNAdSDK'
     s.dependency 'Ads-CN-Beta', '6.1.0.2'
  end
  
 # BD ok 
  spec.subspec 'FNBDAdpter' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks =  'FNAdSDK/FNBDAdpter/FNBDAdpter.framework'
     s.dependency 'FNAdSDK-iOS/FNAdSDK'
     s.dependency 'BaiduMobAdSDK', '5.331'
  end
  
  
  # FNMobiAdpter ok 
   spec.subspec 'FNMobiAdpter' do |s|
      s.ios.deployment_target = '9.0'
      s.vendored_frameworks =  'FNAdSDK/FNMobiAdpter/*.framework'
      s.dependency 'FNAdSDK-iOS/FNAdSDK'
      s.dependency 'FNMobSDK', '5.4.2'
   end
  
end
