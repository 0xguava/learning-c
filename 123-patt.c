#include<stdio.h>                                 

int main(){                                               
  int i,j,k,l;                                          
  int a=10,b=2;
  for(i=4;i>=1;i--){                                       
    for(j=1;j<=i;j++){      
      printf("%d",j);                                
    }                                       
    if(i==4){
      printf("321\n");
    }else{
      a=a-b;
      for(l=0;l<9-a;l++){
      printf(" ");
      }
      for(k=i;k>=1;k--){
      printf("%d",k);
      }
      printf("\n");                                     
    }

  }                                        
  return 0;                                 
}
