#!/bin/bash

cmake -B build -S .
make -C build -j

cp bin/lvglsim ~/NetFloder/nfs/root/root/