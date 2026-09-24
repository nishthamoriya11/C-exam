#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
    string color;
    double area;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    void setArea(double a) {
        area = a;
    }

    double getArea() {
        return area;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    void calculateArea() {
        double a = 3.14 * radius * radius;
        setArea(a);
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    void calculateArea() {
        double a = length * width;
        setArea(a);
    }
};

int main() {

    Circle c;
    Rectangle r;

    c.setColor("Red");
    c.setRadius(5);
    c.calculateArea();

    cout << "Circle" << endl;
    cout << "Color: " << c.getColor() << endl;
    cout << "Area: " << c.getArea() << endl;

    cout << endl;

    r.setColor("Blue");
    r.setLength(10);
    r.setWidth(5);
    r.calculateArea();

    cout << "Rectangle" << endl;
    cout << "Color: " << r.getColor() << endl;
    cout << "Area: " << r.getArea() << endl;

    return 0;
}
