#
# Be sure to run `pod lib lint GDTMobKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#


Pod::Spec.new do |s|
  s.name             = 'GDTMobKit'
  s.version          = '0.10.0'
  s.summary          = 'A short description of GDTMobKit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
#TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/8hpv42867/GDTMobKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'GDT' => 'gdt@163.com' }
  s.source           = { :git => 'https://github.com/8hpv42867/GDTMobKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  #s.source_files = 'GDTMobKit/GDTMobSDK.xcframework/Headers/*.{h}'
  s.vendored_frameworks = 'GDTMobKit/*.xcframework'
  # s.resource_bundles = {
  #   'GDTMobKit' => ['GDTMobKit/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
