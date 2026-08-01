#include <iostream>
using namespace std;
class one
{
public:
    int n;
    float cost;
    float display(int n)
    {
        if (n >= 15)
        {
            int e = n - 15;
            int num = e / 10;
            int eum = e % 10;
            cost = 2 + num * 1 + eum * 1 / 10;
            return cost;
        }
        else if (n < 15 && n > 0)
        {
            cost = n * 2 / 15;
            return cost;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    one o1;
    int n;
    cout << "enter no. of packets " << endl;
    cin >> n;
    int weight[20];
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "enter weight of  packet ";
        cin >> weight[i];
        total += o1.display(weight[i]);
    }
    cout << " total cost is " << total;
    return 0;
}