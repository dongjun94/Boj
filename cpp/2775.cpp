#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int **cnt = new int *[15];
    for (int i = 0; i < 15; i++)
        cnt[i] = new int[15];

    for (int i = 0; i < 15; i++)
    {
        cnt[0][i] = i + 1;
        cnt[i][0] = 1;
    }

    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 15; j++)
            cnt[i][j] = cnt[i - 1][j] + cnt[i][j - 1];

    int n, a, b;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << cnt[a][b - 1] << endl;
    }

    return 0;
}