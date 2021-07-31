#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {3, 1, 0, 5, 9};
    arr.push_back(8);
    cout << "Capacity of arr is: " << arr.capacity() << endl;
    cout << "Size of arr is: " << arr.size() << endl;

    // sort(arr.begin(), arr.end());

    arr.pop_back();
    arr.insert(arr.begin() + 1, 20);
    arr.erase(arr.begin()+1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "First element: " << arr.front() << endl;
    cout << "last element: " << arr.back() << endl;
}