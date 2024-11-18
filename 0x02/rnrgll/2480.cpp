#include <bits/stdc++.h>

using namespace std;

int calcReward(int type, int noon){
    switch (type)
    {
    case 1:
        return 10000 + noon * 1000;
    case 2:
        return 1000 + noon * 100;
    case 3:
        return noon * 100;
    default:
        cout << "cant' calc reward\n";
        return 0;
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    int reward=0, max_val;
    cin >> a >> b >> c;

    if(a==b&&b==c)
        reward = calcReward(1, a);
    else if(a!=b&&b!=c&&a!=c){
        max_val = max({a,b,c});
        reward = calcReward(3,max_val);
    }
    else {
        if(a==b || a==c){
             reward = calcReward(2, a);
        }
        else if(b==c){
            reward = calcReward(2, b);
        }
    }

    cout << reward;

    return 0;
}