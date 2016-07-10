//
//  sameFirstLast.cpp
//  PracticeQuestions3
//
//  Created by Sharmyn Kayani on 10/07/2016.
//  Copyright © 2016 Sharmyn Kayani. All rights reserved.
//

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
