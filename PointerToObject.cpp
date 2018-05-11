//
//  main.cpp
//  PointerToObject
//
//  Created by Tej Patel on 11/05/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>

using namespace std;

class Student{
public:
    int rollNo;
    char name;
    
    void getinfo (int roll, char name1){
        rollNo = roll;
        name = name1;
}
    void displayinfo (){
        cout << "\n Roll No. is  " << rollNo;
        cout << "\n Name is " << name;
    }
};

int main() {
    
    
    Student *pointer = new Student[5];
    
    Student *pointer1 = pointer;
    int x;
    char y;
    
    for( int i=0; i<5; i++){
        cout << "\n Enter Roll No \n";
       
        cin >> x;
        cout << "\n Enter Name \n";
        
        cin >> y;
        
        pointer -> getinfo(x,y);
        pointer++;
    }
   
    for( int i=0; i<5s; i++){
        
        pointer1 -> displayinfo();
        pointer1++;
    }
    
    return 0;
}
