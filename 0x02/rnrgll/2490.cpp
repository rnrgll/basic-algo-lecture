#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    // for(int j=0; j<3; j++){
    //     int arr[2] = {};
    //     int n;

    //     for(int i=0; i<4; i++){
    //         cin >> n;
    //         arr[n]++;
    //     }

    //     switch (arr[0])
    //     {
    //     case 0:
    //         cout << "E";
    //         break;
    //     case 1:
    //         cout << "A";
    //         break;
    //     case 2:
    //         cout << "B";
    //         break;
    //     case 3:
    //         cout << "C";
    //         break;
    //     case 4:
    //         cout << "D";
    //         break;
        
    //     default:
    //         break;
    //     }
    //     cout << "\n";
    // }


    //더 간단한 코드로 수정
    int result, input;
    string res = "DCBAE";
    for(int i=0; i<3; i++){
        result = 0;
        for(int j=0; j<4; j++){
            cin >> input;
            result += input;
        }

        cout << res[result] << "\n";

    }

    return 0;
}