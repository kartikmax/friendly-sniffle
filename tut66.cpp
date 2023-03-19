#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class kartik
{
public:
    T1 a;
    T2 b;
    kartik(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the value of a is " << this->a << endl;
        cout << "the value of b is " << this->b << endl;
    }
};

int main()
{
    kartik<char,char> k(69, 150);
    k.display();
    return 0;
}