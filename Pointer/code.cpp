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
