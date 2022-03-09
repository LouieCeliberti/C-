//
//  main.cpp
//  Read From A FIle
//
//  Created by Louiem Celiberti on 12/6/20.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string line;
    ifstream infile("/Users/louiemceliberti/Downloads/in.txt");
      if (infile.is_open())
      {
        while ( infile >> line )
        {
          cout << line << '\n';
        }
        infile.close();
      }

      else cout << "Unable to open file";

    return 0;
}
