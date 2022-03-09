//
//  main.cpp
//  Blackjack
//
//  Created by Louiem Celiberti on 9/6/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    
    // insert code here...
    
    cout << "Welcome to Blackjack, Please press 1 to get dealt your first hand.\n";
    
    string types[] = { " of Hearts", " of Spades", " of Diamonds", " of Clubs" };
    
    bool hitme = true;
    
    bool gameEnded = false;
    int total = 21, deal;
    int player1 = 0;
    int dealer = 0;
    
    while (hitme) {
        
        srand(time(0));
        int random_number = (rand() % 10) + 2;
        int random_number1 = (rand() % 10) + 2;
        int dealer_random_number = (rand() % 10) + 2;
        int dealer_random_number1 = (rand() % 10) + 2;

        
        cin >> deal;
        
        if (deal == 1) {
            
            // first hand
            cout << "Player1: \n";
            cout << random_number << types[(rand() % 3)] << endl;
            cout << random_number1 << types[(rand() % 3)] << endl;
            player1 = random_number + random_number1;
            cout << player1 << endl;
            
            cout << "Dealer: \n";
            cout << dealer_random_number << types[(rand() % 3)] << endl;
            cout << dealer_random_number1 << types[(rand() % 3)] << endl;
            dealer = dealer_random_number + dealer_random_number1;
            cout << dealer << endl;
            
        }
        else if (deal == 0) {
            hitme = false;
        }
        if(deal == 2){
            cout << random_number << types[(rand() % 3)] << endl;
            player1 = player1 + random_number;
            cout<< player1 << endl;
            
            cout << dealer_random_number << types[(rand() % 3)] << endl;
            dealer = dealer + dealer_random_number;
            cout<< dealer << endl;
            
            
            if (player1 == total) {
                cout << "Congradulations you beat the dealer!! \n";
                gameEnded = true;
                break;
            }
            else if (player1 > total) {
                cout << "Sorry, you went over 21, play again!! \n";
                gameEnded = true;
                break;
            }
            if (dealer == total) {
                cout << "Sorry, the dealer won, play again!! \n";
                gameEnded = true;
                break;
            }
            else if (dealer > total) {
                cout << "Congradulations you beat the dealer!! \n";
                gameEnded = true;
                break;
            }
        }
    }
    if (!gameEnded) {
        if (player1 > dealer) {
            cout << "Congradulations you beat the dealer!! \n";
        }
        else if (player1 == dealer) {
            cout << "It's a tie!! \n";
        }
        else {
            cout << "Sorry, the dealer won, play again!! \n";
        }
    }
    return 0;
}
