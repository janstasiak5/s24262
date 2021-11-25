#include <iostream>
#include <array>

using namespace std;

#define TOP 126
#define BOTTOM 33

int main()
{
   array<char, TOP-BOTTOM> ascii;
   char characters = BOTTOM;

   for (int i=0; characters<= ascii.max_size(); i++){
      ascii[i] = characters++;
      }
   for(int i=0;i<=ascii.max_size(); i++){
      cout<< "znak:"<<33 + i <<":"<<ascii[i]<<endl;
   }
   return 0;}
