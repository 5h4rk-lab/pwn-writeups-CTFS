#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>

struct data {
  char name[64];
};

struct pointer {
  int (*pointer)();
};

void win()
{
  system("/bin/bash");
}

void loose()
{
  printf("you need to work on your heap skills mate.\n");
}

int main(int argc, char **argv)
{
  struct data *d;
  struct pointer *f;

  d = malloc(sizeof(struct data));
  f = malloc(sizeof(struct pointer));
  f->pointer = loose;

  printf("data is at %p, pointer is at %p\n", d, f);

  strcpy(d->name, argv[1]);
  
  f->pointer();
}

