#ifndef _CALCULATOR_HPP_
#define _CALCULATOR_HPP_ 1
using namespace std;

inline int skipSpaces(char& c, FILE* file = stdin) {
  int i = 0;
  /*for(;(j = getchar())!= EOF && (isspace(j)); i++) c = j;
  return j == EOF? EOF : i;
  for(;isspace(c = getchar()); i++);*/
  c = getc(file);
  if(c == EOF)return EOF;
  while(c != EOF && isspace(c)){
    c = getc(file);
    i++;
  }
  return c != EOF ? i : EOF;
}
#endif // _CALCULATOR_HPP_
