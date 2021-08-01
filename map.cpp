#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Google";
    m[8] = "Netflix";
    m[3] = "Adobe";
    m.insert({4, "Amazon"});

    for (auto i : m)
    {
        cout << i.first << "-> " << i.second << endl;
    }

    cout << "Size -> " << m.size() << endl;

    cout << "finding 8 -> " << m.count(8) << endl;
}
