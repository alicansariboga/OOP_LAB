
#include <iostream>
#include <cmath>
using namespace std;
double PI = 3.14;

class cylinder {

public:
    double area_cly;
    void area(double widht, double height) {
        double r= widht/2;
        area_cly = pow(r, 2) * PI * 2;
        area_cly = area_cly + (2*PI*r*height);
        cout << "Area of cylinder is " << area_cly << endl;
    }

    
};


class rectangle {
       
public:   
    double area_rec;
    void area(double widht, double height) {

        area_rec = widht * height;
        cout << "Area of rectagnle is " << area_rec << endl;
    }
};


int main()
{
    double width, height;
    rectangle Rectangle;
    cylinder Cylinder;
    cout << "Please enter the widht\n";
    cin >> width;
    cout << "Please enter the height\n";
    cin >> height;

    Rectangle.area(width, height);
    Cylinder.area(width, height);
    







}
