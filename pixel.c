#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>

void RandomImage(char * file){
  int b = open(file, O_CREAT | O_WRONLY | O_RDONLY, 666);
  char string[5000000];
  strcat(string, "P3 500 500 255 ");
  
  int i;
  for(i = 0; i < 250000; i++){
    strcat(string, "0 255 0 ");
  }





  
  write(b, string, 5000000);

}

int main(){
  RandomImage("basic.ppm");
  return 0;

}
