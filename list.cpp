#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l(5, 50);
    l.push_back(100);
    l.push_front(100);
    l.pop_front();
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.insert(l.begin(), 500);
    l.remove(100);

    cout << "Size -> " << l.size() << endl;
}