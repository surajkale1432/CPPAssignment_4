// 3. Write a code to implement inheritance where vehicle is base class and derived
// classes like bike, car, bus etc.

#include <iostream>
using namespace std;

struct vehicle
{
    int noOfWheels;

    vehicle()
    {
        this->noOfWheels=0;
    }
    vehicle(int wheel)
    {
        this->noOfWheels=wheel;
    }
    void setWheels(int wheel)
    {
        this->noOfWheels = wheel;
    }
    int getWheels()
    {
        return this->noOfWheels;
    }
    void display()
    {
        cout<<"\n Vehicle Info";
        cout << "\nNo of wheels = " << this->noOfWheels;
    }
};
struct bus : public vehicle
{
    int noofWindow;
    bus():vehicle()
    {
        this->noofWindow=0;
    }
    bus(int wheel, int window):vehicle(wheel)
    {
        this->noofWindow=window;
    }
    void setWindows(int window)
    {
        this->noofWindow=window;
    }
    int getWindows()
    {
        return this->noofWindow;
    }
    void display()
    {
        vehicle::display();
        cout<<"\n Bus Info";
        cout<<"\nNo of Windows = "<<this->noofWindow;
    }
};
struct car : public vehicle
{
    int noofWindow;
    car():vehicle()
    {
        this->noofWindow=0;
    }
    car(int wheel, int window):vehicle(wheel)
    {
        this->noofWindow=window;
    }
    void setWindows(int window)
    {
        this->noofWindow=window;
    }
    int getWindows()
    {
        return this->noofWindow;
    }
    void display()
    {
        vehicle::display();
        cout<<"\n Car Info";
        cout<<"\nNo of Windows = "<<this->noofWindow;
    }
};
struct bike : public vehicle
{
    int noofShockups;
    bike():vehicle()
    {
        this->noofShockups=0;
    }
    bike(int wheel,int shockup):vehicle(wheel)
    {
        this->noofShockups=shockup;
    }
    void setShockup(int shockup)
    {
        this->noofShockups=shockup;
    }
    int getShockup()
    {
        return this->noofShockups;
    }
    void display()
    {
        vehicle::display();
        cout<<"\n Bike Info";
        cout<<"\nNo of Shockups = "<<this->noofShockups;
    }
};
int main()
{
    vehicle v1(10);
    v1.display();

    bus b1(10,20);
    b1.display();

    car c1(4,4);
    c1.display();

    bike bk1(2,6);
    bk1.display();
}