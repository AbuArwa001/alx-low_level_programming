#!/bin/bash
wget -P /tmp https://github.com/AbuArwa001/alx-low_level_programming/raw/master/0x18-dynamic_libraries/run.so
export LD_PRELOAD=$PWD/run.so