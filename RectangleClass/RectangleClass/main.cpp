//
//  main.cpp
//  RectangleClass
//
//  Created by Louiem Celiberti on 4/8/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

/*
    int arr[] = {5,39,23,90,1};
    int length = 5;
    for(int i = 0; i < length; i++){
        cout << arr[i] << endl;
    }
 */
/*
 int arr[] = {120, 34, 23, 90, 84, 8};
 int length = 6;
 int product = 1;
 for(int i = 0; i < length; i++){
    product *= arr[i];
 }
 cout << "Product: " << product << endl;
 */
class Rectangle{
private:
    int width, height;
public:
    
    Rectangle(int w, int h){
        width = w;
        height = h;
    }
    Rectangle(){
        width = 5;
        height = 12;
    }
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }
    int areaofRectangle(){
        return width * height;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Rectangle rec(5,30);
    Rectangle rectb;
    cout << "Area of ";
    cout << rectb.getHeight();
    cout << " * ";
    cout << rectb.getWidth();
    cout << " = ";
    cout << rectb.areaofRectangle();
    cout << "\n";
     cout << "Area of ";
       cout << rec.getHeight();
       cout << " * ";
       cout << rec.getWidth();
       cout << " = ";
       cout << rec.areaofRectangle();
       cout << "\n"; 
    
    return 0;
}
