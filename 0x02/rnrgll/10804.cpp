#include <bits/stdc++.h>

using namespace std;

void arrangeDeck(int a, int b, vector<int> &dec)
{
    // 홀수개일때 : [a, (a+b)/2) -> [a, (a+b+1)/2)
    // 짝수개일때 : [a, (a+b)/2] -> [a, (a+b+1)/2)

    for (int i = a; i < (a + b + 1) / 2; i++)
    {
        swap(dec[i], dec[a + b - i]);
    }
}

void printDeck(vector<int> &dec)
{
    for (int i = 1; i < dec.size(); i++)
        cout << dec[i] << " ";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> dec(21);

    // 초기화
    for (int i = 0; i < 21; i++)
    {
        dec[i] = i;
    }

    int a, b;

    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        arrangeDeck(a, b, dec);
    }

    printDeck(dec);

    return 0;
}