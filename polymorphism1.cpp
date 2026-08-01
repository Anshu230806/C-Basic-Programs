#include <iostream>
using namespace std;
class one
{
public:
    virtual void show()
    {
        cout << "one class" << endl;
    }
};
class two : public one
{
public:
    void show()
    {
        cout << " two class " << endl;
    }
};
int main()
{
    one *ptr;
    two t1;
    ptr = &t1;
    ptr->show();
    ptr->one::show();

    // two t1;
    // t1.show();
    return 0;
}