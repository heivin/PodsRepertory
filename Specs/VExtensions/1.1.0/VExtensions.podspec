Pod::Spec.new do |s|
  s.name         = "VExtensions"
  s.version      = "1.1.0"
  s.summary      = "扩展类，常用的宏定义和基本扩展"
  s.homepage     = 'https://github.com/heivin/PodsRepertory'
  s.license      = "MIT"
  s.author       = 'heivin'
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VExtensions/*.{h,m}"
  s.requires_arc = true
end
