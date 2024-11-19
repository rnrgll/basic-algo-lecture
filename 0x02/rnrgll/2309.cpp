#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0, diff=0;
    int height[101] = {};
    int arr[9];
    bool find = false;
    for(int i=0; i<9; i++){

        cin >> arr[i];
        sum += arr[i];
    }

    diff = sum-100;
    

    for(int i=0; i<9; i++){
        if(!find && height[diff-arr[i]]) {
            height[diff-arr[i]] = height[arr[i]] = 0;
            find = true;
        }
        else{
            height[arr[i]] = 1;
        }
    }


    for(int i=1, cnt=0; i<101 && cnt<7; i++){
        if(height[i]){
            cout << i << "\n";
            cnt++;
        }
    }

    return 0;
}