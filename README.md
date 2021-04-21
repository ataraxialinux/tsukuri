# Tsukuri - Simple Package manager for Ataraxia GNU/Linux

Tsukuri is a package manager written in Bash and uses zstd for compressing packages. It uses special build files called a "KagamiBuild" for compiling packages
automatedly.

## Pros and Cons


# Simple


> The only dependencies that should be needed for tsukuri to work is bash and zstd, not including the build system used (meson/ninja).


# Flexible

> "KagamiBuild" files are fairly flexible, allowing you to easily create a build file for Ataraxia Linux. It also supports patches, so you can easily patch things to work
Ataraxia GNU/LINUX. For example, a custom patch for "systemd" is used to work properly on musl libc.


# Human Friendly!

> Tsukuri is made by the Ataraxia GNU/Linux Team, and is made to be easily editible without having to recompile (in most cases). Build files are pretty easy to create,
and modify. If you have issues creating a build file, there is a wiki entry here on how to create such a build file!
