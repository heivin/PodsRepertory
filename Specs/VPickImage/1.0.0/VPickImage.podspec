Pod::Spec.new do |s|
  s.name         = "VPickImage"
  s.version      = "1.0.0"
  s.summary      = "拍照或从相册选择照片"
  s.homepage     = 'https://github.com/heivin/PodsRepertory'
  s.license      = "MIT"
  s.author       = 'heivin'
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VPickImage/*.{h,m}"
  s.requires_arc = true
  s.dependency "VExtensions"
end
