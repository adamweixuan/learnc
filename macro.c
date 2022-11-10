#include "macro.h"
#include <stdio.h>

void handle(const char *msg) {
#ifdef DEBUG
    printf("handle start ...\n");
#endif
    puts(msg);
#ifdef DEBUG
    printf("handle end ...\n");
#endif
}

void test_macro() {
    printf("max(100,200):%d\n", MAX(100, 200));
    printf("max(100,200,300):%d\n", MAX(300, MAX(100, 200)));
    const char *msg = "this is a message";

    printf("str(pi):%s\n", STR(msg));
    int a = 1;
    int b = 2;

    int CONCAT(a, b) = 12;

    printf("CONCAT(a, b)  %d\n", CONCAT(a, b));

    MYPRINT("%s %d", "hello", 1024);
    MYPRINT("hello world");
}
