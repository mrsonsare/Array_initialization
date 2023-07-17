#include <stdio.h>

int main(void) {
  int ar[500],temp,n,i,j;
  printf("Enter the Limit :");
  scanf("%d",&n);
  printf("Enter the Values of data :");
  for(i=0;i<n;i++)
      scanf("%d\n",&ar[i]);
  
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++){
      if(ar[j]<ar[i]){
        temp =ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        
      }
      
    }
  
  printf("ARRAY ARE SORTED\n");
  for(i =0;i<n;i++){
    printf("%d\n",ar[i]);
  }
  return 0;
}
