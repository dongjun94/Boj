#include <iostream>
using namespace std;
#define endl "\n"

int arr[100000] = {0};
int idx = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, x;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        if (x == 0)
            idx--;
        else
            arr[idx++] = x;
    }

    int sum = 0;
    for (int i = 0; i < idx; i++)
        sum += arr[i];

    cout << sum << endl;

    return 0;
}