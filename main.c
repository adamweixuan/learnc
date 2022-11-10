#include "arr.h"
#include "fib.h"
#include "macro.h"
#include "var_args.h"
#include <stdio.h>

int main(int argc, char **argv) {
    handle_args(4, 1024, 1025, 1026, 1027);
    test_fib();
    test_macro();
    test_arr();
    return 0;
}
