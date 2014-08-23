FANN_Base
===

A simple c++ FANN workspace, designed to get going quicker with FANN projects!

Comes with the parallel OpenMP extension

![fann base](http://i.imgur.com/3cvxjct.png)

Requirements
===

* [OpenMP](http://openmp.org/wp/openmp-compilers/)
* [FANN](https://github.com/libfann/fann)
* C++11 Compatible Compiler
* Bash or equivalent


Usage
===

* modify gendata.cpp to output training files to stdout
* modify settings.h to reflect your data
* ./build.sh
* ./run.sh
