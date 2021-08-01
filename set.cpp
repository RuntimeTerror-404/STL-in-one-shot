#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(4);
    s.insert(2);
    s.insert(2);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    s.erase(5);
    cout << "Size of set -> " << s.size() << endl;
    cout << "set is empty or not: " << s.empty() << endl;
}