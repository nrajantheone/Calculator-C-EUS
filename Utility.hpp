//
//  Utility.hpp
//  C-Calculator
//
//  Created by Raj Rajan on 4/28/20.
//  Copyright © 2020 theCoderSchool-PaloAlto. All rights reserved.
//

#ifndef Utility_h
#define Utility_h
#include <unistd.h>
#include <iostream>

using namespace std;
const int MAX_FOLDER_SIZE = 512;

void printWorkingFolder() {
    char    buffer[MAX_FOLDER_SIZE] = {'\0'};
    if(getcwd(buffer, sizeof(buffer)) != NULL) {
        cout << "working directory: " << buffer << endl;
    }
}


#endif /* Utility_h */
