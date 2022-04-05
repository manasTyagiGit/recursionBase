#include <bits/stdc++.h>  
using namespace std;

void printSubsets (string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back (ip[0]);
    ip.erase (ip.begin() + 0);

    printSubsets (ip, op1);
    printSubsets (ip, op2);
}
int main (void)
{
    string ip;
    string op = " ";

    cin >> ip;

    printSubsets (ip, op);
    return EXIT_SUCCESS;
}
