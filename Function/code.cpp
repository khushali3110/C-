// #include <iostream>
// using namespace std;
// int addition (int num1 , int num2){
//     cout<<"num1 "<<num1<<endl;
//     cout<<"num2 "<<num2<<endl;

// }
// int main(){
//     addition(10,20);

// }

// #include <iostream>
// using namespace std;
// int addition (int num1 , int num2){
//     // cout<<"num1 "<<num1<<endl;
//     // cout<<"num2 "<<num2<<endl;
//     cout<<num1+num2<<endl;

// }
// int main(){
//     addition(10 , 40);
// }


// function basic start
// mostily used
// #include<iostream>
// using namespace std;


// // Function definition
// int addition(){    

//     cout<<"Function Called.."<<endl;
// }

// int main(){
//     addition();  // function call
// }


// sec way
// #include<iostream>
// using namespace std;

// // function declaration

// int addition();

// int main(){
//     addition();  // function call
// }

// // Function definition
// int addition(){

//     cout<<"Function Called.."<<endl;
// }

// +
// #include<iostream>
// using namespace std;

// // Function definition

// int addition(int num1, int num2){

//     cout<<"Function Called.."<<endl;

//     int sum = num1+num2;

//     cout<<"Sum : "<<sum<<endl;
// }

// int main(){
//     addition(20,20);  // function call
// }


// sec way +

// #include<iostream>
// using namespace std;

// // Function definition

// int addition(int num1, int num2){

//     cout<<"Function Called.."<<endl;

//     int sum = num1+num2;

//     return sum;
// }

// int main(){
//    int result =  addition(10,20);  // function call

//    cout<<"Result : "<<result<<endl;
// }



// 3 way with void
// #include<iostream>
// using namespace std;

// // Function definition

// void addition(int num1, int num2){

//     cout<<"Function Called.."<<endl;

//     int sum = num1+num2;
//     cout<<"Sum : "<<sum<<endl;

// }

// int main(){
//    addition(10,20);  // function call

// }


// string
// #include<iostream>
// using namespace std;

// // Function definition

// int printName(string name){

//  cout<<"Name : "<<name<<endl;

// }

// int main(){
//    printName("Fatima"); 

// }



// #include<iostream>
// using namespace std;

// // Function definition

// string printName(){
    
//     string name = "Fatima Maam";
//     return name;

// }

// int main(){
//  string str =  printName(); 

//  cout<<"Name : "<<str<<endl;

// }


// sky value
// 0 -> 48
// 9 -> 57

// A -> 65
// Z -> 90

// a = 97
// z = 122


// #include<iostream>
// using namespace std;

// int main(){

//     // const char *str = "khushali";

//     // cout<<str<<endl;

//         // or

//     const char str = 'k';

//     cout<<str<<endl;

//     int A = 'A';

//     int Z = 'Z';

//     int k = '0';
    
//     cout<<"ASCCI of A : "<<A<<endl;
//     cout<<"ASCCI of Z : "<<Z<<endl;
//     cout<<"ASCCI of k : "<<k<<endl;

//     char ch = 65;

//     cout<<ch<<endl;
// }



// function types

// // Type 1 : TSRN
// #include<iostream>
// using namespace std;
// int addition(int num1, int num2){
//     int sum = num1+num2;
//     cout<<"Sum : "<<sum<<endl;
// }
// int main(){
//     addition(10,20);
// }

// // Type 2 : TNRN
// #include<iostream>
// using namespace std;
// int addition(){
//     int num1= 10;
//     int num2 = 20;
//     int sum = num1+num2;
//     cout<<"Sum : "<<sum<<endl;
// }
// int main(){
//     addition();
// }

// // Type 3 : TNRS
// #include<iostream>
// using namespace std;
// int addition(){
//     int num1= 10;
//     int num2 = 20;
//     int sum = num1+num2;
  
//   return sum;
// }
// int main(){
//     cout<<"Sum : "<<addition()<<endl;
// }

// Type 4 : TSRS
// #include<iostream>
// using namespace std;
// int addition(int num1, int num2){
//     int sum = num1+num2;
  
//   return sum;
// }
// int main(){
//     cout<<"Sum : "<<addition(10,20)<<endl;
// }



// Default parameter
// #include<iostream>
// using namespace std;
// int addition(int num1, int num2 = 20){  // jab bhee ap default parameter set kr rhe ho to ap use ek dam right me krna in function me
//     int sum = num1+num2;
  
//   return sum;
// }
// int main(){
//     cout<<"Sum : "<<addition(10,30)<<endl;
// }


// Nested function
// #include<iostream>
// using namespace std;
// int calculate(){
//     cout<<"Outer Function Called.."<<endl;
//     auto addition=[](){
//         cout<<"Inner Function Called.."<<endl;
//     };
//     addition();
// }
// int main(){
//     calculate();
// }


// #include<iostream>
// using namespace std;
// int addition(){
//     cout<<"Inner Function Called.."<<endl;
// };
// int calculate(){
//     cout<<"Outer Function Called.."<<endl;
//     addition();
// }
// int main(){
//     calculate();
// }
