// artist painter musician

#include <iostream>
#include <string.h>
using namespace std;

class artist
{
protected:
    char name[20];
    int age;
    char gender[10];

public:
    // Default constructor suru
    artist()
    {
        strcpy(this->name, "NotGiven");
        this->age = 0;
        strcpy(this->gender, "NotDefine");
    }
    // Parameterised constructor suru
    artist( char *name, int age,  char *gender)
    {
        strcpy(this->name, name);
        this->age = age;
        strcpy(this->gender, gender);
        // this->gender=gender;
    }
    // setters
    void setName( char *name)
    {
        strcpy(this->name, name);
        // this->name=name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender( char *gender)
    {
        strcpy(this->gender, gender);
        // this->gender=gender;
    }
    // getters
    char *getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    char *getGender()
    {
        return this->gender;
    }

    // Display
    void display()
    {
        cout << "\nName   = " << this->name;
        cout << "\nAge    = " << this->age;
        cout << "\nGender = " << this->gender;
    }
};
class Painter : public artist
{
protected:
    int noOfBrush;
    char paintingType[20];

public:
    Painter() : artist()
    {
        this->noOfBrush = 0;
        strcpy(this->paintingType, "NotSpecified");
        // this->paintingType=
    }
    Painter( char *name, int age,  char *gender, int noOfBrush,  char *paintingType) : artist(name, age, gender)
    {
        this->noOfBrush = noOfBrush;
        strcpy(this->paintingType, paintingType);
        // this->paintingType=paintingType;
    }
    void setBrush(int noOfBrush)
    {
        this->noOfBrush = noOfBrush;
    }
    void setPaintingType(const char *paintingType)
    {
        strcpy(this->paintingType, paintingType);
        // this->paintingType=paintingType;
    }
    int getBrush()
    {
        return this->noOfBrush;
    }
    char *getPaintingType()
    {
        return this->paintingType;
    }

    void display()
    {
        artist::display();
        cout << "\nNoOfBrush    = " << this->noOfBrush;
        cout << "\nPaintingType = " << this->paintingType;
    }
};
int main()
{
    artist a1;
    char name[10] = "Vivek";
    char gender[10] = "Male";
    char name1[10] = "Shubham";
    char paintingType[20] = "OilPainting";
    Painter p1(name, 81, gender, 5, paintingType);
    a1.setAge(27);
    a1.setName(name1);
    a1.setGender(gender);
    a1.display();
    p1.display();
}