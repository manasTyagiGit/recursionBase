#include <bits/stdc++.h>
using namespace std;

void perm_with_spaces (string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back ('_');
    op2.push_back (ip[0]);
    op1.push_back (ip[0]);

    ip.erase (ip.begin() + 0);

    perm_with_spaces (ip, op1);
    perm_with_spaces (ip, op2);
}

int main (void)
{
    string ip, op;
    cin >> ip;    

    op.push_back (ip[0]);
    ip.erase (ip.begin() + 0);

    perm_with_spaces (ip, op);
   
    return EXIT_SUCCESS;
}