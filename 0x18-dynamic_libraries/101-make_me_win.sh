#!/bin/bash
wget -P /tmp https://github.com/AbuArwa001/alx-low_level_programming/blob/main/0x18-dynamic_libraries/ran.so
export LD_PRELOAD=/tmp/run.so
