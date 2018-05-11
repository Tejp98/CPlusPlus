//
//  PointerToFunctions.cpp
//  ArrayOfPointers
//
//  Created by Tej Patel on 11/05/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//

#include <iostream>
typedef void (*functionPtr)(int,int);
using namespace std;
void add(int input1, int input2){
    
    cout << "\n Addition is\t" << input1+input2;
    
}

void multiply(int input1, int input2){
    
    cout << "\n Multiplication is\t" << input1*input2;
    
}

int main(){
    functionPtr pointer;
    pointer = &add;
    pointer(5,6);
    pointer = &multiply;
    pointer(5,6);
    
    return 0;
}
