//
//  main.cpp
//  CMPT239 Assignment 5
//
//  Created by Louiem Celiberti on 10/29/20.
//

#include <iostream>
using namespace std;

// Question 1:
void print_count(int n){
    cout << n << endl; // prints 5 4 3 2 1 0
    if (n > 0)
        print_count(n-1);
    cout << n << endl; // prints 0 1 2 3 4 5
}

// Question 2:
int sum_digits(int n){

   if (n == 0){ // stopping when n = 0
       return 0;
   }
    
   int sum = (n%10 + sum_digits(n/10)); // the sum of digits
   if (n >= 10)
       cout << " + "; // to ensure the format asked in question is correctly printed, only print + signs if it is NOT the first digit which means n > 10;

   cout << n%10; // we print the digits before we return the sum
   return sum; // return the sum of digits of the current n

}
int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    
    print_count(5);
    
    int total_sum = (n % 10 + sum_digits(932));
    cout << " = " << total_sum << endl;
    
    return 0;
}
