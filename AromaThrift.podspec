Pod::Spec.new do |aroma|
  aroma.name             = "AromaThrift"
  aroma.module_name      = 'AromaThrift'
  aroma.version          = "1.8"
  aroma.summary          = "The Cocoa Bindings for Aroma."
  aroma.homepage         = "https://github.com/RedRoma/aroma-thrift"
  aroma.license          = "Code is Licensed under Apache 2.0"
  aroma.author           = { "SirWellington" => "wellington@redroma.tech" }
  aroma.source           =
  {
       :path => "src/main/cocoa/"
  }
  aroma.source_files = "src/main/cocoa/*.{h,m}"
  # aroma.resources = 'Pod/Assets/*'

  aroma.platform     = :ios, '8.0', :osx, '10.8'
  aroma.requires_arc = false

  aroma.dependency 'Thrift', '~> 0.9.3'
  aroma.prepare_command = <<-CMD
     find Pods -regex '.*/*/AromaThrift/.*\\.h' -print0 | xargs -0 sed -i  '' 's_\\(.*import\\) \\"\\(T.*h.*\\)\\"_\\1 <Thrift/\\2>_'
    CMD
end
