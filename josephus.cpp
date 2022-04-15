#include <bits/stdc++.h>
using namespace std;

void josephus (vector <int> v, int k, int index, int& ans)
{
    if (v.size() == 1)
    {
        ans = v[0];
        return;
    }

    index = (index + k) % v.size();
    v.erase (v.begin() + index);

    josephus (v, k, index, ans);
}

int main (void)
{
    int n = 0, k = 0;
    cin >> n >> k;

    k = k - 1;
    int ans = -1, index = 0;
    vector <int> v;

    for (int i = 1; i <= n; i++)        v.push_back (i);

    josephus (v, k, index, ans);

    cout << "BACHA HUA AADMI :: " << ans << endl; 
    return EXIT_SUCCESS;    
}