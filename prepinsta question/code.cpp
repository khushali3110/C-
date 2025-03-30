// 1. Positive or Negative number

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

// 2. Even or Odd number:
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

// 3. Sum of First N Natural numbers:

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

// 4. Sum of N natural numbers:
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

// }

// 5. Sum of numbers in a given range:
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

// 6. Greatest of two numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     int b=10;
//     (a>b) ? cout <<"A is greater!": cout <<"B is greater" ;

// }

// 7. Greatest of the Three numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=50;
//     int b=100;
//     int c=30;
//     (a>b && a<c) ? cout <<"A is greater!": (b>a && b>c) ? cout <<"B is greater!" : cout<<"c is greater" ;

// }

// 8. Leap year or not:

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

// 9 Prime number:

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

// 10. Prime number with count krse nd ketla count krse ae dekhase
// #include<iostream>
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

// 11. Prime number within a given range:
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

// 12. Sum of digits of a number:
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

// 13. Reverse of a number :
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


// 14. Palindrome number:
// reverse same thay ae palindrome like a : 121
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


// 15. Armstrong number :
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


// 16. Armstrong number :
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

//  Today


// // 17. Armstrong number in a given range:

// #include <iostream>
// #include <cmath>  // For pow() function

// using namespace std;

// // Function to check if a number is an Armstrong number
// bool isArmstrong(int num) {
//     int originalNum = num, sum = 0, digits = 0;

//     // Counting the number of digits
//     int temp = num;
//     while (temp > 0) {
//         temp /= 10;
//         digits++;
//     }

//     // Calculating the sum of each digit raised to the power of digits
//     temp = num;
//     while (temp > 0) {
//         int digit = temp % 10;         // Extract last digit
//         sum += pow(digit, digits);     // Raise to the power of 'digits' and add
//         temp /= 10;                    // Remove last digit
//     }

//     // If sum is equal to the original number, it's an Armstrong number
//     return sum == originalNum;
// }

// int main() {
//     int lower, upper;

//     // Taking user input for range
//     cout << "Enter the lower limit: ";
//     cin >> lower;
//     cout << "Enter the upper limit: ";
//     cin >> upper;

//     cout << "Armstrong numbers between " << lower << " and " << upper << " are: ";

//     // Checking each number in the range
//     for (int i = lower; i <= upper; i++) {
//         if (isArmstrong(i)) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }



// 18. fibonacci series upto nth term

// #include <iostream>
// using namespace std;


// void fibonacci(int n) {
//     int a = 0, b = 1, nextTerm;

//     cout << "Fibonacci Series up to " << n << " terms: ";

//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         nextTerm = a + b;  // Compute next term
//         a = b;             // Move first term to second
//         b = nextTerm;      // Move second term to next
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;

//     if (n <= 0) {
//         cout << "Please enter a positive number." << endl;
//     } else {
//         fibonacci(n);
//     }

//     return 0;
// }


// 19. Find the Nth Term of the Fibonacci Series

// #include <iostream>
// using namespace std;

// long long fibonacci(int n) {
//     if (n == 0) return 0;  // Base case: F(0) = 0
//     if (n == 1) return 1;  // Base case: F(1) = 1

//     long long a = 0, b = 1, nextTerm;

//     for (int i = 2; i <= n; i++) {
//         nextTerm = a + b;  // Compute next Fibonacci term
//         a = b;             // Move forward
//         b = nextTerm;
//     }

//     return b;  // Nth Fibonacci term
// }

// int main() {
//     int n;
//     cout << "Enter the term number (N): ";
//     cin >> n;

//     cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

//     return 0;
// }

// 20. Factorial of a number

// #include <iostream>
// using namespace std;

// long long factorial(int n) {
//     long long fact = 1;  // Initialize factorial as 1

//     for (int i = 1; i <= n; i++) {
//         fact *= i;  // Multiply fact by i
//     }

//     return fact;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         cout << "Factorial of " << n << " is: " << factorial(n) << endl;
//     }

//     return 0;
// }

// 21. Power of a number :
// 2^3 = 8
// 3^2 = 9

// #include <iostream>
// using namespace std;

// long power(int base, int exponent) {
//      long result = 1;  // Initialize result as 1

//     for (int i = 0; i < exponent; i++) {
//         result *= base;  // Multiply result by base in each iteration
//     }

//     return result;
// }

// int main() {
//     int base, exponent;

//     cout << "Enter base: ";
//     cin >> base;
//     cout << "Enter exponent: ";
//     cin >> exponent;

//     cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

//     return 0;
// }


// 22. Factor of a number :

// #include <iostream>
// using namespace std;

// void findFactors(int num) {
//     cout << "Factors of " << num << " are: ";

