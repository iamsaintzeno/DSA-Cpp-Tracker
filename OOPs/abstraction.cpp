// hiding sensitive detail showing important too

// access modifiers
// #include<iostream>
// using namespace std;

// class Parent{
// private :
//     float salary ;
// public :
//     string name ;
// protected :
//     int id  ;
// };

// class Child : public Parent {
// public :
//     int cid ;
//     void getInfo(int id){
//         this -> id = id ;
//         this -> cid = id ;
//         cout << cid << endl ;
//     }
// };
                 
// int main() {
//     Child c1 ;
//     c1.getInfo(122);        
//     return 0;
// }

// abstract class

#include<iostream>
using namespace std;

class Shape { // automatic abstract class
public :
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape{
public :
    void draw(){
        cout << "Drawing of Circle" << endl ;
    }
};
                 
int main() {
    Circle c1 ;
    c1.draw() ;        
    return 0;
}