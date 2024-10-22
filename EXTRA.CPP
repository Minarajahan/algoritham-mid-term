#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll rr = max((ll)0, a - ((((y + 1) / 2) * 15) - b * 4));

        cout << ((b + 1) / 2) + ((rr + 14) / 15) << endl;
    }

    return 0;
}

