#include <iostream>

class A
{
    int a;
public:
    A(void)
    {
        a = 1;
    }
    int b(void)
    {
        return ++a;
    }
};
int main(int argc, char* argv[])
{
    A a;
    a.b();
    std::cout << a.b() << std::endl;
    return 0;
}