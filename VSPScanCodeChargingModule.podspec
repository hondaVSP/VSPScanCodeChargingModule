#
# Be sure to run `pod lib lint VSPScanCodeChargingModule.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'VSPScanCodeChargingModule'
  s.version          = '0.1.3'
  s.summary          = 'VSPScanCodeChargingModule'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
VSPScanCodeChargingModule 扫码充电
                       DESC

  s.homepage         = 'https://github.com/hondaVSP/VSPScanCodeChargingModule'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '445878662@qq.com' => 'gongm@reachauto.com' }
  s.source           = { :git => 'https://github.com/hondaVSP/VSPScanCodeChargingModule.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.requires_arc = true
  s.vendored_frameworks = 'VSPScanCodeChargingModule.framework'

  s.static_framework = true
  s.resource = 'VSPScanCodeChargingModule.bundle'


  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => '-lObjC',
    'VALID_ARCHS' => 'x86_64 armv7 arm64'
  }

  s.frameworks = 'UIKit', 'Foundation'
  s.dependency 'YYKit'
  s.dependency 'HondaConnectSDK'
  s.dependency 'SDWebImage'
  s.dependency 'JSONModel'
  s.dependency 'HCPayModule'
  
end
