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

// #include <iostream>
// using namespace std;

// class Teacher
// {

// public:
//     static double salary; // class level variable
//     int *ptr;

//     Teacher()
//     {
//         cout << "Constructor Called..." << endl;
//     }
//     Teacher(int x)
//     {
//         ptr = new int;
//         ptr = &x;
//     }

//     ~Teacher()
//     {
//         delete ptr;
//     }

//     void getDetails()
//     {
//         cout << "Value : " << *ptr << endl;
//     }
// };

// int main()
// {

//     Teacher t1; // automatic parameterless (default) constructor call
//     Teacher t2(10);
//     t2.getDetails();
// }

// Way of Inheritance costak 741 sudhi:)
// public to public
// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// public:
//     int number;
// };
// // Derived Class
// class Car : public Vehical
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     Car c1;
//     c1.display();
// }

// // public to protected
// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{
//     public :
//     int number;

// };

// // Derived Class
// class Car : protected Vehical{

//    public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){

// Car c1;
// c1.display();
// }

// public to private
// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     public :
//     int number;

// };
// // Derived Class
// class Car : private Vehical{
// };
// class BMW : public Car{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// // Car c1;
// // c1.display();
// BMW b1;
// b1.display();
// }

// // protected to public
// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// protected:
//     int number;
// };
// // Derived Class
// class Car : public Vehical
// {
// };
// class BMW : public Car
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     // Car c1;
//     // c1.display();
//     BMW b1;
//     b1.display();
// }

// // protected to protected
// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     protected :
//     int number;

// };
// // Derived Class
// class Car : protected Vehical{
// };
// class BMW : public Car{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// // Car c1;
// // c1.display();
// BMW b1;
// b1.display();
// }

// protected to private
// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     protected :
//     int number;

// };
// // Derived Class
// class Car : private Vehical{
// };
// class BMW : public Car{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// // Car c1;
// // c1.display();
// BMW b1;
// b1.display();
// }

// // private to public
// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     private :
//     int number;

// };
// // Derived Class
// class Car : public Vehical{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// Car c1;
// c1.display();
// }

// // private to protected
// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     private :
//     int number;

// };
// // Derived Class
// class Car : protected Vehical{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// Car c1;
// c1.display();
// }

// private to private
// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     private :
//     int number;

// };
// // Derived Class
// class Car : private Vehical{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// Car c1;
// c1.display();
// }

// 5 types of inheritance
//  Single Inheritance
// #include <iostream>
// using namespace std;
// // Base class
// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };
// // Derived class
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };
// int main() {
//     Dog d;
//     d.eat();  // Inherited from Animal
//     d.bark();

// }

// Multiple Inheritance
// #include <iostream>
// using namespace std;
// // Base class 1
// class Person {
// public:
//     void speak() {
//         cout << "Speaking..." << endl;
//     }
// };
// // Base class 2
// class Employee {
// public:
//     void work() {
//         cout << "Working..." << endl;
//     }
// };
// // Derived class
// class Manager : public Person, public Employee {
// public:
//     void manage() {
//         cout << "Managing..." << endl;
//     }
// };
// int main() {
//     Manager m;
//     m.speak();
//     m.work();
//     m.manage();
//     return 0;
// }

// Multilevel Inheritance
// #include <iostream>
// using namespace std;
// // Base class
// class Vehicle {
// public:

//     void drive() {
//         cout << "Driving..." << endl;
//     }
// };
// // Derived class
// class Car : public Vehicle {
// public:
//     void honk() {
//         cout << "Honking..." << endl;
//     }
// };
// // Further derived class
// class SportsCar : public Car {
// public:
//     void turbo() {
//         cout << "Activating Turbo..." << endl;
//     }
// };
// int main() {
//     SportsCar sc;
//     sc.drive();
//     sc.honk();
//     sc.turbo();
//     return 0;
// }

//  Hierarchical Inheritance
// #include <iostream>
// using namespace std;
// // Base class
// class Shape {
// public:
//     void draw() {
//         cout << "Drawing Shape..." << endl;
//     }
// };
// // Derived class 1
// class Circle : public Shape {
// public:
//     void area() {
//         cout << "Calculating Circle Area..." << endl;
//     }
// };
// // Derived class 2
// class Square : public Shape {
// public:
//     void area() {
//         cout << "Calculating Square Area..." << endl;
//     }
// };
// int main() {
//     Circle c;
//     Square s;
//     c.draw();
//     c.area();
//     s.draw();
//     s.area();
//     return 0;
// }

//  Hybrid Inheritance
// #include <iostream>
// using namespace std;
// // Base class
// class Engine
// {
// public:
//     void start()
//     {
//         cout << "Engine started." << endl;
//     }
// };
// // Intermediate base class 1
// class Car : virtual public Engine
// {
// };
// // Intermediate base class 2
// class Boat : virtual public Engine
// {
// };
// // Derived class
// class AmphibiousVehicle : public Car, public Boat
// {
// public:
//     void transform()
//     {
//         cout << "Switching modes." << endl;
//     }
// };
// int main()
// {
//     AmphibiousVehicle av;
//     av.start(); // Inherited from Engine
//     av.transform();
//     return 0;
// }
