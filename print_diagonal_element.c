#include <stdio.h>

int main(void) {
  int ar[3][3],r,c;
printf("Enter the Matrix Elelments : ");

  for(r=0;r<3;r++){
    for(c=0;c<3;c++){
      scanf("%d",&ar[r][c]);
    }
  }
  for(r=0;r<3;r++){
    for(c=0;c<3;c++){
      if(r==c){
        printf("%5d",ar[r][c]);
      }
      printf("\n");
    }
  }
  printf("Hello World\n");
  return 0;
}
