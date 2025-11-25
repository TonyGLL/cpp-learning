#include <iostream>

using namespace std;

// Class definition (mock)
class Car
{
public: // Public access
    string brand;
    int year;

    // Constructor: Excute when create the object
    Car(string m, int a)
    {
        brand = m;
        year = a;
    }

    // Method (functio inside a class)
    void run()
    {
        cout << "The " << brand << " of year " << year << " its running... Brum brum!" << endl;
    }
};

int main()
{
    // Create objects
    Car car1("Toyota", 2020);
    Car car2("Ford", 1999);

    car1.run();
    car2.run();

    return 0;
}