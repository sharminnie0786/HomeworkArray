//
//  double23.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 10/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//


#include <iostream>
using namespace std;

int main() {
    int arr[2];
    srand(time(0));

    for (int i = 0; i < 2; i++) {
        arr[i] = rand() % 5;
        cout << arr[i] << " ";
    }
    cout << endl;
    if (arr[0] == 2 && arr[1] == 2) {
        cout << "true" << endl;
    } else if (arr[0] == 1 && arr[1] == 1) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

  
    return 0;
}