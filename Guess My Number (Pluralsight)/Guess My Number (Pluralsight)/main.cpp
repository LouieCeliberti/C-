//
//  main.cpp
//  Guess My Number (Pluralsight)
//
//  Created by Louiem Celiberti on 9/4/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    bool keeprunning = true;
    while (keeprunning) {
        int answer;
        int player1;
        srand(time(0));
        answer = (rand() % 10) + 1;
        cout << "Please Guess a number between 1-10: \n";
        cin >> player1;
        if(player1 != answer){
            cout << "Guess again!\n";
        }else if(player1 == answer){
            keeprunning = false;
            cout << "Correct!!";
        }else{
            cout << "try guessing again" << endl;
        }
        cout << answer << endl;
}
    return 0;
}
