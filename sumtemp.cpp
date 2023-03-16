#include <iostream>
using namespace std;

template <class T1,class T2>
class mySum
{
public:
    T1 a;
    T2 b;
    mySum(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        T1 z;
        z = this->a + this->b;
        cout << z;
    }
};

int main()
{
    mySum<float,int> obj(10.01, 21.009);
    obj.sum();
    return 0;
}