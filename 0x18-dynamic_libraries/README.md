# creating dynamic lib
1. gcc *c -c -fPIC
2. gcc *.o -shared -o liball.so
3. export LD_LIBRARY_PATH = $PWD: $LD_LIBRARY_PATH
