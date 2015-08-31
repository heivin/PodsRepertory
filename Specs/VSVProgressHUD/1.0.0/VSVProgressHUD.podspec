Pod::Spec.new do |s|
  s.name         = "VSVProgressHUD"
  s.version      = "1.0.0"
  s.summary      = "修改了的SVProgressHUD"
  s.homepage     = "http://www.heivin.com"
  s.license      = "MIT"
  s.author       = { "heivin" => "http://www.heivin.com" }
  s.social_media_url   = "http://weibo.com/heivin"
  s.platform     = :ios, "5.0"
  s.source       = { :git => 'https://github.com/heivin/PodsRepertory.git' }
  s.source_files = "Source/VSVProgressHUD/*"
  s.resources    = "Source/VSVProgressHUD/*"
  s.requires_arc = true
end
