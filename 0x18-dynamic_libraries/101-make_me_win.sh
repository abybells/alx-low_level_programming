#!/bin/bash
wget -P https://github.com/abybells/alx-low_level_programming/blob/master/0x18-dynamic_libraries/inject.so
export LD_PRELOAD=/tmp/inject.so
