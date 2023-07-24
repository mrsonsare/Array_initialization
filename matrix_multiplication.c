#include <stdio.h>

int main(void) {

int a1[50][50],a2[50][50],r,c,m,n; 
  printf("Enter the Limit :");
  scanf("%d%d",&m,&n);
  printf("\nEnter the Elements of A1 Matrix :");
  for(r=0;r<m;r++){
    for(c=0;c<n;c++){
      scanf("%d",&a1[r][c]);
    }
  }
  
  printf("\nEnter the Elements of A2 Matrix :");
  for(r=0;r<m;r++){
    for(c=0;c<n;c++){
      scanf("%d",&a2[r][c]);
    }
  }
  printf("A1 Matrix :\n");
  for(r=0;r<m;r++){
    for(c=0;c<n;c++){
      printf("%5d",a1[r][c]);
    }
    printf("\n\n");
  }   
  printf("A2 Matrix :\n");
  for(r=0;r<m;r++){
    for(c=0;c<n;c++){
      printf("%5d",a2[r][c]);
    }
    printf("\n\n");
  }   

  printf("Multiplication Of A1 and A2 Matrix :\n");
  for(r=0;r<m;r++){
    for(c=0;c<n;c++){
      printf("%5d",a1[r][c]*a2[r][c]);
    }
    printf("\n\n");
  }   
  
  return 0;
}
