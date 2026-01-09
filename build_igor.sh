#!/bin/bash
./build.sh -U -u -j $(nproc) -m amd64 -O ~/obj/netbsd release kernel=IGOR | tee build_igor.log