Pod::Spec.new do |s|
  s.name         = "VGPS"
  s.version      = "1.0.1"
  s.summary      = "GPS定位"
  s.homepage     = "http://www.heivin.com"
  s.license      = "MIT"
  s.author       = { "heivin" => "http://www.heivin.com" }
  s.social_media_url   = "http://weibo.com/heivin"
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files  = "Source/VGPS/*.{h,m}"
  s.frameworks = "MapKit", "CoreLocation"
  s.requires_arc = true
  s.dependency "VExtensions"
end
