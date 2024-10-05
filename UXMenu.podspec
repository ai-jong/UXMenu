#
# Be sure to run `pod lib lint APod.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#https://github.com/ai-jong/MyCloud


Pod::Spec.new do |spec|
  spec.name         = 'UXMenu'
  spec.version      = '1.0.0'
  spec.summary      = 'A short description of UXMenu.'
  spec.description  = 'A longer description of UXMenu.'
  spec.homepage     = 'https://yourframeworkhomepage.com'
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }
  spec.author       = { 'Your Name' => 'john.w.blaine@gmail.com' }
  spec.source       = { :git => 'https://github.com/ai-jong/UXMenu.git', :tag => spec.version.to_s }
  spec.platform     = :ios, '14.0'
  spec.ios.deployment_target = '14.0'

  spec.vendored_frameworks = 'UXMenu.xcframework'

  spec.pod_target_xcconfig = {
    'ENABLE_BITCODE' => 'NO'
  }
end
