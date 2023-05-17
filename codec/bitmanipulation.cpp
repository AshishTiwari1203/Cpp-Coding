#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define mod 1000000007
#define pb push_back
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int count_ones(string s)
{
    int o = 0;
    for (char c : s)
    {
        if (c == '1')
            o++;
    }
    return o;
}
int count_onesar(vector<int> &ar)
{
    int o = 0;
    for (auto c : ar)
    {
        if (c == 1)
            o++;
    }
    return o;
}
int count_zero(string s)
{
    int z = 0;
    for (char c : s)
    {
        if (c == '0')
            z++;
    }
    return z;
}
int count_zeroar(vector<int> &ar)
{
    int z = 0;
    for (auto c : ar)
    {
        if (c == 0)
            z++;
    }
    return z;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 0)
            cout << -1 << endl;
        else
            cout << 0 << " " << x << endl;
    }
    return 0;
}
