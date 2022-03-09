//
//  main.cpp
//  Log10Problem
//
//  Created by Louiem Celiberti on 10/9/19.
//  Copyright © 2019 Louiem Celiberti. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(void){
int n;
cin >> n;
int L = log10(n);
int first_digit = n/pow(10, L); // 12345 / 10000 = 1
int last_digit = n % 10; // 12345 % 10000 = 5
int res_num = last_digit * pow(10, L); // 5 * 10,000 = 50,000
cout << n - first_digit * pow(10, L) << endl; // 12,345 - 10,000 = 2345
res_num += (n - first_digit * pow(10, L)) - last_digit + first_digit; cout << res_num << endl; //50,000 + (12345-10,000) -> 2345 + 50,000 -> 52,345 - 5 -> 1 + 1
return 0;
}
