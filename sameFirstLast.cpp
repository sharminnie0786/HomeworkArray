//
//  sameFirstLast.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 10/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//
//  This was the original questions:
// Given an array of ints, return true if the array is length 1 or more, and the first element and the last element are equal.
// sameFirstLast([1, 2, 3]) → false
// SHARMYN's COMMENT
// However, the only way I thought it possible to check if the array existed was to check the first element an whether it is not zero.
// This is because I have declared the size of the array and fed in the values, and I know that the first element can be 
// zero so I was a bit confused with what else I can do. 

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    srand(time(0));
    
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    if ((arr[0] != 0) && (arr[0] == arr[9])) {
        cout << "true" << endl;
        return 1;
    } else {
        cout << "false" << endl;
        return 0;
    }
}
