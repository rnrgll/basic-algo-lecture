#include <bits/stdc++.h>

using namespace std;

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int x;

    cin >> n >> x;

    int k;
    for(int i=0; i<n; i++){
        cin >> k;
        if(k<x) cout << k << " ";
    }

    return 0;
}