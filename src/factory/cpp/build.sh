#!/bin/bash

set -e

BUILD_DIR=build
mkdir -p bin
mkdir -p lib

cmake -S . -B $BUILD_DIR
cmake --build $BUILD_DIR --target $1