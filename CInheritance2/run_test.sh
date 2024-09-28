#!/bin/bash

set -eux

g++ -Wall -pedantic run_test.cpp -I. -o run_test
./run_test > output

TEST_SHA=$(cat output | shasum)

if [[ "54e3167c5aa93581f0749c8c27424a11cf5b5acc  -" == "${TEST_SHA}" ]]
then
  echo "Success"
  rm output
  exit 0
else
  echo "Failed"
  echo ${TEST_SHA}
  rm output
  exit 1
fi
