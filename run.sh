#!/bin/sh

#create fresh data to train on
./gendata > train.data
./train

#create fresh data to test on
./gendata > test.data
./test
