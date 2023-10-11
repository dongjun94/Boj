#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    int *cnts = new int[n + 1];
    int temp = 0;
    cnts[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        cnts[i] = cnts[i - 1] + 1;

        if ((i & 1) == 0)
        {
            temp = cnts[i >> 1] + 1;
            if (cnts[i] > temp)
                cnts[i] = temp;
        }

        if (i % 3 == 0)
        {
            temp = cnts[i / 3] + 1;
            if (cnts[i] > temp)
                cnts[i] = temp;
        }
    }

    cout << cnts[n] << endl;

    return 0;
}