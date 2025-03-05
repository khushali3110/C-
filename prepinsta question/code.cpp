//1 Positive or Negative number

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

// 2 Even or Odd number:
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

// 3 Sum of First N Natural numbers:

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

// 4 Sum of N natural numbers:
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

// 5 Sum of numbers in a given range:
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

// 6 Greatest of two numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     int b=10;
//     (a>b) ? cout <<"A is greater!": cout <<"B is greater" ;

// }

// 7 Greatest of the Three numbers:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=50;
//     int b=100;
//     int c=30;
//     (a>b && a<c) ? cout <<"A is greater!": (b>a && b>c) ? cout <<"B is greater!" : cout<<"c is greater" ;

// }

// 8 Leap year or not:

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


// 10 Prime number with count krse nd ketla count krse ae dekhase
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


// 11 Prime number within a given range:
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

// 12 Sum of digits of a number:
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

// 13 Reverse of a number :
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

// 14 Palindrome number:
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

// 15 Armstrong number :
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

// 16 Armstrong number :
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

// // 17 Armstrong number in a given range:

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


// 18 fibonacci series upto nth term

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

// 19 Find the Nth Term of the Fibonacci Series 

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

// 20 Factorial of a number 

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

// 21 Power of a number :

// #include <iostream>
// using namespace std;

// long long power(int base, int exponent) {
//     long long result = 1;  // Initialize result as 1

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

// 22 Factor of a number :

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

// 23 Finding Prime Factors of a number :

// #include <iostream>
// using namespace std;

// void primeFactors(int num) {
//     cout << "Prime factors of " << num << " are: ";

//     // Step 1: Divide by 2 (smallest prime number)
//     while (num % 2 == 0) {
//         cout << 2 << " ";
//         num /= 2;
//     }

//     // Step 2: Check for odd prime factors (starting from 3)
//     for (int i = 3; i * i <= num; i += 2) {
//         while (num % i == 0) {
//             cout << i << " ";
//             num /= i;
//         }
//     }

//     // Step 3: If a prime number greater than 2 remains
//     if (num > 2) {
//         cout << num;
//     }
    
//     cout << endl;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (num <= 1) {
//         cout << "No prime factors for numbers less than 2." << endl;
//     } else {
//         primeFactors(num);
//     }

//     return 0;
// }



// 24 Finding Prime Factors of a number 
#include <iostream>
using namespace std;

void primeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {  
            cout << i << " ";
            n /= i;
        }
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime factors: ";
    primeFactors(num);
    
}
