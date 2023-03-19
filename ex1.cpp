#include <iostream>
#include <vector>
using namespace std;

/// template function for diplay any vector
// vector are like array
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    vector<float> vec1;
    int size;
    float element;
    cout << "Enter the size";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i;
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    return 0;
}