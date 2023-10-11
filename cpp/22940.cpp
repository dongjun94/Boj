#include <iostream>
using namespace std;

void q_sort(double **x, int col, int start, int end)
{
    if (start >= end)
        return;

    double piv = abs(x[start][col]);
    int i = start + 1;
    int j = end;

    while (i < j)
    {
        while (i <= end && abs(x[i][col]) >= piv)
            i++;
        while (j > start && abs(x[j][col]) <= piv)
            j--;

        if (i < j)
            swap(x[i], x[j]);
        else
            swap(x[j], x[start]);
    }

    q_sort(x, col, start, j - 1);
    q_sort(x, col, j + 1, end);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    double **x = new double *[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = new double[n + 1];
        for (int j = 0; j <= n; j++)
            cin >> x[i][j];
    }

    for (int j = 0; j < n; j++)
    {
        q_sort(x, j, j, n - 1);
        for (int i = j + 1; i < n; i++)
        {
            double rate = x[i][j] / x[j][j];
            for (int k = j; k <= n; k++)
                x[i][k] -= x[j][k] * rate;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        double temp = x[i][i];
        for (int j = i; j <= n; j++)
            x[i][j] /= temp;

        for (int j = i - 1; j >= 0; j--)
        {
            double rate = x[j][i] / x[i][i];
            for (int k = i; k <= n; k++)
                x[j][k] -= x[i][k] * rate;
        }
    }

    for (int i = 0; i < n; i++)
        cout << x[i][n] << " ";
    cout << endl;

    return 0;
}