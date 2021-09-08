#include <stdio.h>
#include <stdlib.h>
//#include <ncurses.h>


void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}
int hakur()
{
	  red();
  printf("Hello ");
  yellow();
  printf("hakur!!\n");
  reset();
  return 0;
}
void vuln()
{
    char rock[290];

    printf("eat some %p!\n", rock);
    gets(rock);
}

int main()
{
    setvbuf(stdout,_IONBF,0,0);
    hakur();
    vuln();
}
