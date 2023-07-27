#
#  Be sure to run `pod spec lint NoxUniqueIdSDK.podspec' to ensure this is a
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

  spec.name         = "NoxUniqueIdSDK"
  spec.version      = "1.0.0001"
  spec.summary      = "An unique device id SDK provided Nox."
  spec.homepage     = "https://github.com/NoxmobiSDK/NoxmobiUniqueId"
  spec.license      = "MIT"
  spec.author       = { "lunxiangyun" => "luanxiangyun@noxgroup.com" }
  spec.platform     = :ios, "11.0"
  spec.source       = { :git => "https://github.com/NoxmobiSDK/NoxmobiUniqueId.git", :tag => "#{spec.version}" }
  spec.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  spec.requires_arc = true

  spec.subspec 'NoxUniqueIdSDK' do |ss|
    ss.source_files = "NoxUniqueIdSDK.framework/Headers/*.{h}"
    ss.ios.vendored_frameworks = 'NoxUniqueIdSDK.framework'
    ss.dependency 'AFNetworking'
    ss.dependency 'GTMBase64'
    ss.dependency 'Firebase/Analytics'
    ss.dependency 'Firebase/RemoteConfig'
    ss.dependency 'Firebase/Crashlytics'
  end

end
