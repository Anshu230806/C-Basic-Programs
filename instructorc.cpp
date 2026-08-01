#include <iostream>
using namespace std;

// Virtual base class (no virtual functions)
class Student
{
public:
    int rollNo;
};

// Derived class for theory marks
class Theory : virtual public Student
{
public:
    int theory1, theory2;
};

// Derived class for practical marks
class Practical : virtual public Student
{
public:
    int practical;
};

// Final class combining both
class Result : public Theory, public Practical
{
public:
    int totalMarks()
    {
        return theory1 + theory2 + practical;
    }
};

int main()
{
    Result student;

    cout << "Enter Roll No: ";
    cin >> student.rollNo;

    cout << "Enter Theory Marks 1: ";
    cin >> student.theory1;

    cout << "Enter Theory Marks 2: ";
    cin >> student.theory2;

    cout << "Enter Practical Marks: ";
    cin >> student.practical;

    cout << "\nRoll No: " << student.rollNo;
    cout << "\nTotal Marks: " << student.totalMarks() << endl;

    return 0;
}