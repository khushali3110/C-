// // ****
// // ****
// // ****
// // ****
// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){

//         // inner loop -> cols

//         for(int col = 1; col<=4; col++){

//             cout<<"*";
//         }

//         cout<<endl;

//     }
// }

// // ****
// // *  *
// // *  *
// // ****
// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){

//         // inner loop -> cols

//         for(int col = 1; col<=4; col++){

//             if((row == 2 || row == 3) && (col == 2 || col == 3)){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }

//         cout<<endl;
//     }
// }

// // ****
// //  ****
// //   ****
// //    ****
// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){

//         // space

//         for(int space = 1; space < row; space++){
//             cout<<" ";
//         }

//         // star

//         for(int star = 1; star<=4; star++){

//         cout<<"*";

//         }

//         cout<<endl;

//     }
// }

//     ****
//    ****
//   ****
//  ****
// #include<iostream>
// using namespace std;

// int main(){

//          // row
//     for(int row = 1; row <= 4; row++){

//         // space

//         for(int space = 1; space <= 4-row; space++){
//             cout<<" ";
//         }

//         // star

//         for(int star = 1; star <= 4; star++){
//             cout<<"*";
//         }

//         cout<<endl;

//     }
// }

// // *
// // **
// // ***
// // ****
// #include<iostream>

// using namespace std;

// int main(){

//          // row
//      for(int row = 1; row <= 4; row++){

//         // star

//         for(int star = 1; star <= row; star++){
//             cout<<"*";
//         }

//         cout<<endl;

//     }
// }

// //    *
// //   ***
// //  *****
// // *******
// #include<iostream>
// using namespace std;
// int main(){

//     //row

//     for (int i =1; i<=4;i++){

//         // space
//         for(int j=1; j<=4-i; j++){
//             cout<<" ";
//         }

//         //star

//         for(int j=1; j<=2*i-1; j++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // ******
// // ******
// // ******
// // ******
// #include <iostream>
// using namespace std;
// int main(){
//     for(int row=1; row<=4; row++){
//         for(int colum=1; colum<=6; colum++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ******
// *    *
// *    *
// ******
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1; i<=4; i++){

//         if(i==2 || i==3){
//             cout<<"*    *";
//         }
//         else{
//             cout<<"******";
//         }

//         cout<<endl;
//     }
// }

// //    *
// //   * *
// //  *   *
// // *******
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     // Loop through rows
//     for (int i = 1; i <= n; i++) {

//         // Print leading spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Print stars and spaces
//         for (int j = 1; j <= (2 * i - 1); j++) {

//             if (i == n) {
//                 cout << "*";  // Last row: full stars
//             } else {
//                 if (j == 1 || j == (2 * i - 1)) {
//                     cout << "*";  // Borders: print stars
//                 } else {
//                     cout << " ";  // Hollow space between stars
//                 }
//             }
//         }

//         cout << endl;
//     }
// }

// //  ******
// //   ******
// //    ******
// //     ******
// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){

//         // space

//         for(int space = 1; space <= row; space++){
//             cout<<" ";
//         }

//         // star

//         for(int star = 1; star<=6; star++){

//         cout<<"*";

//         }

//         cout<<endl;

//     }
// }

// *******
//  *****
//   ***
//    *
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int row = 1; row <= 4; row++)
//     {
//         // space
//         for (int space = 1; space <= row - 1; space++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int star = 7; star >= 2 * row - 1; star--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
 
// *******
//  *   *
//   * *
//    *
// #include <iostream>
// using namespace std;
// int main()
// {
//     // row
//     for (int i = 1; i <= 4; i++)
//     {
//         // space
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 7; j >= 2 * i - 1; j--)
//         {
//             if (i == 1 || j == 1 || j == (2 * i - 1))
//             {
//                 cout << "*";
//             }
//             else if(i==1||j==7){
//                 cout<<"*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 4; i++) //i is for row
    
//     {
//         for (int space = 1; space <= i - 1; space++) //for space
//         {
//             cout << " ";
//         }
//         for (int j = 7; j >= 2 * i - 1; j--) //j is for coloumn or star
//         {
        
//             if (i == 1|| j==7 || j == (2 * i - 1))
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout <<" ";
//             }
//         }
//         cout <<endl;
//         }
// }




