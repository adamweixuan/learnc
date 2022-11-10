#ifndef LEARNC_MACRO_H
#define LEARNC_MACRO_H

#define MAX(a, b) (a) > (b) ? (a) : (b)

void handle(const char *msg);

#define STR(x) #x

#define CONCAT(a, b) a##b

#define MYPRINT(fmt, ...) printf(fmt "\n", ##__VA_ARGS__)

void test_macro();

#endif