//
//  main.cpp
//  VirtualFunction
//
//  Created by Tej Patel on 11/05/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>

using namespace std;

class Base{
public:
    void display(){ cout <<"\n Display Base\n";}
    virtual void show(){ cout <<"\n Show Base\n";}
    
};
class Derived : public Base {
public:
    void display(){ cout <<"\n Display Derived\n";}
    void show(){ cout <<"\n Show Derived\n";}
    
};



int main() {
    Base base1;
    Base *pointer;
    Derived derived1;
    pointer = &base1;
    pointer -> display();
    pointer ->show();
    pointer = &derived1;
    pointer -> display();
    pointer -> show();
    
    return 0;
}
