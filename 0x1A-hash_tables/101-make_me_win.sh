#!/bin/bash
wget -O /tmp/win.so https://github.com/Houssamab54/alx-low_level_programming/raw/master/0x1-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
