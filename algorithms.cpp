#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 0, 1, 5, 8};
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // binary search
    cout << "finding element 1-> " << binary_search(v.begin(), v.end(), 1) << endl;

    // sorting
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // find minimum,maximum element in an array
    cout << "Maximum element-> " << *max_element(v.begin(), v.end()) << endl;

    cout << "Element at 3rd index -> " << v.at(3) << endl;

    string s = "mohit";
    set<char> s1;
    for (auto x : s)
    {
        s1.insert(x);
    }

    cout << endl;
    for (auto x : s1)
    {
        cout << x << ",";
    }

    cout << endl;

    reverse(s.begin(), s.end());
    cout << s << endl;

    int a = 23;
    int b = 57;

    swap(a, b);
    cout << a << "," << b << endl;
    cout << max(a, b) << endl;
}