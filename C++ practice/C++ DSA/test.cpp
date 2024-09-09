#include <iostream>

int bar(int x, int y)
{
    if (y == 0)
        return 0;
    return (x + bar(x, y - 1));
}

int foo(int a, int b)
{
    if (b == 0)
        return 1;
    return bar(a, foo(a, b - 1));
}
int main() {
    
    std::cout << foo(4, 6);
    return 0;
}