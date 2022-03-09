//
//  main.cpp
//  RockPaperScissors
//
//  Created by Louiem Celiberti on 9/3/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    // insert code here...
    string rock = "Rock", paper = "Paper", scissors = "Scissors";
    string player1;
    int random_number;
    printf ("What would you like to throw? \n");
    cin >> player1;
    srand(time(0));
    // generate number between 1 and 3:
    random_number = (rand() % 3) + 1;
    // Rock
    if(rock == "Rock" && random_number == 1){
        printf("Draw!\n");
    } else if(rock == "Rock" && random_number == 2){
        printf("Paper Wins! \n");
    } else if(rock == "Rock" && random_number == 2){
        printf("Rock Wins! \n");
    // Paper
    } else if(paper == "Paper" && random_number == 1){
        printf("Paper Wins! \n");
    } else if(paper == "Paper" && random_number == 2){
        printf("Draw\n");
    }else if(paper == "Paper" && random_number == 2){
            printf("Scissors Wins! \n");
    // Scissors
    } else if(scissors == "Scissors" && random_number == 1){
        printf("Rock Wins! \n");
    } else if(scissors == "Scissors" && random_number == 2){
        printf("Scissors Wins! \n");
    } else {
        printf("Draw! \n");
    }
    return 0;

}
