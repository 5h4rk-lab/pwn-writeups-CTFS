#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
void win(void) {

    system("/bin/sh");

}

void init() {

  setvbuf(stdin,0,2,0);
  setvbuf(stdout,0,2,0);
  setvbuf(stderr,0,2,0);

}

void vuln() {

    char buf[100];

    for(int i=0;i<2;i++){

        read(0, buf, 0x200);

        printf(buf);

    }

}

int main(void) {

    init();

    puts("can you bypass me???");

vuln ();
    return 0;
}

