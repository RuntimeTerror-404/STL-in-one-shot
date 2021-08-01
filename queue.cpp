#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("Mohit");
    q.push("Erricto");
    q.push("Johnny");
    // q.pop();

    cout << "Size -> " << q.size() << endl;

    cout << q.front() << endl;

    
}