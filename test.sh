#!/bin/sh

# -g is important
clang -g -fmodules -fmodule-map-file=$PWD/bug.modulemap x.c
clang -g -fmodules -fmodule-map-file=$PWD/bug.modulemap -emit-llvm -c x.c

./a.out
