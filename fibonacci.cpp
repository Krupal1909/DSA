#include<iostream>
using namespace std;

int main(){
   int n=10;
   int a = 0;
   int b = 1;

   for (int i = 0; i < n; i++)
   {
        int CountNumber = a+b;
        cout << CountNumber << endl;
         
        a=b;
        b=CountNumber;
        CountNumber=a;
        
   }
    
}