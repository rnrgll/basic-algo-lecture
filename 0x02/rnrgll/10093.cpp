#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // a<b인게 아님! 경우를 고려해서 구현해야함
    // 또한 subtask2에서 a,b가 최대 10^15승까지 가능하다고 하므로 longlong 자료형을 사용해야 함.

    long long a, b;
    cin >> a >> b;

    if (a > b)
    {
        // swap
        swap(a, b); //<utility> 헤더의 std::swap(a,b), <algorithm> 헤더에도 정의되어 있음
    }
    if (a == b || b - a == 1)
    {
        // a=b이거나 a,b가 연속하는 경우 두 수 사이의 수는 없음
        cout << 0;
    }
    else
    {
        cout << b - a - 1 << "\n";
        for (long long i = a + 1; i < b; i++)
            cout << i << " ";
    }

    return 0;
}