#!/bin/bash
wget  -O /tmp/random.so https://github.com/AbuArwa001/alx-low_level_programming/blob/main/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so