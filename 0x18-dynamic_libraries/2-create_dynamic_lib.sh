#!/bin/bash
gcc l-*.c -c -fPIC; gcc *.o -shared -o 100-operations.so
