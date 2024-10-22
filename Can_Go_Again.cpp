#include <bits/stdc++.h>
#define lls long long
#define lns int
using namespace std;
class Edge
{
public:
    lls x, y, z;
    Edge(lls x, lls y, lls z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};
int main()
{
    lns n, e;
    cin >> n >> e;
    vector<Edge> vct;
    while (e--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vct.push_back(Edge{x, y, z});
    }
    lls dis[n];
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (Edge child : vct)
        {
            lls u = child.x;
            lls v = child.y;
            lls w = child.z;
            if (dis[u] < INT_MAX and dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    lns t;
    cin >> t;
    while (t--)
    {
        lls a;
        lls b;
        cin >> a >> b;
        if (b >= dis[a])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}