#include <iostream>
using namespace std;
class LandVehicle
{
public:
    LandVehicle()
    {
        cout << "This is a LandVehicle" << endl;
    }
};

class WaterVehicle
{
public:
    WaterVehicle()
    {
        cout << "This is a WaterVehicle" << endl;
    }
};

// sub class derived from two base classes
class AmphibiousVehicle : public WaterVehicle, public LandVehicle
{
public:
    AmphibiousVehicle()
    {
        cout << "This is an AmphibiousVehicle" << endl;
    }
};

int main()
{

    // Creating object of sub class will
    // invoke the constructor of base classes.
    AmphibiousVehicle obj;
    return 0;
}