#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 2, 3};
    vector<int> l{4, 5};

    // Inserting all elements of l to v
    v.insert(v.begin() + 3, l.begin(), l.begin() + 1);

    for (auto i : v)
        cout << i << " ";
    return 0;
}