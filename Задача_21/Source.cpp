#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        a.a = a.b = 1;
    }

    struct
    {
        int a, b;
    } a;

    void b(void);
};

// При определении метода вне класса используется операция разыменования области видимости (::)
// <Тип результата> <Название класса>::<Название метода>([<Параметры>...])
void A::b(void)
{
    int x = a.a;
    a.a = a.b;
    a.b = x;
}

int main(void)
{
    A a;
    a.b();
    cout << a.a.a << a.a.b;
    return 0;
}
