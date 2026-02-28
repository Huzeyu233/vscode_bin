#include "head.h"
#include <stdexcept>

// 定义计算函数
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    if (b == 0) throw std::runtime_error("除数不能为0");
    return a / b;
}