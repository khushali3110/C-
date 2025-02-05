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