//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0) {  // If 'i' divides 'num' without remainder, it is a factor
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num <= 0) {
//         cout << "Please enter a positive number." << endl;
//     } else {
//         findFactors(num);
//     }

//     return 0;
// }


// 23. Finding Prime Factors of a number

// #include <iostream>
// using namespace std;

// void primeFactors(int n) {
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n /= i;
//         }
//     }
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Prime factors: ";
//     primeFactors(num);

// }

// 24. strong number
// For Example: 145
// 145 = 1! x 4! x 5! 

// 1, 4*3*2*1 , 5*4*3*2*1
// 1+24+120=145

// #include <iostream>
// using namespace std;

// // function to calculate factorial
// int facto(int n){
//     int fact = 1;

//     for(int i = 1; i <= n; i++)
//             fact = fact * i;

//     return fact;
// }

// int detectStrong(int num){

//     int digit, sum = 0;
//     int temp = num;

//     // calculate 1! + 4! + 5!
//     while(temp!=0){
//         digit = temp % 10;

//         sum = sum + facto(digit);
//         temp /= 10;
//     }

//     // returns 1 if both equal else 0
//     return sum == num;

// }
// int main ()
// {
//     int num = 145;

//     if(detectStrong(num))
//         cout << num << " is Strong Number";
//     else
//         cout << num << " is Not Strong Number";

// }


// 25. perfect number
// For Example: 28
// factor : 1 + 2 + 4 + 7 + 14 = 28

// #include <iostream>
// using namespace std;

// int main ()
// {
//     int n = 5, sum = 0;

//     for(int i = 1; i < n; i++){
//         if(n % i == 0)
//             sum = sum + i;
//     }

//     if(sum == n)
//         cout << n << " is a perfect number";
//     else
//         cout << n << " is not a perfect number";

// }


// 26. perfect square
// squre sacho hoy toh perfect 2²=4

// #include <bits/stdc++.h>
// using namespace std;

// bool isPerfectSquare(long double x)
// {
//     if (x >= 0) {

//         long long sr = sqrt(x);
//         return (sr * sr == x);
//     }

//     return false;
// }

// int main()
// {
//     long long x = 4;
//     if (isPerfectSquare(x))
//         cout << "True";
//     else
//         cout << "False";
//     return 0;
// }


// 27. automorphic number
// 6 = (6)² = 36(last number same hovo joye)
// 76 = (76)² = 5776 (last number same hovo joye)

// #include <iostream>
// using namespace std;

// int isAutomorphic(int n){

//     int square = n * n;

//     while(n != 0)
//     {
//         // means not automorphic number
//         if(n % 10 != square % 10){
//             return 0;
//         }

//         // reduce down numbers
//         n /= 10;
//         square /= 10;
//     }
//     // if reaches here means automorphic number
//     return 1;
// }

// int main ()
// {
//     int n = 376, sq = n * n ;

//     if(isAutomorphic(n))
//         cout << "Num: "<< n << ", Square: " << sq << " - is Automorphic";
//     else
//         cout << "Num: "<< n << ", Square: " << sq << " - is not Automorphic";

// }


// 28. harshad number
// 18 → Sum of digits = 1 + 8 = 9
// 18 is divisible by 9, so it is a Harshad number

// #include <iostream>
// using namespace std;

// int checkHarshad(int num){

//     int sum = 0;
//     int temp = num;

//     while(temp != 0){
//         sum = sum + temp % 10;
//         temp /= 10;
//     }

//     // will return 1 if num is divisible by sum, else 0
//     return num % sum == 0;
// }

// int main ()
// {
//     int n = 10;

//     if(checkHarshad(n))
//         cout << n << " is a Harshad's number";
//     else
//         cout << n << " is not a Harshad's number";

//     return 0;
// }


// 29 abundant number

// Ex:- Abundant number 12 having a proper divisor is 1, 2, 3, 4, 6

// The sum of these factors is 16 it is greater than 12
// So it is an Abundant number

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5, sum = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//             sum = sum + i;
//     }
//     if (sum > n)
//     {

//         cout << n << " is an Abundant Number\n";
//         cout << "The Abundance is: " << (sum - n);
//     }
//     else
//         cout << n << " is not an Abundant Number\n";
// }

// 30. friendly pair
// 1. Number 6:

// Divisors: 1, 2, 3, 6

// Sum of Divisors (): 1 + 2 + 3 + 6 = 12
// 12/6=2

// 2. Number 28:

// Divisors: 1, 2, 4, 7, 14, 28

// Sum of Divisors (): 1 + 2 + 4 + 7 + 14 + 28 = 56
// 56/28=2
// 2 2 is friendly pair


// #include <iostream>
// using namespace std;

// int getDivisorsSum(int num){
    
//     int sum = 0;
    
//     for(int i = 1; i < num; i++){
//         if(num % i == 0)
//             sum = sum + i;
//     }
//     return sum;
// }

// int main ()
// {
//     int num1 = 6, num2 = 28;
    
//     int sum1 = getDivisorsSum(num1);
//     int sum2 = getDivisorsSum(num2);
    
//     if(sum1/num1 == sum2/num2)
//         cout << num1 << " & " << num2 << " are friendly pairs";
//     else
//         cout << num1 << " & " << num2 << " are not friendly pairs";    
// 


// 31. Highest Common Factor(HCF):

//  #include <iostream>
//  using namespace std;
 
//  int hcf(int num1, int num2)
//  {
 
//      // Method - 1
     
//      for (int i = ((num1 < num2) ? num1 : num2); i >= 1; i--)
//      {
 
//          if (num1 % i == 0 && num2 % i == 0)
//          {
//              return i;
             
//          }
//      }
//  }
 
//  int main()
//  {
 
//      int num1 = 8;
//      int num2 = 20;
 
//      int result = hcf(num1, num2);
 
//      cout << "HCF of " << num1 << " and " << num2 << " is : " << result << endl;
//  }

// method 2
#include <iostream>
 using namespace std;
 
 int hcf(int num1, int num2)
 {
 
     // Method - 2
 
     int hcfdata = 0;
 
     for (int i = 1; i <= num1 || i <= num2; i++)
     {
 
         if (num1 % i == 0 && num2 % i == 0)
         {
             hcfdata = i;
         }
     }
 
     return 0;
 }
 
 int main()
 {
 
     int num1 = 8;
     int num2 = 20;
 
     int result = hcf(num1, num2);
 
     cout << "HCF of " << num1 << " and " << num2 << " is : " << result << endl;
 }