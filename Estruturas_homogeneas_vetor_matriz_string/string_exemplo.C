#include <stdio.h>
int main()
{
  char texto[10];
  texto[0] = 'b';
  texto[1] = 'o';
  texto[2] = 'a';
  texto[3] = ' ';
  texto[4] = 't';
  texto[5] = 'a';
  texto[6] = 'r';
  texto[7] = 'd';
  texto[8] = 'e';
  texto[9] = '\0';
  printf("%s ", texto);
  return 0;
}