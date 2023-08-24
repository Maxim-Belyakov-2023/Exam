#include <iostream>

class A
{
public:
    int a;
    A()
    {
        a = 1;
        a++;
    }
    A(A &aa)
    {
        a++;
    }
};
int main(int argc, char* argv[])
{
    A a, b(a), c(b);
    //std::cout << A.a << std::endl;
    return 0;
}
