
#include <iostream>

template<class T>
void f(T& a)
{
    std::cout << 1 + a;
}
void f(double& a)
{
    std::cout << 2 + a;
}
int main(int argc, char* argv[])
{
    int a = 1.5;
    f(a);
    return 0;
}
