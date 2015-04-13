Pod::Spec.new do |s|
  s.name         = "VAppstoreComment"
  s.version      = "1.0.0"
  s.summary      = "对APP进行评价，给好评提示之类的"
  s.homepage     = 'https://github.com/heivin/PodsRepertory'
  s.license      = "MIT"
  s.author       = 'heivin'
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VAppstoreComment/*.{h,m}"
  s.requires_arc = true
  s.dependency "VExtensions"
end
