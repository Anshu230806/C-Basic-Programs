// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool fun(vector<int> const &a, vector<int> const &b)
{
    if ((double)a[0] / (double)a[1] > (double)b[0] / (double)b[1])
    {
        return true;
    }
    return false;
}
int main()
{
    int W;
    int n;
    cin >> W >> n;
    vector<int> profit(n);
    vector<int> weight(n);

    for (int i = 0; i < n; i++)
    {
        cin >> profit[i] >> weight[i];
    }
    vector<vector<int>> ratio(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        ratio[i][0] = profit[i];
        ratio[i][1] = weight[i];
    }

    sort(ratio.begin(), ratio.end(), fun);
    double pro = 0;
    for (int i = 0; i < n; i++)
    {
        if (W >= ratio[i][1])
        {
            pro += ratio[i][0];
            W -= ratio[i][1];
        }
        else
        {
            double a = ((double)W / ratio[i][1]);
            pro += (double)a * ratio[i][0];
            break;
        }
    }

    cout << pro;

    return 0;
}