// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;    // variable declared
//     int *ptr = &a; // pointer variable declared and assign address of a.

//     // value
//     cout << "a : " << a << endl;
//     cout << "*ptr : " << *ptr << endl;
//     // address
//     cout << "Address of a : " << &a << endl;
//     cout << "Address of ptr : " <<
//     ptr << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;

//     int *ptr1 = &a;

//     int **ptr2 = &ptr1;

//     cout<<*ptr1<<endl;  //10
//     cout<<ptr1<<endl;   //add

//     cout<<&a<<endl;  //add

//     cout<<*ptr2<<endl;     //add

//     cout<<**ptr2<<endl;     //10
// }


// Array pointer
// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[5] = {10, 20, 30, 40, 50};

//     // int *ptr = arr;  ->array ka base address -> &arr[0]

//     // cout<<arr<<endl;     //add

//     // cout<<&arr[0]<<endl;     //add

//     // int *ptr = arr;

//     // cout<<*ptr<<endl;

//     int *ptr = arr;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Address of " << i << " index : " << (&ptr + i) << " and its value : ";
//         cout << *(ptr + i) << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int x = 10;

//     int *ptr = &x;

//     cout<<x<<endl;  //10
//     cout<<*ptr<<endl; // 10

//     *ptr = 80;

//     cout<<x<<endl;  //80
//     cout<<*ptr<<endl; // 80
// }


//  refrence variable -> address -> & -> refrence varable store the address of another variable



// #include<iostream>
// using namespace std;

// int print(int &y){

//     cout<<"Value of y : "<<y<<endl;
//     cout<<"Address Value of y : "<<&y<<endl;

//     y = 100;

// }

// int main(){
    
//     int k = 10;

//     print(k);

//     cout<<"Value of k : "<<k<<endl;
//     cout<<"Address Value of k : "<<&k<<endl;
// }



// call by value 
// upper jevo j che sam here passing value
// extra che book ma nathi lakhyu 

// #include <iostream>
// using namespace std;

// // function to update the original value
// void increment(int num)
// {
//     cout<<"post inc : "<<num++<<endl;  //5
//     cout << num << endl;  //6
// }

// int main()
// {
//     int number = 5;
//     increment(number); // Passing 'number' by value
//     cout << number << endl;
//     return 0;
// }
