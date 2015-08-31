Pod::Spec.new do |s|
  s.name         = "VDBManager"
  s.version      = "1.0.1"
  s.summary      = "FMDB数据库二次封装"
  s.homepage     = "http://www.heivin.com"
  s.license      = "MIT"
  s.author       = { "Yuan" => "http://www.heivin.com" }
  s.social_media_url   = "http://weibo.com/heivin"
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files  = "Source/VDBManager/*.{h,m}"
# s.frameworks = "MapKit", "CoreLocation"
  s.libraries      = 'sqlite3.0'
  s.requires_arc = true
  s.dependency "VExtensions"
  s.dependency "FMDB"
end
