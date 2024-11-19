#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[5];
    int sum=0;
    int mid_val;

    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    //sort(arr, arr+4); //Sorts the elements in the range [first,last) into ascending order.

    sort(arr, arr+5);

    cout << sum/5 << "\n" << arr[2];


    return 0;
}