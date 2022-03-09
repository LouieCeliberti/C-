//
//  main.cpp
//  Vector
//
//  Created by Louie m Celiberti on 11/16/19.
//  Copyright © 2019 Louie m Celiberti. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> vi;
    for(int i = 0; i <= 10; i++){
        vi.push_back(i);
    }
    for(auto item: vi){
        cout << item << " ";
    }
    cout << endl;
    vi[5] = 904;
    vi[3] = 90;
    vi[1] = 2935235;
    for(auto item: vi){
        cout << item << " ";
    }
    cout << endl;
    return 0;
}
