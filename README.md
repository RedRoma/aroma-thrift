Aroma Thrift
==============================================

[<img src="https://raw.githubusercontent.com/RedRoma/aroma/develop/Graphics/Logo.png" width="300">](http://aroma.redroma.tech/)


[![Build Status](http://jenkins.redroma.tech/job/Aroma%20Thrift/badge/icon)](http://jenkins.redroma.tech/job/Aroma%20Thrift/)
![Maven Central Version](http://img.shields.io/maven-central/v/tech.aroma/aroma-thrift.svg)

The Model and Service Definitions for Aroma defined in Thrift

# Download

To use, simply add the following maven dependency.

## Release
```xml
<dependency>
	<groupId>tech.aroma</groupId>
	<artifactId>aroma-thrift</artifactId>
	<version>2.0.2</version>
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
	<version>2.1-SNAPSHOT</version>
</dependency>
```

# [Javadocs](http://www.javadoc.io/doc/tech.aroma/aroma-thrift/)

# Requirements

+ Java 7
+ Maven
+ Thrift 0.9.3 Compiler

# Building
This project builds with maven. Just run a `mvn clean install` to compile and install to your local maven repository. As long as `thrift` is on your `PATH` it should build just fine.

# Release Notes

> Coming Soon
