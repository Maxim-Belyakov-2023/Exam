#include <iostream>
using namespace std;

class A
{
public:
    int a[2];

    A()
    {
        a[0] = 1;
        a[1] = 0;
    }

    void b(void)
    {
        int x = a[0];
        a[0] = a[1];
        a[1] = x;
    }
};

int main(void)
{
    A a;
    a.b();
    cout << a.a[0] << a.a[1];
    return 0;
}
