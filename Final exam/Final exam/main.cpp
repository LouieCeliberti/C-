//
//  main.cpp
//  Final exam
//
//  Created by Louiem Celiberti on 5/6/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>
using namespace std;

/* Question 1:
int is_valid_word(string word);
string get_words(){
    string word;
    cin >> word;
    return word;
}
int is_valid_word(string word){
    if(word != word){
        
    }
}
void print_words_validity(){
    cout << get_words() << endl;
    cout << "Number of Valid Words: " << "Number of invalid words: " << endl;
}
int main(int argc, const char * argv[]) {
    print_words_validity();
    return 0;
}*/


//Question 4:
class Store{
protected:
    string name, url, address;
    double rate;
public:
    void setname(string n){
        name = n;
    }
    void seturl(string u){
        url = u;
    }
    void setaddress(string a){
        address = a;
    }
    void setrate(double r){
        rate = r;
    }
    string get_url(){
        return url;
    }
    string get_name(){
        return name;
    }
    string get_address(){
        return address;
    }
    double get_rate(){
        return rate;
    }

};
class WebStore : public Store{
public:
    WebStore(string n, double r, string u){
        url = u;
        name = n;
        rate = r;
    }
};
class MusicStore : public Store{
public:
    MusicStore(string a, double r, string n){
            address = a;
            name = n;
            rate = r;
        }
};


/*
 Question 2:
for(int i =0; i < size - 1; i++){
    if(arr[i] != arr[i+1] - 1){
        return arr[i] + 1;
    }
        return find_missing_num(arr, 5);
    }
}

int main(int argc, const char * argv[]) {
    const int size = 6;
    int arr[size]={1,2,3,4,5,6};
    find_missing_num(arr, size);
    //cout << a.add("Hello", "World") << endl;
    return 0;
}
*/
