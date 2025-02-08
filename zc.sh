#!/bin/bash
cmake -DCMAKE_TOOLCHAIN_FILE=./user_cross_compile_setup.cmake -B build -S .
# cmake -B build -S .
make -C build -j

cp bin/lvglsim ~/NetFloder/nfs/root/root/