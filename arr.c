#include "arr.h"
#include <stdio.h>

void init_arr() {
    // arr[2] = 1024
    int arr[10] = {[2] = 1024};
}

void test_arr() {
    // arr[2] = 1024
    int arr[10] = {[2] = 1024};
    printf("arr[2] %d", arr[2]);
}
