#include <iostream>
using namespace std;
#define endl "\n"

string stk[100001];
int idx = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str[0] == 's')
            cout << idx << endl;
        else if (str[0] == 'e')
            cout << (idx == 0 ? "1" : "0") << endl;
        else if (str[0] == 't')
            cout << (idx == 0 ? "-1" : stk[idx]) << endl;
        else if (str[0] == 'p')
        {
            if (str[1] == 'o')
                cout << (idx == 0 ? "-1" : stk[idx--]) << endl;
            else if (str[1] == 'u')
            {
                cin >> str;
                stk[++idx] = str;
            }
        }
    }

    return 0;
}