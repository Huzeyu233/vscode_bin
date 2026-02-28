#include <iostream>
#include "head.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int x, y;
    char op;

    std::cout << "输入表达式（格式：a + b）：";
    std::cin >> x >> op >> y;

    try {
        int result = 0;
        switch(op) {
            case '+': result = add(x, y); break;
            case '-': result = sub(x, y); break;
            case '*': result = mul(x, y); break;
            case '/': result = divi(x, y); break;
            default:
                std::cout << "不支持的运算符\n";
                return 1;
        }
        std::cout << "结果: " << result << std::endl;
    } catch (std::exception &e) {
        std::cout << "错误: " << e.what() << std::endl;
    }

    return 0;
}