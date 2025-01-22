// &-addres suggest krse
// #include<iostream>
// using namespace std;

// int main(){
//   int n = 10;
//   int arr[n];
//   arr[0] = 10;
//   arr[1] = 20;
//   arr[2] = 30;
//   arr[3] = 40;
//   arr[4] = 50;
//   arr[5] = 60;
//   arr[6] = 70;
//   arr[7] = 80;
//   arr[8] = 90;
//   arr[9] = 100;

//   cout<<arr[0]<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<&arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<&arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<&arr[3]<<endl;
//   cout<<arr[4]<<endl;
//   cout<<&arr[4]<<endl;
//   cout<<arr[5]<<endl;
//   cout<<&arr[5]<<endl;
//   cout<<arr[6]<<endl;
//   cout<<&arr[6]<<endl;
//   cout<<arr[7]<<endl;
//   cout<<&arr[7]<<endl;
//   cout<<arr[8]<<endl;
//   cout<<&arr[8]<<endl;
//   cout<<arr[9]<<endl;
//   cout<<&arr[9]<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){

//   int arr[10] = {10,20,30,40,50,60,70,80,90,100};

//   cout<<arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<arr[4]<<endl;
//   cout<<arr[5]<<endl;
//   cout<<arr[6]<<endl;
//   cout<<arr[7]<<endl;
//   cout<<arr[8]<<endl;
//   cout<<arr[9]<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//   int n = 10;

//   int arr[n] ={10,20,30,40,50,60,70,80,90,100};

//   for(int i = 0; i < n; i++){
//     cout<<arr[i]<<endl;
//     // cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//   }
// }

// user thi input lidhu che
// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cout<<"Enter element at "<<i<<" index : ";  // user help
//   cin>>arr[i];  // user se input liya hai
// }

// // print array

// for(int i = 0; i < n; i++){
//   cout<<"Element present at "<<i<<" index : ";  // user help
//   cout<<arr[i]<<endl;
// }
// }

// banne atlu use thse ny just knowledge mate
// je i/p nakhishu ae o/p same print krse
// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cin>>arr[i];  
// }

//     for(int i=0; i<n; i++){
//         cout<<i<<arr[i]<<endl;
//     }

// // print array

// for(int i = 0; i < n; i++){
//   cout<<arr[i]<<" ";
// }
// }



// size of array
// #include<iostream>
// using namespace std;

// int main(){

// int arr[] = {10,20,30,40,50,60,70,80,90};


// // sizeof()

// int size = sizeof(arr);

// cout<<size<<endl;

// int length = sizeof(arr)/sizeof(arr[0]);

// cout<<"Length : "<<length<<endl;

// // print array

// for(int i = 0; i < length; i++){
//   cout<<arr[i]<<" ";
// }
// }



// serach of array
// #include<iostream>
// using namespace std;

// int main(){

// int n = 8;

// int arr[n] = {10,20,30,40,50,60,70,60};

// int key = 60;

// for(int i = 0; i < n; i++){
//   if(arr[i] == key){
//     cout<<"Element present in array at "<<i<<" index! "<<endl;
//   }
// }
// }

// sum of Array
// #include <iostream>
// using namespace std;

// int main() {
//     int sum = 0;
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};


//     for (int i = 0; i < 8; i++) {
//         sum += arr[i]; // Add each element to the sum
//         cout << "Current sum: " << sum << endl;
//     }

//     cout << "Total sum: " << sum << endl; // Output the final sum
   
// }

// for each loop
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10,20,30,40,50};

//     // forEach()

//     for(int element : arr){
//         cout<<element<<endl;
//     }
// }

// even no
// #include<iostream>
// using namespace std;
// int main(){
//  int arr[5] = {10,23,30,45,50};

//     // forEach()

//     for(int element : arr){
//         if(element%2 == 0){
//             cout<<element<<" ";
//         }
//     }
// }


// datatype ni size means bytes
// #include<iostream>
// using namespace std;

// int main(){
    
//     cout<<"Integer : "<<sizeof(int)<<endl;
//     cout<<"Double : "<<sizeof(double)<<endl;
//     cout<<"Float : "<<sizeof(float)<<endl;
//     cout<<"Character : "<<sizeof(char)<<endl;
//     cout<<"Boolean : "<<sizeof(bool)<<endl;
//     cout<<"String : "<<sizeof(string)<<endl;

//     int a = 10;

//     cout<<sizeof(a)<<endl;
// }

// CRUD
// Create
// #include<iostream>
// using namespace std;

// int main(){
//   int n = 10;

//   int arr[n] ={1,2,3,4,5,6,7,8,9,10};

//   for(int i = 0; i < n; i++){
//     cout<<arr[i]<<endl;
//     // cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//   }
// }

// Read
// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cin>>arr[i];  
// }

//     for(int i=0; i<n; i++){
//         cout<<i<<arr[i]<<endl;
//     }

// // print array

// for(int i = 0; i < n; i++){
//   cout<<arr[i]<<" ";
// }
// }


// update
// #include<iostream>
// using namespace std;

// int main(){
    
//    int arr[5] = {10,2,30,40,50};

//    arr[1] = 20;

//    for(int element : arr){
//     cout<<element<<" ";
//    }
// }

// sec way of update fast chlse
// #include<iostream>
// using namespace std;

// int main(){
    
//    int arr[6] = {10,2,30,40,50,60};

//     for(int i = 0; i < 6; i++){
//         if(i==1){
//             arr[i] = 24;
//             break;
//         }
//     }

//    for(int element : arr){
//     cout<<element<<" ";
//    }

// }

// delete
// #include<iostream>
// using namespace std;

// int main(){
    
//    int arr[5] = {10,2,30,40,50};

// // delete

//     for(int i = 0; i < 5; i++){
//        arr[i] = arr[i+1];
//     }

// // array display

//   for(int i = 0; i < 4; i++){
//     cout<<arr[i]<<" ";
//   }

// }

// dynamic che
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Size of Array : ";
//     cin>>n;
//    int arr[n];

//   for(int i = 0; i < n; i++){
//     cout<<"Enter element at "<<i<<" index : ";
//     cin>>arr[i];
//    }

//     int deleteIndex;
//    cout<<"Enter index number of deleting element : ";
//    cin>>deleteIndex;
// // delete

//     for(int i = deleteIndex; i < n; i++){
//        arr[i] = arr[i+1];
//     }

// // array display

//     for(int i = 0; i < n-1; i++){
//         cout<<arr[i]<<" ";
//     }

// }
 
