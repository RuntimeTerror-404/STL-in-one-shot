#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> l(5, 50);
    l.push_back(100);
    l.push_back(90);
    l.push_front(100);
    l.pop_front();
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int>::iterator it = l.begin();
    advance(it, 2);
    l.insert(it, 80);
    // l.remove(100);
    // l.assign(2,500);
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout<<endl;

    cout << "Size -> " << l.size() << endl;
    cout << "Empty or not-> " << l.empty() << endl;
}