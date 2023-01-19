#!/bin/bash
gcc *.o -fPIC -shared -o libwin.so
LD_PRELOAD=$WPD/libwin.so
