#include <iostream>

template<class T>
void f(T& a)
{
    std::cout << 1 + a << std::endl;
}

int main(int argc, char* argv[])
{
    int a = 1;
    f(a);
    return 0;
}
