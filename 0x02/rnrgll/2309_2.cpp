#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 브루트포스 알고리즘으로 해결하기
    int height[9]; // 9명 난쟁이의 키를 저장할 배열
    int result[7]; // 결과 : 7명 난쟁이

    // 입력
    for (int i = 0; i < 9; i++)
        cin >> height[i];

    // 연산 : 2명의 난쟁이를 뺀 모든 조합을 고려
    //  2명 선택
    for (int i = 0; i < 8; i++)
    {
        int sum = 0;

        for (int j = i + 1; j < 9; j++)
        {
            sum = 0;
            // 7명 키 배열에 저장 & 7명에 대한 키의 합 게산
            for (int a = 0, k = 0; a < 9; a++)
            {
                if (a != i && a != j)
                {
                    result[k++] = height[a];
                    sum += height[a];
                }
            }

            // 합이 100이면 반복문 탈출
            if (sum == 100)
                break;
        }
        if (sum == 100)
            break;
    }

    // 정렬
    sort(result, result + 7);
    for (int i = 0; i < 7; i++)
        cout << result[i] << "\n";

    return 0;
}