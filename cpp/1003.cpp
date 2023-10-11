#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    int *cnt0 = new int[41];
    int *cnt1 = new int[41];

    cnt0[0] = cnt1[1] = 1;
    cnt0[1] = cnt1[0] = 0;

    for (int i = 2; i < 41; i++)
    {
        cnt0[i] = cnt0[i - 2] + cnt0[i - 1];
        cnt1[i] = cnt1[i - 2] + cnt1[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        int fib = 0;
        cin >> fib;
        cout << cnt0[fib] << " " << cnt1[fib] << endl;
    }

    return 0;
}