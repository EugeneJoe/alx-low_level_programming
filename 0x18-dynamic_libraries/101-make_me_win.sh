#!/bin/bash
wget -P .. https://raw.githubusercontent.com/EugeneJoe/alx-low_level_programming/master/0x18-dynamic_libraries/libjoe.so
export LD_PRELOAD="$PWD/../libjoe.so"
