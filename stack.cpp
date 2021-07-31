#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Mohit");
    s.push("John");
    s.push("Eric");

    cout << "Size -> " << s.size() << endl;

    s.pop();
    cout << s.top() << endl;
}