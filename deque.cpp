// double ended queue
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(20);
    d.push_back(91);
    d.push_front(100);
    d.push_front(56);
    d.erase(d.begin() + 2);
    d.insert(d.end() - 1, 500);
    sort(d.begin(), d.end());
    for (auto i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_back();
    cout << "size-> " << d.size() << endl;

    cout << "Element at 2nd index: " << d.at(2) << endl;
}