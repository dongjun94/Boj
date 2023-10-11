#include <iostream>
#include <algorithm>
using namespace std;
#define endl "\n"

int n, m;
int arr[100000] = {0};

void b_search(int x)
{
    int start = 0;
    int mid = 0;
    int end = n - 1;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == x)
        {
            cout << 1 << endl;
            return;
        }
        else if (arr[mid] < x)
            start = mid + 1;
        else if (arr[mid] > x)
            end = mid - 1;
    }

    cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cin >> m;
    int x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b_search(x);
    }

    return 0;
}