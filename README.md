Aroma Thrift
==============================================

[<img src="https://raw.githubusercontent.com/RedRoma/aroma/develop/Graphics/Logo.png" width="300">](https://github.com/RedRoma/aroma)

<!--
[<p align="center"><img src="https://raw.githubusercontent.com/RedRoma/aroma/develop/Graphics/Logo.png" width="300"></p>](https://github.com/RedRoma/aroma)
-->

[![Build Status](http://jenkins.sirwellington.tech/job/Aroma%20Thrift/badge/icon)](http://jenkins.sirwellington.tech/job/Aroma%20Thrift/)

The Model and Service Definitions for Aroma defined in Thrift

# Download

To use, simply add the following maven dependency.

## Release
```xml
<dependency>
	<groupId>tech.aroma</groupId>
	<artifactId>aroma-thrift</artifactId>
	<version>1.7</version>
</dependency>
```

## Snapshot

>First add the Snapshot Repository
```xml
<repository>
	<id>ossrh</id>
    <url>https://oss.sonatype.org/content/repositories/snapshots</url>
</repository>
```

```xml
<dependency>
	<groupId>tech.aroma</groupId>
	<artifactId>aroma-thrift</artifactId>
	<version>1.8-SNAPSHOT</version>
</dependency>
```

# [Javadocs](http://www.javadoc.io/doc/tech.aroma/aroma-thrift/)

# Requirements

+ Java 8
+ Maven
+ Thrift 0.9.3 Compiler

# Building
This project builds with maven. Just run a `mvn clean install` to compile and install to your local maven repository. As long as `thrift` is on your `PATH` it should build just fine.

# Release Notes

> Coming Soon
