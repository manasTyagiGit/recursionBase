#include <bits/stdc++.h>

using namespace std;

void printStack (stack <int> s)
{
    if (s.empty())      return;

    int val = s.top ();
    cout << val << "\t";
    s.pop();

    printStack (s);
}

void insert (stack <int>& s, int temp)
{
    if (s.empty() || s.top() >= temp)
    {
        s.push (temp);
        return;
    }

    int val = s.top();
    s.pop();

    insert (s, temp);
    s.push (val);
}

void sort (stack <int>& s)
{
    if (s.size() == 1)      return;
    int temp = s.top();
    s.pop();

    sort (s);

    insert (s, temp);
}

int main (void)
{
    int key = 0, n = 0;
    stack <int> s;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        s.push (key);    
    }

    sort (s);    
    printStack (s);

    cout << endl;
    return EXIT_SUCCESS;
}