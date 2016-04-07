Pod::Spec.new do |thrift|
  thrift.name             = "Thrift"
  thrift.module_name      = 'Thrift'
  thrift.version          = "0.9.3"
  thrift.summary          = "Apache Thrift Cocoa Runtime."
  thrift.homepage         = "http://thrift.apache.org/"
  thrift.license          = "Apache Software License 2.0"
  thrift.author           = "Apache Software Foundation"
  thrift.source           =
  {
       :git => 'https://github.com/apache/thrift.git',
       :tag => '0.9.3'
  }
  thrift.source_files = "lib/cocoa/src/**/*.{h,m}"
  thrift.header_dir = ""
  # thrift.resources = 'Pod/Assets/*'

  thrift.platform     = :ios, '8.0', :osx, '10.8'
  thrift.requires_arc = false

end
