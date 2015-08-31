Pod::Spec.new do |s|
  s.name         = "VDevice"
  s.version      = "1.0.0"
  s.summary      = "获取设备相关参数信息"
  s.homepage     = 'https://github.com/heivin/PodsRepertory'
  s.license      = "MIT"
  s.author       = 'heivin'
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VDevice/*.{h,m}","Source/VDevice/Utilities/*.{h,m}"
  s.framework  = "CoreTelephony"
  s.requires_arc = true
end
