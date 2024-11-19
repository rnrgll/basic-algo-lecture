#include <bits/stdc++.h>

using namespace std;

struct BillType
{
    string name;
    int cost;

    BillType(string name, int cost)
    {
        this->name = name;
        this->cost = cost;
    }
};

int calcCost(int sec, int money, vector<int> &times)
{
    int cost = 0;
    for (int i = 0; i < times.size(); i++)
    {
        cost += (times[i] / sec + 1) * money;
    }

    return cost;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    int time;
    vector<int> times;

    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        cin >> time;
        times.push_back(time);
    }

    BillType youngsik("Y", calcCost(30, 10, times));
    BillType minsik("M", calcCost(60, 15, times));

    if (youngsik.cost > minsik.cost)
        cout << minsik.name << " " << minsik.cost;
    else if (youngsik.cost < minsik.cost)
        cout << youngsik.name << " " << youngsik.cost;

    else
        cout << youngsik.name << " " << minsik.name << " " << youngsik.cost;

    return 0;
}