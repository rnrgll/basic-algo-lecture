#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    int min_val, max_val, middle_val;
    cin >> a >> b >> c;

    //min_val = min(a, b, c);
    //이렇게 여러 개의 값을 비교할 수 없음 -> 초기화 리스트(initalizer list)를 사용하여 std::min 함수가 초기화 리스트의 모든 요소를 비교할 수 있도록 처리해야 한다.
    min_val = min({a,b,c});
    max_val = max({a,b,c});
    middle_val = a+b+c - min_val - max_val;
    

    cout << min_val << " " << middle_val << " " << max_val;



    return 0;
}