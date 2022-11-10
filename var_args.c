#include "var_args.h"
#include <stdarg.h>
#include <stdio.h>

void handle_args(int count, ...) {
    // 1. define args of type va_list
    va_list args;

    // 2. read args
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        // 3. 读取第n个参数 ，后面是参数的类型
        int nth_value = va_arg(args, int);
        printf("%d->%d\n", i, nth_value);
    }
    // 4. 清理
    va_end(args);
}