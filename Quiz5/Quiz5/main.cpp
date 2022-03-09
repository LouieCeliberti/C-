//
//  main.cpp
//  Quiz5
//
//  Created by Louiem Celiberti on 4/14/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

class Polygon{
protected:
    int width;
    int height;
public:
    void setValues(int w, int h){
           width = w;
           height = h;
    }
    virtual int area(){
      return 0;
    }
};

class Rectangle: public Polygon { // Rectangle class is inheriting class polygon
public:
    int area(){
        return width * height;
    }
};

class Triangle: public Polygon { // Triangle class is inheriting class polygon
public:
    int area(){
        return width * height / 2;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Rectangle rec;
    Triangle tri;
    
    Polygon *poly1 = &rec;
    Polygon *poly2 = &tri;

    poly1->setValues(3, 20);
    poly2->setValues(5,2);
    
    cout << "Area of Polygon 1 is: " << poly1->area() << endl;
    cout << "Area of Polygon 2 is: " << poly2->area() << endl;
    
    return 0;
}
