#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // 윗부분
    for (int i = 1; i <= n - 1; i++)
    {
        // 1 : 1, 2*4, 1
        // 2: 2, 2*3, 2
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j > i && j < 2 * n - i + 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << "\n";
    }

    // 가운데 출력
    for (int i = 0; i < 2 * n; i++)
        cout << "*";
    cout << "\n";

    // 아래 부분
    for (int i = n - 1; i >= 1; i--)
    {
        // 1 : 1, 2*4, 1
        // 2: 2, 2*3, 2
        for (int j = 1; j <= 2 * n; j++)
        {
            if (j > i && j < 2 * n - i + 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << "\n";
    }

    return 0;
}