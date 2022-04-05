#include <bits/stdc++.h>

using namespace std;

void insert (vector <int>& v, int temp)
{
    int n = v.size();

    if (n == 0 || v[n - 1] <= temp)
    {
        v.push_back (temp);
        return;
    }

    int val = v[n - 1];
    v.pop_back();
    insert (v, temp);

    v.push_back (val);
}

void sort (vector <int>& v)
{
    int n = v.size();
    if (n == 1)     return;

    int temp = v[n - 1];
    v.pop_back();

    sort (v);

    insert (v, temp);
}

int main (void)
{
    int key = 0, n = 0;
    vector <int> v;

    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> key;
        v.push_back (key);    
    }

    sort (v);
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << "\t";
    }

    cout << endl;
    return EXIT_SUCCESS;
}