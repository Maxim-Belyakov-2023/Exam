#include <iostream>

int f1(int* a)
{
    return *a + 1;
}
int* f2(int* a)
{
    return a + 1;
}
int* f3(int& a)
{
    return &a + 1;
}
int main(int argc, char* argv[])
{
    int t[] = {0, 1, 2, 3};
    std::cout << f1(f3(*f2(t)));
    // f2 => [1, 2, 3]
    // *f2 => 1
    // f3 => [2, 3]
    // f1 => 2 + 1 => 3
    return 0;
}
