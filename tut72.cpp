#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

int main()
{
    list<int> list1;
    list<int> list2;
    list1.push_back(23);
    list1.push_back(4);
    list1.push_back(69);
    list1.push_back(6);

    list2.push_back(8);
    list2.push_back(64);
    list2.push_back(44);

    // display(list1);
    // list1.pop_front();
    // display(list1);
    // after sort
    // list1.sort();
    display(list1);
    list1.merge(list2);
    display(list1);
    list1.sort();
    display(list1);

    return 0;
}