#!/bin/bash

set -eux

cd "$(dirname "$0")"

g++ -std=c++17 -Wall -pedantic run_test.cpp -I. -o run_test
./run_test

echo "SUCCESS"
