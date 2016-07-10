//
//  frontPeice.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 10/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int arr[6];
    //Takes in values
    cout << "Please enter values: " << endl;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    //Displays values
    cout << "[ ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
    
    cout << endl;
    
    cout << "[ " << arr[0] << " " << arr[1] << " ]" << endl;
    
    return 0;
}