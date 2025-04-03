// Requrtion with prime

#include <iostream>
using namespace std;
 int prime(int num, int i,int count)
 {
 
     // base condition
    //  phela aa chlse pachi next condition
     if (i > num)
     {
         return count;
     }
 
     if (num % i == 0)
     {
         count++;
         
         
     }
 
     return prime(num, i+1, count);
 }
 
 int main()
 {
     int num;
     cout << "Enter Number : ";
     cin >> num;
     int count = prime(num,1,0);
 
     if (count == 2)

     {
         cout << "Prime Number!" << endl;
     }
     else
     {
         cout << "Not Prime Number!" << endl;
     }
 }