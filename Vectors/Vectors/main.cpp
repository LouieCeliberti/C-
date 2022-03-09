//
//  main.cpp
//  Vectors
//
//  Created by Louiem Celiberti on 11/16/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> vi;
    for(int i = 0; i <=10; i++){
        vi.push_back(i);
    }
    for(auto item: vi){
        cout << item << " ";
    }
    cout << endl;
    vi[3] = 203;
    vi[9] = 673;
    for(auto item: vi){
        cout << item << " ";
    }
    cout << endl;
//------------------------------------------------//
    vector<string> vs;
    cout << "Enter three words: \n";
    for(int i = 0; i < 3; i++){
        string s;
        cin >> s;
        vs.push_back(s);
    }
    for(auto item: vs){
        cout << item << " ";
    }
    cout << endl;
    
    
    return 0;
}
