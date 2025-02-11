// #include<iostream>
// using namespace std;
// // create class
// class Person{
// };
// int main(){
//     Person fatima;  // create object
// }

// public
// #include<iostream>
// using namespace std;
// // create class
// class Person{
//     // Access specifier
//     public :
//     //data member
//     string name;
//     int age;
//     // method
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };
// int main(){
//     Person f;  // create object
// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;
//     f.display();
// }

// ky j access ma nathi lakhyu atle defualt private lese private lese atle garbaje value avse private setter & getter thi thse

// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier

//     string name;
//     int age;
//     // method

//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){
//     Person f;  // create object

// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;

//     f.display();
// }

// public access
// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
//     // Access specifier
//     // private :
// public:
//     string name;
//     int age;
// };
// int main()
// {
//     Person f; // create object
//     // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;
//     // outside -> access
//     cout << "Name : " << f.name << endl;
//     cout << "Age : " << f.age << endl;
// }

// public value
// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier
//     // private :
//     // protected :
//     public :
//     string name;
//     int age;
// };

// int main(){
//     Person f;  // create object

// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;

// // outside -> access
//    cout<<"Name : "<<f.name<<endl;
//    cout<<"Age : "<<f.age<<endl;
// }

// insliztion nathi kryu atle garbej value lese
// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier
//     // private :
//     public :
//     string name;
//     int age;

// };

// int main(){
//     Person f;  // create object -> allocate memory to data member

// // outside -> access
//    cout<<"Name : "<<f.name<<endl;
//    cout<<"Age : "<<f.age<<endl;
// }

// Encapsulation
// getter and setter method

// #include <iostream>
// using namespace std;

// // create class
// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     // setter method
//     // this-> keyword
//     void setData(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     // multipl time use setter
//     void setData()
//     {
//         cout << "Aur setter bhai chal jawoge" << endl;
//     }

//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << this->name << endl;
//         cout << "Age : " << this->age << endl;
//     }
// };

// int main()
// {
//     Person f, j; // create object -> allocate memory to data member

//     f.setData("Fatima", 18);

//     f.setData();

//     f.getDetails();

//     j.setData("Janam", 11);

//     j.getDetails();
// }

// constructor in setter use nahi thay is sec way

// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     private :
//     string name;
//     int age;

//     public :
//     // constructor

//     Person(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){
//   Person p("Praksh",15);
//   p.getDetails();
// }

// Array of object -> 1. setter method

// #include<iostream>
// using namespace std;
// // create class
// class Person{
//     private :

//     string name;
//     int age;

//     public :
// // setter method
//    void setDetails(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }
// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

// };
// int main(){
//   Person p[2];

//     p[0].setDetails("Pawan", 24);
//     p[1].setDetails("Manish", 25);
//     p[0].getDetails();
//     p[1].getDetails();
// }

// Method : 2 -> constructor
// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     // constructor
//     Person(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person p[2] = {
//         Person("Pawan", 24),
//         Person("Manish", 25)};

//     cout << "Object first details : " << endl;
//     p[0].getDetails();
//     cout << "Object second details : " << endl;
//     p[1].getDetails();
// }

// Array Pointer Object : setter method
// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     // setter method
//     void setDetails(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person *p[2];
//     p[0] = new Person(); // allocate memory
//     p[1] = new Person(); // allocate memory
//     p[0]->setDetails("Pawan", 24);
//     p[1]->setDetails("Manish", 25);
//     p[0]->getDetails();
//     p[1]->getDetails();
// }

// delete allocate memory--> deallocate memory
// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     // setter method
//     void setDetails(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person *p[2];
//     p[0] = new Person(); // allocate memory
//     p[1] = new Person(); // allocate memory
//     p[0]->setDetails("Pawan", 24);
//     p[1]->setDetails("Manish", 25);
//     p[0]->getDetails();
//     p[1]->getDetails();

//     delete *p;  // deallocate memory
// }

// Array Pointer Object : constructor
// #include<iostream>
// using namespace std;
// // create class
// class Person{
//     protected :

//     string name;
//     int age;
//     public :

// // constructor
//  Person(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }
// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };
// int main(){
//   Person *p[2];
//     p[0] = new Person("Pawan", 24);  // allocate memory
//     p[1] = new Person("Manish", 25); // allocate memory
//     p[0]->getDetails();
//     p[1]->getDetails();
//     delete *p;  // deallocate memory
// }

// Scope Resolution Opeartor[::]
// #include <iostream>
// using namespace std;
// int a = 99;
// int main()
// {
//     int a = 10;
//     cout << "Local Value : " << a << endl;
//     cout << "Globle Value : " << ::a << endl;
// }

// Static Data member :
// #include<iostream>
// using namespace std;
// class Teacher{
//     public :
//       string name; // instance variable
//       int age; // instance variable
//       static double salary;  // class level variable
//     Teacher(){
//         this->name = "Raj";
//         this->age = 11;
//     }
//     Teacher(string name, int age){
//         this->name = name;
//         this->age = age;
//     }
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }
// };
// double Teacher::salary = 99;
// int main(){
//     Teacher t1;  // create object => allocate memory to non static data member => automic parameterless cunstructor called..

//     Teacher t2("Vraj",5);  // function call -> parameter constructor
//     t1.getDetails();
//     t2.getDetails();
// }

// Static member function
// #include <iostream>
// using namespace std;
// class Teacher
// {

// public:
//     static double salary; // class level variable
//     static void getDetails()
//     {
//         cout << "Salary : " << salary << endl;
//     }

// };
// double Teacher::salary = 99; // static data member initialiston
// int main()
// {
//     Teacher::getDetails();
// }

// constructor

// #include<iostream>
// using namespace std;
// class Teacher{

//     public :
//     Teacher(){
//         cout<<"Constructor Called..."<<endl;
//     }
// };

// int main(){
//     Teacher t1;  // automatic parameterless (default) constructor call
// }

// Destrutor
// #include<iostream>
// using namespace std;
// class Teacher{
//     public :
//     Teacher(){
//         cout<<"Constructor Called..."<<endl;
//     }
//     ~Teacher(){
//         cout<<"Destructor Called..."<<endl;
//     }
// };
// int main(){
//     Teacher t1;  // automatic parameterless (default) constructor call
// }

// deallocated ptr destructor

#include <iostream>
using namespace std;

class Teacher
{

public:
    static double salary; // class level variable
    int *ptr;

    Teacher()
    {
        cout << "Constructor Called..." << endl;
    }
    Teacher(int x)
    {
        ptr = new int;
        ptr = &x;
    }

    ~Teacher()
    {
        delete ptr;
    }

    void getDetails()
    {
        cout << "Value : " << *ptr << endl;
    }
};

int main()
{

    Teacher t1; // automatic parameterless (default) constructor call
    Teacher t2(10);
    t2.getDetails();
}
