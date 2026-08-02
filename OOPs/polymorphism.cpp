// ability to behave according to context 
// eg constructor overloading 

// #include<iostream>
// using namespace std;

// class Student  {
// public :
//     string name ; 
//     int rollNo ;

//     Student(){
//         cout << "Non Parameterized Constructor " << endl ;
//     }

//     Student(string name){
//         this -> name = name ;
//         cout << "Parameterized Constructor" << endl ;
//     }
// };
                 
// int main() {
//     Student s1("Rushi") ;
//     cout << s1.name << endl ;
//     return 0;
// }


// function overloading 
// #include<iostream>
// using namespace std;

// class Print {
// public :
//     void show(int x){
//         cout << "O/P Int : " << x ;
//     }
//     void show(char a){
//         cout << "O/P Char : " << a ;
//     }
// };
                 
// int main() {
//     Print p1 ;
//     p1.show('&') ;       
//     return 0;
// }

// operator overloading 
// #include<iostream>
// #include<string>
// using namespace std;

// class Print {
// public :
//     string name ;
//     string subject ;

//     string sum(string name , string subject){
//         return name+subject;
//     }
    
// };
                 
// int main() {
//     Print p1 ;
//     cout << p1.sum("Rushi","Maths") << endl;       
//     return 0;
// }

// Run time - Over riding 

// #include<iostream>
// using namespace std;

// class Pearson {
// public :
//     string name ;
//     int age ;

//     void show(){
//         // cout << name << endl ;
//         // cout << age << endl ;
//         cout << "Parent Class Function" << endl ;
//     }

// };

// class Student : public Pearson  {
// public :
//     int rollNo ;

//     void show(){
//         cout << "Studnet Class Function" << endl ;
//     }
// };
                 
// int main() {
//     Student s1 ;
//     s1.show() ;
//     // Pearson p1 ;
//     // p1.show() ;      
//     return 0;
// }

// Virtual function 

// #include<iostream>
// using namespace std;

// class Pearson {
// public :
//     string name ;
//     int age ;

//     void show(){
//         // cout << name << endl ;
//         // cout << age << endl ;
//         cout << "Parent Class Function" << endl ;
//     }

//     virtual void hello(){
//         cout << "Hello From Parent " << endl ;
//     }

// };

// class Student : public Pearson  {
// public :
//     int rollNo ;

//     void show(){
//         cout << "Studnet Class Function" << endl ;
//     }

//     void hello(){
//         cout << "Hello from Child" << endl ;
//     }
// };
                 
// int main() {
//     Student s1 ;
//     s1.show() ;
//     s1.hello() ;     
//     return 0;
// }