//
//  main.cpp
//  Array
//
//  Created by Tej Patel on 23/01/18.
//  Copyright © 2018 Tej Patel. All rights reserved.
//




#include <iostream>
using namespace std;

int main() {
    
    int array[2][2];
    
    
    cout << "Enter elements for a 2*2 array\n";
    
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
            cin >> array[i][j];
    }
    
    cout << " Elements of array are\n";
    
    
    for(int x=0; x<2; x++)
    {
        for(int y=0; y<2; y++)
        {
            cout << "\t" << array[x][y];
        }
        cout << "\n";
    }
    return 0;
}
