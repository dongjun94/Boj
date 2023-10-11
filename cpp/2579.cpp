#include <iostream>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int score[301] = {0};
    long total[301] = {0};

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> score[i];

    total[1] = score[1];
    total[2] = total[1] + score[2];
    total[3] = max(score[1] + score[3], score[2] + score[3]);

    for (int i = 4; i <= n; i++)
        total[i] = max(total[i - 2] + score[i], total[i - 3] + score[i - 1] + score[i]);

    cout << total[n] << endl;

    return 0;
}