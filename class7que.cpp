#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class temp_ture
{
private:
    char date[12];
    char ct1[15], ct2[15], ct3[15], ct4[15];
    int temp[4];

public:
    // Function to read data
    void readData()
    {
        cout << "Enter date (dd-mm-yyyy): ";
        cin >> date;
        cout << "Enter city 1 name: ";
        cin >> ct1;
        cout << "Enter temperature for " << ct1 << ": ";
        cin >> temp[0];
        cout << "Enter city 2 name: ";
        cin >> ct2;
        cout << "Enter temperature for " << ct2 << ": ";
        cin >> temp[1];
        cout << "Enter city 3 name: ";
        cin >> ct3;
        cout << "Enter temperature for " << ct3 << ": ";
        cin >> temp[2];
        cout << "Enter city 4 name: ";
        cin >> ct4;
        cout << "Enter temperature for " << ct4 << ": ";
        cin >> temp[3];
    }

    // Function to display data
    void displayData()
    {
        cout << left << setw(12) << date;
        cout << left << setw(15) << ct1 << temp[0] << "°C  ";
        cout << left << setw(15) << ct2 << temp[1] << "°C  ";
        cout << left << setw(15) << ct3 << temp[2] << "°C  ";
        cout << left << setw(15) << ct4 << temp[3] << "°C  ";
        cout << endl;
    }
};

int main()
{
    temp_ture records[5]; // Array of 5 objects

    // Reading data for all 5 records
    cout << "Enter temperature data for 5 days:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\nRecord " << i + 1 << ":\n";
        records[i].readData();
    }

    // Displaying all records
    cout << "\nTemperature Records:\n";
    cout << "------------------------------------------------------------"
            "-------------------\n";
    cout << left << setw(12) << "Date";
    cout << left << setw(17) << "City 1";
    cout << left << setw(17) << "City 2";
    cout << left << setw(17) << "City 3";
    cout << left << setw(17) << "City 4";
    cout << endl;
    cout << "------------------------------------------------------------"
            "-------------------\n";

    for (int i = 0; i < 5; i++)
    {
        records[i].displayData();
    }

    return 0;
}