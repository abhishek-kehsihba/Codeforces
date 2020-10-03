#include <bits/stdc++.h>
using namespace std;
#define intl long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    intl t;
    cin >> t;
    while (t--)
    {
        intl i, j, n, m;
        cin >> n;
        vector<pair<intl, intl>> ar(n);
        for (i = 0; i < n; i++)
        {
            cin >> ar[i].first >> ar[i].second;
        }
        vector<pair<intl, intl>> arr(n);
        intl sum = 0;
        intl a = 0;
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                arr[i].first = ar[i].first;
                arr[i].second = max(a, ar[0].first - ar[n - 1].second);
            }
            else
            {
                arr[i].first = ar[i].first;
                arr[i].second = max(a, ar[i].first - ar[i - 1].second);
            }
            sum += arr[i].second;
        }
        // cout<<sum<<"\n";
        intl mn = arr[0].first + sum;
        for (i = 0; i < n; i++)
        {
            intl x = sum - arr[i].second;
            intl y = arr[i].first + x;
            // cout<<x<<" "<<y<<"\n";
            if (y < mn)
            {
                mn = y;
            }
        }
        cout << mn << "\n";
    }
}