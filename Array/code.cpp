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


#include<iostream>
using namespace std;

int main(){
  int n = 10;

  int arr[n] ={10,20,30,40,50,60,70,80,90,100};

  for(int i = 0; i < n; i++){
    cout<<arr[i]<<endl;
    // cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
  }


}