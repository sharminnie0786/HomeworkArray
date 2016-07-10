//
//  start1.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 10/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Start with 2 int arrays, a and b, of any length. Return how many of the arrays have 1 as their first element.
//  start1([1, 2, 3], [1, 3]) → 2

#include <iostream>
using namespace std;

int main() {
    
    int arr1[10];
    int arr2[10];
    srand(time(0));
    
    cout << "[ ";
    for(int i = 0; i < 10; i++) {
        arr1[i] = rand() % 5;
        cout << arr1[i] << " ";
    }
    cout << "] ";
    
    cout << endl;
    
    cout << "[ ";
    for (int i = 0; i < 10; i++) {
        arr2[i] = rand() % 5;
        cout << arr2[i] << " ";
    }
    cout << "] ";
    
    cout << endl;
    
    if (arr1[0] == 1 && arr2[0] == 1) {
        return 2;
    } else if (arr1[0] == 1 || arr2[2] == 1) {
        return 1;
    } else {
        return 0;
    }
    
}
