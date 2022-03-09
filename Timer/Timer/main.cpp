//
//  main.cpp
//  Timer
//
//  Created by Louiem Celiberti on 11/16/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include <term.h>
using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;


/*void displayClock(){
    cout << setfill(' ') << setw(55) << "           Timer           \n";
    cout << setfill(' ') << setw(55) << " ------------------------- \n";
    cout << setfill(' ') << setw(29);
    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
    cout << setfill('0') << setw(2) << minutes << " min | ";
    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
    cout << setfill(' ') << setw(55) << " --------------------------\n";
}*/
void Timer(){
    while(true){
        cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
        cout << setfill('0') << setw(2) << minutes << " min | ";
        cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
        sleep(1);
        seconds++;
        if(seconds == 60){
            minutes++;
            if(minutes == 60){
                hours++;
                minutes = 0;
            }
            seconds = 0;
        }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Timer();
    return 0;
}
