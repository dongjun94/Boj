#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int *col[3];
    for (int i = 0; i < 3; i++)
        col[i] = new int[n + 1];

    col[0][0] = col[1][0] = col[2][0] = 0;

    int cost[3];
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        col[0][i] = min(col[1][i - 1], col[2][i - 1]) + cost[0];
        col[1][i] = min(col[0][i - 1], col[2][i - 1]) + cost[1];
        col[2][i] = min(col[0][i - 1], col[1][i - 1]) + cost[2];
    }

    cout << min(col[0][n], min(col[1][n], col[2][n])) << endl;

    return 0;
}