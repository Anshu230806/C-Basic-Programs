#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
private:
    vector<int> rank, parent;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }

    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ult_u = findUPar(u);
        int ult_v = findUPar(v);
        if (ult_u == ult_v)
        {
            return;
        }
        if (rank[ult_u] > rank[ult_v])
        {
            parent[ult_v] = ult_u;
        }
        else if (rank[ult_u] < rank[ult_v])
        {
            parent[ult_u] = ult_v;
        }
        else
        {
            parent[ult_v] = ult_u;
            rank[ult_u]++;
        }
        return;
    }
};

int main()
{
    cout << "program started\n";
    DisjointSet dis(4);
    dis.unionByRank(2, 3);
    if (dis.findUPar(2) == dis.findUPar(3))
    {
        cout << "from same set";
    }
    return 0;
}