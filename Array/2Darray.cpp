// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int arr[row_size][col_size];

// // manually input
//     arr[0][0] = 11 ;
//     arr[0][1] = 22;
//     arr[0][2] = 44;
//     arr[0][3] = 45;
//     arr[1][0] = 14;
//     arr[1][1] = 63;
//     arr[1][2] = 58;
//     arr[1][3] = 79;
//     arr[2][0] = 47;
//     arr[2][1] = 58;
//     arr[2][2] = 79;
//     arr[2][3] = 20;
// // manually print
//     cout<<arr[0][0]<<" ";
//     cout<<arr[0][1]<<" ";
//     cout<<arr[0][2]<<" ";
//     cout<<arr[0][3]<<endl;
//     cout<<arr[1][0]<<" ";
//     cout<<arr[1][1]<<" ";
//     cout<<arr[1][2]<<" ";
//     cout<<arr[1][3]<<endl;
//     cout<<arr[2][0]<<" ";
//     cout<<arr[2][1]<<" ";
//     cout<<arr[2][2]<<" ";
//     cout<<arr[2][3]<<" ";
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int arr[row_size][col_size];

// // manually input
//     arr[0][0] = 11;
//     arr[0][1] = 22;
//     arr[0][2] = 44;
//     arr[0][3] = 45;
//     arr[1][0] = 14;
//     arr[1][1] = 63;
//     arr[1][2] = 58;
//     arr[1][3] = 79;
//     arr[2][0] = 47;
//     arr[2][1] = 58;
//     arr[2][2] = 79;
//     arr[2][3] = 20;

// // loop -> print ->2d array


// // foreach -> not ok
//     // for(int element : arr){
//     //     cout<<element<<endl;
//     // }

//     // output

//     for(int i = 0; i < row_size; i++){

//         for(int j = 0; j < col_size; j++){

//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int arr[row_size][col_size];



//     for(int i = 0; i < row_size; i++){

//         for(int j = 0; j < col_size; j++){
//             cout<<"Row "<<i<<" index & Col "<<j<<" index :";
//            cin>>arr[i][j];
//         }
//         cout<<endl;
//     }

//     // output

//     for(int i = 0; i < row_size; i++){

//         for(int j = 0; j < col_size; j++){

//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// uesr input thi
#include<iostream>
using namespace std;

int main(){
    int row_size = 3;
    int col_size = 4;

    int arr[row_size][col_size];

    for(int i = 0; i < row_size; i++){

        for(int j = 0; j < col_size; j++){
            cout<<"Row "<<i<<" index & Col "<<j<<" index :";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    // output

    for(int i = 0; i < row_size; i++){

        for(int j = 0; j < col_size; j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}