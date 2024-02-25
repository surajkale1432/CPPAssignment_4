#include <iostream>
using namespace std;
float PI = 3.147;
struct Shape
{
    float area;
};
struct circle : public Shape
{
    float r;

    void setRadius(float r)
    {
        this->r = r;
    }
    float getRadius()
    {
        return this->r;
    }
    circle()
    {
        this->r = 0;
    }
    circle(float r)
    {
        this->r = r;
    }
    void display()
    {
        cout << "radius  = " << this->r;
    }
    float calculateArea()
    {
        return this->area = PI * this->r * this->r;
    }
};
struct tringle : public Shape
{
    float b, h;

    void setBredth(float b)
    {
        this->b = b;
    }
    void setHeight(float h)
    {
        this->h = h;
    }
    float getBredth()
    {
        return this->b;
    }
    float getHeigth()
    {
        return this->h;
    }

    tringle()
    {
        this->b = 0;
        this->h = 0;
    }
    tringle(float b, float h)
    {
        this->b = b;
        this->h = h;
    }
    void display()
    {
        cout << "\nBredth  = " << this->b;
        cout << "\nHeigth  = " << this->h;
    }
    float calculateArea()
    {
        return this->b * this->h;
    }
};
struct rectangle : public Shape
{
    float l, w;
    rectangle()
    {
        this->l = 0;
        this->w = 0;
    }
    rectangle(float l, float w)
    {
        this->l = l;
        this->w = w;
    }
    void setLength(float l)
    {
        this->l = l;
    }
    void setWidth(float w)
    {
        this->w = w;
    }
    float getLength()
    {
        return this->l;
    }
    float getWidth()
    {
        return this->w;
    }

    void display()
    {
        cout << "\nLenth  = " << l;
        cout << "\nWidth  = " << w;
    }
    float calculateArea()
    {
        area = 2 * l * w;
        return area;
    }
};
int main()
{
    circle c1(56);
    rectangle r1(10, 20);
    tringle t1(30, 40);

    c1.display();
    cout << "\nArea of Circle = " << c1.calculateArea();
    cout << "\n";
    r1.display();
    cout << "\nArea of Rectangle = " << r1.calculateArea();
    cout << "\n";
    t1.display();
    cout << "\nArea of Tringle = " << t1.calculateArea();
}