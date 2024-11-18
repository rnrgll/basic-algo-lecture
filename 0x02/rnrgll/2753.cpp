#include <bits/stdc++.h>

using namespace std;


bool isYoon(const int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int year;
    cin >> year;
    cout << isYoon(year);

    

    return 0;
}