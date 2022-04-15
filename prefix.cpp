#include <bits/stdc++.h>
using namespace std;

void prefix (int n, int zero, int one, string op)
{
    if ((zero + one) == n)
    {
        cout << op << endl;
        return;
    }

    if (zero < one)
    {
        string op0 = op;
        op0.push_back ('0');

        prefix (n, zero + 1, one, op0);
    }

    string op1 = op;
    op1.push_back ('1');

    prefix (n, zero, one + 1, op1);
}

int main (void)
{
    int n = 0;
    cin >> n;
    string op;

    int zero = 0, one = 0;

    prefix (n, zero, one, op);
    return EXIT_SUCCESS;
}