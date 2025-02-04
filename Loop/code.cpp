// 1 to 100

// #include <iostream>
// using namespace std;
// int main(){
//     int num1;
//     for(int i=1; i<=100; i++){
//         cout<<i<<endl;
//     }
// }

// prime number



// prime or not with count
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;
//     int count = 0;
//     for(int i= 10; i <=50;  i++ ){
//        if(num%i == 0){
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

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter Number: ";
//     cin >> num;

//     // Check if the number is greater than 1
//     if (num <= 1) {
//         cout << "Not Prime!" << endl;
//         return 0;
//     }

//     int count = 0;

//     // Loop to check divisors
//     for (int i = 1; i <= num; i++) {
//         if (num % i == 0) {
//             count++;
//         }
//     }

//     // Prime number condition
//     if (count == 2) {
//         cout << "Prime Number!" << endl;
//     } else {
//         cout << "Not Prime!" << endl;
//     }

//     return 0;
// }

// even odd
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     for (num = 1; num <= 100; num++)
//     {
//         if (num % 2 == 0)
//         {
//             cout << num << endl;
//         }
//     }
// }

// 5 table
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     for (num = 1; num <= 10; num++)
//     {
//         cout << num * 10 << " ";
//     }
// }

// range
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     int sum = 0;
//     for(num = 1; num <=10;  num++ ){
//         sum += num;
//     }
//     cout<<sum<<endl;
// }




// // while loop range of prime number
// #include<iostream>
// using namespace std;
// int main(){
//    char choice = 'y';
   
//    while(choice == 'y' || choice == 'Y' )
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
//     cout<<"\nAre you want to try next (y/n) : ";
//     cin>>choice;
    
//    }
// }

