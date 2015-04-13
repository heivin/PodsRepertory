Pod::Spec.new do |s|
  s.name         = "VFileManager"
  s.version      = "1.0.0"
  s.summary      = "file manager"
  s.homepage     = 'https://github.com/heivin/PodsRepertory'
  s.license      = "MIT"
  s.author       = 'heivin'
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VFileManager/*.{h,m}"
  s.requires_arc = true
 # s.dependency "VDevice"
end
