#include <iostream>

class A
{
public:
    int cnt;
    void put(int v);
};
void A::put(int v)
{
    std::cout << ++cnt;
}

int main(int argc, char* argv[])
{
    A a[2];
    a[0].cnt = 0;
    a[1].cnt = 1;
    a[a[0].cnt].put(a[1].cnt);
    return 0;
}
