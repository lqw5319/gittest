#include <stdio.h>
#include <stdlib.h>



int main(int argc, char const *argv[]) {
  int *p;
   p = malloc(sizeof(int));
   int i=0;
     
while(1){
       printf("Value at address %p is %d\n",p, p[i]);
      p[i] = i*i;
i++;
     }

  return 0;
}
