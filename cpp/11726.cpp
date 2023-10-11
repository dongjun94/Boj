#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int way[1001];
    way[1] = 1;
    way[2] = 2;
    for (int i = 3; i < 1001; i++)
        way[i] = (way[i - 1] + way[i - 2]) % 10007;

    cout << way[n] << endl;

    return 0;
}