#include <bits/stdc++.h>
using namespace std;

long long int a(long long int x, long long int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, k;
        cin >> n >> m >> k;
        double arr[n + 1][m + 1];
        for (long long int i = 0; i <= n; i++)
        {
            for (long long int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 0;
                }
                else
                {
                    cin >> arr[i][j];
                }
            }
        }

        for (long long int i = 0; i <= n; i++)
        {
            double temp = 0;
            for (long long int j = 0; j <= m; j++)
            {
                arr[i][j] = arr[i][j] + temp;
                temp = arr[i][j];
            }
        }
        for (long long int j = 0; j <= m; j++)
        {
            double temp = 0;
            for (long long int i = 0; i <= n; i++)
            {
                arr[i][j] = arr[i][j] + temp;
                temp = arr[i][j];
            }
        }
        long long int max_order = a(n, m);
        long long int ans = 0;
        for (long long int order = 1; order <= max_order; order++)
        {
            for (long long int j = order; j <= n; j++)
            {
                for (long long int l = order; l <= m; l++)
                {
                    if ((arr[j][l] + arr[j - order][l - order] - arr[j - order][l] - arr[j][l - order]) / (order * order) >= k)
                    {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
