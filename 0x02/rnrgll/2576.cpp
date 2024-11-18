#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int min_val = INT_MAX; //<limits.h> or <climits>
    //문제에서 주어지는 자연수가 100보다 작다고 했으므로 100으로 설정해도 됐었음.
    int sum = 0;
    int n;

    for(int i=0; i<7; i++){
        cin >> n;
        if(n%2!=0){
            sum+=n;
            min_val = min(min_val, n);
        }
    }

    if(sum==0)
        cout << -1 << "\n";
    else
        cout << sum << "\n" << min_val << "\n";
    
    

    return 0;
}