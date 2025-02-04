// #include<iostream>
// using namespace std;
// // create class
// class Person{
// };
// int main(){
//     Person fatima;  // create object
// }



#include<iostream>
using namespace std;
// create class
class Person{
    // Access specifier
    public :
    //data member
    string name;
    int age;
    // method
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    Person f;  // create object
// insilization -> outide of class
    f.name = "Fatima Ji";
    f.age = 11;
    f.display();
}
