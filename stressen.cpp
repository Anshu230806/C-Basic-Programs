#include <iostream>
using namespace std;

vector<vector<int>> solve(vector<vector<int>> &A, int i1, int j1, int n1, vector<vector<int>> &B, int i1, int j1, int n2)
{
    if (n1 == 1 && n2 == 1)
    {
        return {{A[i1][j1] * B[i2[j2]]}};
    }

    auto P1 = add(A, i1, j1, n / 2, A, i1 + n / 2, j1 + n / 2, n / 2);
    auto P2 = add(B, i2, j2, n / 2, B, i2 + n / 2, j2 + n / 2, n / 2);
    auto P = solve(P1, 0, 0, n / 2, P2, 0, 0, n / 2);

    auto Q1 = add(A, i1 + n / 2, j1, n / 2, A, i1 + n / 2, j2 + n / 2, n / 2);
    auto Q = solve(Q, 0, 0, n / 2, B, i2, j2, n / 2);

    vector<vector<int>>
        ans = {c1, c2, c3, c4};
    return ans;
}
int main()
{
    vector<vector<int>> A = {{1, 2}, {3, 4}};
    vector<vector<int>> B = {{1, 2}, {3, 4}};

    vector<vector<int>> C = solve(A, 0, 2, B, 0, 2);

    for (int i = 0; i < C.size(); i++)
    {
        for (int j = 0; j < C.size(); j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return;
}