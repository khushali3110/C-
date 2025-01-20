// Positive or Negative number

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter number:";
//     cin>>num;

//     if(num>0)
//     {
//         cout<<"positive number"<<endl;
//     }

//     else if(num<0)
//     {
//         cout<<"negative number"<<endl;
//     }
//     else
//     {
//         cout<<"num is neither positive nor negative"<<endl;
//     }
// }

// Even or Odd number:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter num:";
//     cin >> num;
//     if (num % 2 == 0){
//     cout<<"Even number!"<<endl;
//     }
//     else{
//         cout<<"odd number!"<<endl;
//     }
// }

// Sum of First N Natural numbers:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter natural number";
//     cin >> n;
//     int sum = n * (n + 10) / 2;

//     cout << "sum of natural number:"<< sum << endl;
// }

// Sum of N natural numbers:
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     int sum=0;

//     for(int i=1;i<=n;i++)
//         sum+=i;

//     cout << sum;

//     return 0;
// }

// Sum of numbers in a given range:
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     int sum = 0;
//     for(num = 1; num <=100;  num++ ){
//         sum += num;
//     }
//     cout<<sum<<endl;
// }

// Greatest of two numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     int b=10;
//     (a>b) ? cout <<"A is greater!": cout <<"B is greater" ;

// }

// Greatest of the Three numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=50;
//     int b=100;
//     int c=30;
//     (a>b && a<c) ? cout <<"A is greater!": (b>a && b>c) ? cout <<"B is greater!" : cout<<"c is greater" ;

// }

// Leap year or not:

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int year;
//     cout << "Enter Year:";
//     cin >> year;

//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//     {
//         cout << "leap year" << endl;
//     }
//     else
//     {
//         cout << "not leap " << endl;
//     }
// }

// Prime number:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter number:";
//     cin >> num;

//     int count = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }
//     if (count == 2)
//     {
//         cout << "prime num" << endl;
//     }
//     else
//     {
//         cout << "not prime!" << endl;
//     }
// }

// Prime number with count krse nd ketla count krse ae dekhase
//  #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 1; i <=num;  i++ ){
//        if(num%i == 0){
//         cout<<i<<endl;
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }

// }

// Prime number within a given range:
// #include<iostream>
// using namespace std;
// int main(){
// //    char choice = 'y';

// //    while(choice == 'y' || choice == 'Y' )
// {

//    int start;
//    cout<<"Enter Start Number :";
//    cin>>start;
//    int end;
//    cout<<"Enter end number : ";
//    cin>>end;
//     for(int num = start; num<=end; num++){
//         int count = 0;
//         for(int i = 1; i <= num; i++){
//             if(num%i == 0){
//                 count++;
//             }
//         }
//         if(count == 2){
//             cout<<num<<" ";
//         }
//     }
//     // cout<<"\nAre you want to try next (y/n) : ";
//     // cin>>choice;

//    }
// }

// Sum of digits of a number:
// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int sum = 0;

//     while(num>0){

//         int digit = num%10;  // last digit  186%10 => 6  , 18%10  => 8, 1%10=> 1

//         sum += digit;  // 0 +6 +8 +1

//         num = num/10;  // last digit remove  186/10 => 18, 18/10 => 1, 1/10 => 0

//     }

//     cout<<"Sum : "<<sum<<endl;

// }

// Reverse of a number :
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int rev = 0;

//     while(num>0){
//         int digit = num%10;

//         rev = rev*10 + digit;

//         num = num/10;
//     }

//     cout<<"Reverse : "<<rev<<endl;
// }

// Palindrome number:
// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int temp = num;

//     int rev = 0;

//     while(num>0){
//         int digit = num%10;

//         rev = rev*10 + digit;

//         num = num/10;
//     }

//    if(temp == rev){
//     cout<<"Palindrome Number!"<<endl;
//    }else{
//     cout<<"Not Palindrome Number!"<<endl;
//    }
// }

// Armstrong number :
// Example = 407 (power = 3)
// 407 =  64 + 0 + 343 = 407
// #include <iostream>
// #include <math.h>
// using namespace std;

// int countValue(int num)
// {

//     int count = 0;

//     while (num > 0)
//     {

//         num = num / 10;

//         count++;
//     }

//     return count;
// }

// int main()
// {

//     int num;
//     cout << "Enter Number : ";
//     cin >> num;

//     int power = countValue(num);

//     cout << "Power : " << power << endl;

//     int original = num;

//     int sum = 0;

//     while (num > 0)
//     {
//         int digit = num % 10;

//         sum += pow(digit, power);

//         num = num / 10;
//     }

//     if (original == sum)
//     {
//         cout << "Armstrong Number!" << endl;
//     }
//     else
//     {
//         cout << "Sorry, Not Armstrong Number!" << endl;
//     }
// }

// Armstrong number in a given range:


// fibonacci series upto nth term