#include <iostream>
#include <stdio.h>
#include "Operand.hpp"
#include "Operator.hpp"
#include "Utility.hpp"

#define debug(x)\
cout << "line " << x << endl 
#define USE_FILE 1

using namespace std;

bool doesOneLine(FILE* file = NULL){
  bool quit = false;
  int column = 0;
  Operand  a(column, file);
  Operator o(column, file);
  Operand  b(column, file);
  quit = a.perform(b, o) == QUIT;
  a.outputResult();
  return quit;
}

void closeFile(FILE*& file) {
  if(file != NULL) {
    fclose(file);
    file = NULL;
  }
}

int main() {
  bool quit = false;
    printWorkingFolder();
#if defined USE_FILE
  FILE *file = fopen("Complement.txt", "r");
  if(file != NULL){
    cout << "Complement.txt" << endl;
    while(!quit){
      quit = doesOneLine(file);
    }
  }
#endif //USE_FILE
  closeFile(file);
  quit = false;
  while (!quit){
    cout << ">>>>>>>>>" << endl;
    quit = doesOneLine(stdin);
  }
}
