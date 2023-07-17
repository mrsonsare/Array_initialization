#include <stdio.h>

int main(void) {
 int ar[500],n;
  printf("Enter the limt :");
  scanf("%d",&n);
  printf("Enter the Element :");
  for(int i =0;i<n;i++){
    scanf("%d",&ar[i]);
  }
  for(int i =0;i<n;i++){
    printf("%d\n",ar[i]);
  }  
  return 0;
}
