#include <bits/stdc++.h>
#define lls long long
using namespace std;

int main()
{
    lls n, e;
    cin >> n >> e;
    lls arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 1e18;
            if (i == j)
            {
                arr[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        lls x, y, z;
        cin >> x >> y >> z;
        if (z < arr[x][y])
        {
            arr[x][y] = z;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] = min(arr[i][k] + arr[k][j], arr[i][j]);
                
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (arr[n][m] != 1e18)
        {
            cout << arr[n][m] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
