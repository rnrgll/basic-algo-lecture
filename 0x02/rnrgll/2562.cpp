#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums(9);

    for (int i = 0; i < 9; i++)
        cin >> nums[i];

    int max_idx = max_element(nums.begin(), nums.end()) - nums.begin();

    cout << nums[max_idx] << "\n"
         << max_idx + 1;

    // 아래와 같이 작성해도 됨
    //  cout << *max_element(nums.begin(), nums.end()) << "\n";
    //  cout << max_element(nums.begin(), nums.end()) - nums.begin() + 1;

    return 0;
}