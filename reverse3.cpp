//
//  reverse3.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 10/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  Given an array of ints length 3, return a new array with the elements in
//  reverse order, so {1, 2, 3} becomes {3, 2, 1}.
//  reverse3([1, 2, 3]) → [3, 2, 1]

#include <iostream>
using namespace std;

int main() {
    int arr[3];
    srand(time(0));
    int temp;
    
    for (int i = 0; i < 3; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    
    temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;
    
    cout << endl;
    cout << "The reversed array is: " << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
