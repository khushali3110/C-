// uniary operator

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     a++;
//     cout<<a<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     ++a;
//     cout<<a<<endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     a--;
//     cout<<a<<endl;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int a=10;
//     --a;
//     cout<<a<<endl;
// }

// arithmatic operator

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 10;
//     int b = 5;

//     cout << "Add: " << (a + b) << endl;  
//     cout << "Multi: " << (a * b) << endl;  
//     cout << "Sub: " << (a - b) << endl;  
//     cout << "Divide: " << (a / b) << endl;  
//     cout << "Remainder: " << (a % b) << endl;  

   

// }

// conditional statement if else

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;

//     if(a>b){
//         cout<<"A is greater than b";
//     }
//     else{
//         cout<<"B is greater than a";
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int fatima_age=25;
//     int khushi_age=20;

//     if (fatima_age<khushi_age)
//     {
//     cout<<"fatima age greater than khushi"<<endl;
//     }
//     else{
//         cout<<"khushi greater than fatima"<<endl;
//     }
// }

// else if

// #include <iostream>
// using namespace std;
// int main()
// {
//     int marks;
//     cout << "Enter Marks:";
//     cin >> marks;

//     if (marks >= 80 && marks <= 100)
//     {
//         cout << "grade A+" << endl;
//     }

//     else if (marks >= 70 && marks <= 80)
//     {
//         cout << "grade A" << endl;
//     }

//     else if (marks >= 60 && marks <= 70)
//     {
//         cout << "grade B+" << endl;
//     }

//     else if (marks >= 35 && marks <= 60)
//     {
//         cout << "grade B" << endl;
//     }

//     else
//     {
//         cout << "sorry,you are failed!";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int score;

//     cout << "Enter your score: ";
//     cin >> score;

//     if (score >= 90)
//     {
//         cout << "Grade: A" << endl;
//     }
//     else if (score >= 80)
//     {
//         cout << "Grade: B" << endl;
//     }

//     else if (score >= 70)
//     {
//         cout << "Grade: C" << endl;
//     }

//     else if (score >= 60) {
//         cout << "Grade: D" << endl;
//     }

//     else if(score >= 35)
//     {
//         cout << "Grade: F" << endl;
//     }

//     else {
//         cout << "sorry,you are fail" ;
//     }

//     return 0;
// }

// > hoy atle vadhre pr dhyan devu
// < hoy toh ocha pr dhyan devu


// Relation Operator

// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;

//     cout<< (a==b) <<endl;
//     cout<< (a!=b) <<endl;
//     cout<< (a>=b) <<endl;
//     cout<< (a<=b) <<endl;
//     cout<< (a>b) <<endl;
//     cout<< (a<b) <<endl;
// }

// logical operator && 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;

//     cout <<( (a==b) && (a>b)) <<endl;
//     cout << ((a!=b) && (c>a)) <<endl;
//     cout << ((a>=b) && (b>a)) <<endl;
//     cout << ((a<=b) && (b>c)) <<endl;
//     cout << ((a>b) && (c<a)) <<endl;
//     cout << ((a<b) && (a<=c))<<endl;  
// }

// Logical operator or ||

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;

//     cout << ((a==b) || (a>b)) <<endl;
//     cout << ((a!=b) || (c>a)) <<endl;
//     cout << ((a>=b) || (b>a)) <<endl;
//     cout << ((a<=b) || (b>c)) <<endl;
//     cout << ((a>b)  || (c<a)) <<endl;
//     cout << ((a<b)  || (a<=c))<<endl;  
// }

// Logical operator not !

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a=10;
//     int b=20;
//     int c=30;

//     cout <<!((a==b) || (a>b)) <<endl;
//     cout <<!((a!=b) || (c>a)) <<endl;
//     cout <<!((a>=b) || (b>a)) <<endl;
//     cout <<!((a<=b) || (b>c)) <<endl;
//     cout <<!((a>b)  || (c<a)) <<endl;
//     cout <<!((a<b)  || (a<=b))<<endl;  
// }

// assignment operator

#include <iostream>
using namespace std;

int main()
{
    int a=5;
    // a=10;
        a+=10;
    // a-=5;
    // a*=5;
    // a/=2;
    //   a%=2;

    cout<<a<<endl;
}

// Ternory operator

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=5;
//     int b=10;
//     (a>b) ? cout <<"A is greater!": cout <<"B is greater" ;

// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=50;
//     int b=100;
//     int c=30;
//     (a>b && a<c) ? cout <<"A is greater!": (b>a && b>c) ? cout <<"B is greater!" : cout<<"c is greater" ;

// }





