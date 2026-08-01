#include <iostream>
using namespace std;

class A
{
protected:
    static int countA;

public:
    A() { countA++; }
    virtual void count()
    {
        cout << "A's count: " << countA << endl;
    }
};
int A::countA = 0;

class B
{
protected:
    static int countB;

public:
    B() { countB++; }
    virtual void count()
    {
        cout << "B's count: " << countB << endl;
    }
};
int B::countB = 0;

class C : public A, public B
{
protected:
    static int countC;

public:
    C() { countC++; }
    void count() override
    {
        cout << "C's count: " << countC << endl;
        A::count(); // Also show A's count
        B::count(); // Also show B's count
    }
};
int C::countC = 0;

int main()
{
    // Create some objects
    A a1, a2;
    B b1;
    C c1, c2;

    // Call count() on different objects
    cout << "Counting A objects:" << endl;
    a1.count();

    cout << "\nCounting B objects:" << endl;
    b1.count();

    cout << "\nCounting C objects:" << endl;
    c1.count();

    return 0;
}