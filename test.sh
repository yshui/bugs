#!/bin/sh

# -g is important
clang -g -fmodules -fmodule-map-file=$PWD/bug.modulemap x.c

./a.out
