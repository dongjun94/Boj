#include <iostream>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[501][501] = {0};
    int _max = 0;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
        {
            cin >> arr[i][j];
            arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]);
            _max = max(_max, arr[i][j]);
        }

    cout << _max << endl;

    return 0;
}