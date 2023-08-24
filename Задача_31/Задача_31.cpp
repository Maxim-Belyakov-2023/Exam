
#include <iostream>

class X
{
public:
    // Конструктор класса - метод, который вызывается при создании экземпляра класса.
    X(void)
    {
        std::cout << 0;
    }
    ~X(void)
    {
        std::cout << 2;
    }
};

int main(int argc, char* argv[])
{
    try
    {
        // Создание экземпляра класса
        X* x = new X();
        throw true;
        delete x;
    }
    catch (bool s)
    {
        std::cout << s;
    }
    return 0;
}
