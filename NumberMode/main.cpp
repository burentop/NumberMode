//
//  main.cpp
//  NumberMode
//
//  Created by Brent Perry on 7/10/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<int> user_input;
    int current_mode;
    int running_count = 0;
    int count_of_mode = 0;
    
    while (!cin.fail()) {
        int to_input;
        cout << "Please enter a whole number (enter '|' to quit): ";
        cin >> to_input;
        user_input.push_back(to_input);
        cout << "\n";
    }
    
    sort(user_input);
    current_mode = user_input[0];
    running_count = 1;
    
    for (int i = 1; i < user_input.size(); ++i) {
        if (user_input[i] == user_input[i - 1]) {
            ++running_count;
        } else {
            running_count = 1;
        }
        
        if (running_count > count_of_mode) {
            current_mode = user_input[i];
            count_of_mode = running_count;
        }
    }
    
    cout << "The mode of the numbers you entered is " << current_mode << ".\n";
    cout << "\n";
    
}
