#
# Be sure to run `pod lib lint ImplusAnalyticsSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ImplusAnalytics'
  s.version          = '1.0.0'
  s.summary          = 'A short description of ImplusAnalyticsSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/mrxiaochunlin/ImplusAnalyticsSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'mrxiaochunlin' => 'lin' }
  s.source           = { :git => 'https://gitlab.implustech.com/xiaochunlin/implusanalyticssdk.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'ImplusAnalyticsSDK/GGModuleAnalysic/*.h'
  
  # s.resource_bundles = {
  #   'ImplusAnalyticsSDK' => ['ImplusAnalyticsSDK/Assets/*.png']
  # }


  s.subspec 'Messages' do |ms|
    ms.source_files = 'ImplusAnalyticsSDK/GGModuleAnalysic/Event.pbobjc.{h,m}'
    ms.requires_arc = false
    ms.dependency 'Protobuf','~>3.6.1'
   # The generated files depend on the protobuf runtime.
  end
  #s.dependency 'Protobuf'

  s.xcconfig = { "OTHER_LDFLAGS" => ["-all_load","-lz"] }

  #s.vendored_frameworks  = "ImplusAnalyticsSDK/GGModuleAnalysic/ImplusAnalytics.framework"

  s.dependency 'gRPC-ProtoRPC', '~>1.21.0'
  s.dependency 'FMDB' 
  s.dependency 'Founq_KeychainIDFA'
  s.pod_target_xcconfig = {
    # This is needed by all pods that depend on Protobuf:
    'GCC_PREPROCESSOR_DEFINITIONS' => '$(inherited) GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS=1',
    # This is needed by all pods that depend on gRPC-RxLibrary:
    'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES',
  }
end
