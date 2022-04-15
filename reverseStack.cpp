#include <bits/stdc++.h>
using namespace std;

void printStack (stack <int> s)
{
    if (s.empty ())      return;

    int val = s.top ();
    cout << val << "\t";
    s.pop();

    printStack (s);
}

void insert (stack <int>& s, int val)
{
    if (s.empty ())
    {
        s.push (val);
        return;
    }

    int temp = s.top ();
    s.pop ();

    insert (s, val);

    s.push (temp);
}

void reverseStack (stack <int>& s)
{
    if (s.size () == 1 || s.empty ())     return;

    int val = s.top ();
    s.pop ();
    reverseStack (s);

    insert (s, val);    
}

int main (void)
{
    int n = 0, key = 0;
    stack <int> s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> key;
        s.push (key);
    }

    cout << "\nBefore Reversal :: ";
    printStack (s);

    cout << endl;

    reverseStack (s);

    cout << "\nAfter Reversal :: ";
    printStack (s);

    cout << endl;

    return EXIT_SUCCESS;
}