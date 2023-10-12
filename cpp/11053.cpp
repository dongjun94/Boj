#include <iostream>
using namespace std;
#define endl "\n"

int seq[1000] = {0};
int len[1000] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
        len[i] = 1;
        for (int j = i - 1; j >= 0; j--)
            if (seq[j] < seq[i])
                len[i] = max(len[i], len[j] + 1);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, len[i]);

    cout << ans << endl;

    return 0;
}