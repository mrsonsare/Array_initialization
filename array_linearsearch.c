#include <stdio.h>

int main(void) {
  int i,ar[500],n,j,f = 0;
  printf("Enter the Limit :");
  scanf("%d",&n);
  printf("Enter the Arrays :");
  for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
  }
  printf("Search the Number :");
   scanf("%d",&j);
  for(i =0;i<n;i++){
    if(ar[i]== j){
       
      f =1;
      break;
    }
  }
  if(f==1){
    printf(" We had success");
  }
  else{
    printf("We had Not Succed");
  } 
  return 0;
}
