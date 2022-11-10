# 变长参数

## 使用步骤

1. 定义`va_list`, 用于接收变长参数
2. `va_start`,遍历变长参数
3. `va_arg`,获取变长参数
4. `va_end`,清理

```c
void handle_args(int count, ...) {
    // 1. define args of type va_list
    va_list args;

    // 2. read args
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        // 3. read
        int nth_value = va_arg(args, int);
        printf("%d->%d\n", i, nth_value);
    }
    // 4. clean
    va_end(args);
}
```

## `macro`

### object-like macro

```c
#define PI 3.141596253 
```

### function-like macro

```c
#define MAX(a, b) (a) > (b) ? (a) : (b)
```

### `#` and `##`

1. `#` 将输入参数 字符串化 #pi => "pi"
2. `##` 拼接两个字符串 a##b => ab

```c
#define STR(x) #x
#define CONCAT(a, b) a##b 
```

### 可变参数 `__VAR_ARGS__`

```c
#define MYPRINT(fmt, ...) printf(fmt "\n", ##__VA_ARGS__)
```

## 条件编译

1. `ifdef` 如果已经定义
2. `ifndef` 如果没有定义
3. `if` 如果

```c
void handle(const char *msg) {
#ifdef DEBUG
    printf("handle start ...\n");
#endif
    puts(msg);
#ifdef DEBUG
    printf("handle end ...\n");
#endif
}
```

## array

```c
    // c99 之后支持的一种初始化语法 
    int arr[10] = {[2] = 1024};
    printf("arr[2] %d", arr[2]);
```

### 数组作为函数参数 

### 二维数组 

