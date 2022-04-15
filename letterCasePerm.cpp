#include <bits/stdc++.h>
using namespace std;

void letter_case_perm (string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    if (isalpha (ip[0]))
    {
        string op1 = op;
        string op2 = op;
    
        op1.push_back (toupper (ip[0]));
        op2.push_back (tolower (ip[0]));
        ip.erase (ip.begin() + 0);

        letter_case_perm (ip, op1);
        letter_case_perm (ip, op2);
    }

    else
    {
        string op1 = op;
        op1.push_back (ip [0]);
        ip.erase (ip.begin() + 0);

        letter_case_perm (ip, op1);
    }
}

int main (void)
{
    string ip, op;
    cin >> ip;    

    letter_case_perm (ip, op);
    return EXIT_SUCCESS;
}