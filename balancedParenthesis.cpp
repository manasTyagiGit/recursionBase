#include <bits/stdc++.h>
using namespace std;

void balanced_parenthesis (int n, int open, int close, string op)
{
    if (open == n && close == n)
    {
        cout << op << endl;
        return;
    }

    if (open < n)
    {
        string op1 = op;
        op1.push_back ('(');
        balanced_parenthesis (n, open + 1, close, op1);
    }

    if (open > close)
    {
        string op2 = op;
        op2.push_back (')');
        balanced_parenthesis (n, open, close + 1, op2);
    }
}

int main (void)
{
    int n = 0;
    cin >> n;
    string op;

    int open = 0, close = 0;

    balanced_parenthesis (n, open, close, op);
    return EXIT_SUCCESS;
}