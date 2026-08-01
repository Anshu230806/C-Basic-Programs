#include <iostream>
using namespace std;
class Overload
{
public:
    int i;
    void getdata()
    {
        cin >> i;
    }
    void putdata()
    {
        cout << i << endl;
    }
    // Overload operator==(Overload o1)
    bool operator==(Overload o1) // return type also may be int
    {
        /*  Overload temp1, temp2;
         temp1.i = 1, temp2.i = 0;

          if (i == o1.i)
          {
              return temp1;
          }
          else
          {
              return temp2;
          }*/

        if (i = o1.i)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Overload o1, o2, o3;
    o1.getdata();
    o2.getdata();
    // o3=(o2 == o1);
    int i = (o2 == o1);
    cout << i;
    return 0;
}