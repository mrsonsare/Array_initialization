#include <stdio.h>

int main(void) {
  int ar[3][3],r,c;
printf("Enter the Matrix Elelments : ");

  for(r=0;r<3;r++){
    for(c=0;c<3;c++){
      scanf("%d",&ar[r][c]);
    }
    
  }

  printf("The Matrix is :\n");

  for(r=0;r<3;r++){
    for(c=0;c<3;c++){
      printf("%5d",ar[r][c]);
    }
    printf("\n\n");
  }

  printf("The Upper Triangular Matrix is\n");
  for(r=0;r<3;r++){
    for(c=0;c<3;c++){
      if(r<=c)
      printf("%5d",ar[r][c]);
    }
    if(r<=c)
    printf("\n\n");
  }
  return 0;
}
