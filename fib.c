#include "fib.h"
#include <stdint.h>
#include <stdio.h>

uint64_t fib(uint64_t nth) {
    if (nth == 0 || nth == 1) {
        return nth;
    }

    return fib(nth - 1) + fib(nth - 2);
}

uint64_t fib_by_iter(uint64_t nth) {
    if (nth == 0 || nth == 1) {
        return nth;
    }

    uint64_t last = 0;
    uint64_t current = 1;
    for (int i = 0; i < nth - 1; i++) {
        uint64_t tmp = current;
        current += last;
        last = tmp;
    }

    return current;
}

void test_fib() {
    printf("fib(10):%llu\n", fib(10));
    printf("fib_by_iter(10):%llu\n", fib_by_iter(10));
}
