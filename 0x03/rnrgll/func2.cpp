#include <bits/stdc++.h>
using namespace std;


int func2(int arr[], int N){
    int exist[101] = {};
    for(int i=0; i<N; i++){
        if(exist[100-arr[i]]==1) return 1;
        exist[arr[i]] = 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr1[] = {1, 52, 48};
    int arr2[] = {50, 42};
    int arr3[] = {4, 13, 63, 87};

    cout << func2(arr1, 3) << "\n" << func2(arr2, 2) << "\n" << func2(arr3,4);



    return 0;
}