//
//  main.cpp
//  Multicative Hash Functions
//
//  Created by Louie m Celiberti on 12/6/20.
//

#include <iostream>
#include <fstream>
using namespace std;

/*
 set an integer hash to initial value
 for each character in the string
 multiply the hash times M, then add the integer value of the current string character
 
 Key % M
 
 Calculate the hash value using “hash_f” with init = 0 and M = 1.
 Then mark the index of hash value in hash table 1 as occupied (i.e. hashtable1[hash_value] = 1). If this place is already occupied, add 1 to the collisions of this hash table. -> The MOST COLLISIONS
 
 b. Do the same as (a) using hash table 2 and “hash_f” with init = 0 and M = 31 Count collisions of hash table 2. -> less collision
 
 
 c. Do the same as (a) and (b) using hash table 3 and “hash_f” with init = 5381 and M = 33 Count collisions of hash table 3. -> less collision
 */
int hash_f(string key, int init, int M){
    int hash = init;
    for(char ch: key){
        hash *= M;
        hash += ch;
    }
    return hash;
}
int main(int argc, const char * argv[]) {
    
    string key;
    int hash_table1[1000],
        hash_table2[1000],
        hash_table3[1000];
    
    int hash_value1, coll1 = 0;
    int hash_value2, coll2 = 0;
    int hash_value3, coll3 = 0;
    
    // open the file
    ifstream infile;
    infile.open("/Users/louiemceliberti/Downloads/in.txt");

    while(infile >> key){
          // keep reading until done with file;
       hash_value1 = hash_f(key, 0, 1);
       hash_value2 = hash_f(key, 5381, 33);
       hash_value3 = hash_f(key, 0, 3);
       
       if(hash_table1[hash_value1] == 1){
               coll1++;
        }
       hash_table1[hash_value1] = 1;
             
       if(hash_table2[hash_value2] == 1){
               coll2++;
        }
       hash_table2[hash_value2] = 1;
             
       if(hash_table3[hash_value3] == 1){
               coll3++;
        }
       hash_table3[hash_value3] = 1;
        
        infile.close();
  }
    cout << coll1 << " " << coll2 << " " << coll3 << endl;
    cout << " Total numbers of keys read: " << key;
    
    return 0;
}
