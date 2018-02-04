#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>

void RandomImage(char * file){
  int b = open(file, O_CREAT | O_WRONLY | O_RDONLY | O_APPEND, 888);

  write(b, "P3 500 500 255", sizeof("P3 500 500 255"));
  
  int i;
  for(i = 0; i < 250000; i++){
    write(b, "0 255 0", sizeof("0 255 0"));
  }





  
}

int main(){
  RandomImage("basic.ppm");
  return 0;

}
