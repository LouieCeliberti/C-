//
//  main.cpp
//  PolygonClass
//
//  Created by Louiem Celiberti on 4/8/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

// Polymorphism

#include <iostream>
using namespace std;

class Polygon{
protected:
    int length, width; // rectangle variables
    int base, height; // triangle variables
    double Pi;
    int radius; // circle variables
public:
    void setValuesRectangle(int a, int b){
        length = a;
        width = b;
    }
    void setValuesTriangle(int c, int d){
        base = c;
        height = d;
    }
    void setValuesCircle(int z){
        Pi = 3.14;
        radius = z;
    }
    int areaofRectangle(){
        return length * width;
    }
    int areaofTriangle(){
        return (base * height)/2;
    }
    double areaofCircle(){
        return Pi*(radius*radius);
    }
};
class Rectangle : public Polygon{
public:
    Rectangle(int w, int l){
        width = w;
        length = l;
    }
};
class Triangle : public Polygon{
public:
    Triangle(int b, int h){
        base = b;
        height = h;
    }
};
class Circle : public Polygon{
public:
    Circle(int r){
        Pi = 3.14;
        radius = r;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Rectangle rec(3,6);
    cout << "Area of Rectangle is: " << rec.areaofRectangle() << endl;
    Triangle tri(93,2);
    cout << "Area of Triangle is: " << tri.areaofTriangle() << endl;
    Circle cir(9);
    cout << "Area of Circle is: " << cir.areaofCircle() << endl;
    
    Polygon *poly1 = &rec;
    Polygon *poly2 = &tri;
    Polygon *poly3 = &cir;
    
    cout << "Using Polymorphism" << endl;
    poly1->setValuesRectangle(3, 20);
    poly2->setValuesTriangle(5,2);
    poly3->setValuesCircle(3);
    cout << poly1->areaofRectangle() << endl;
    cout << poly2->areaofTriangle() << endl;
    cout << poly3->areaofCircle() << endl;
    
    return 0;
}
