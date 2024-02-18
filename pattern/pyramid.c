#include<stdio.h>

int main(){
  int i,j,k,n;
  
  printf("Enter num: ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(k=0;k<n-i;k++){
      printf(" "); 
    }

    /* for(k=5-i;k>0;k--){ */
    /*   printf(" ");  */
    /* } */

    for(j=0;j<=i;j++){
      printf("* ");
    }
    printf("\n");
  }
  
  for(i=0;i<n;i++){
    for(k=0;k<=i;k++){
      printf(" ");
    }
    for(j=n-i;j>0;j--){
      printf("* ");
    }
    printf("\n");
  } 


  return 0;
}
