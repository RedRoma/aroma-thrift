Pod::Spec.new do |aroma|
  aroma.name             = "AromaThrift"
  aroma.module_name      = 'AromaThrift'
  aroma.version          = "1.9"
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

  aroma.dependency 'ThriftLib', '~> 0.9.3'

  aroma.prepare_command = <<-CMD
    find src/main/cocoa/ -regex '.*.h' -print0 | xargs -0 sed -i  '' 's_.*import.*\\"TProtocol.h\\"_@import ThriftLib;_'
    find src/main/cocoa/ -regex '.*.h' -print0 | xargs -0 sed -i  '' 's_.*import.*T.*.h\\"__'

    CMD
end
