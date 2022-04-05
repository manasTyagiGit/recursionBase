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

void stackDelete (stack <int>& s, int k)
{
    if (k == 0)         return;
    if (k == 1)
    {
        s.pop ();
        return;
    }

    int val = s.top ();
    s.pop ();
    stackDelete (s, k - 1);
    s.push (val);          
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
    int k = (n / 2) + 1;

    stackDelete (s, k);

    printStack (s);
    cout << endl;

    return EXIT_SUCCESS;
}