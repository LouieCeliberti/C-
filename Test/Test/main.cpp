//
//  main.cpp
//  Test
//
//  Created by Louiem Celiberti on 4/29/20.
//  Copyright © 2020 Louiem Celiberti. All rights reserved.
//

#include <iostream>

int main()
{
   int* array = new int[10];

   for (int i = 0; i < 10; ++i)
   {
      array[i] = i;
      std::cout << array[i] << std::endl;
   }

   delete [] array;

   return 0;
}
