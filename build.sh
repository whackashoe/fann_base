#!/bin/sh

g++ -std=c++11 -O2 gendata.cpp -lbmp -o gendata

g++ -std=c++11 -O2 parallel_fann.c train.cpp  -fopenmp -lfann -o train
g++ -std=c++11 -O2 parallel_fann.c test.cpp -fopenmp -lfann -o test
