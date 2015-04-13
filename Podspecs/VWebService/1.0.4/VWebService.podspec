Pod::Spec.new do |s|
  s.name         = "VWebService"
  s.version      = "1.0.4"
  s.summary      = "网络请求模块，方便项目调用，使用的是AFNetworking2.0,\n，增加了raw和data-form两种请求方式,修改URL"
  s.homepage     = 'https://github.com/heivin/PodsRepertory'
  s.license      = "MIT"
  s.author       = 'heivin'
  s.platform     = :ios, "6.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VWebService/*.{h,m}"
  s.resources    = "Source/VWebService/*.{plist,txt}"
  s.requires_arc = true
  s.dependency "VExtensions"
  s.dependency "AFNetworking", "~> 2.0"
  s.dependency "JSONModel"
end
