#include<stdio.h>

int main(){
  int i, j, n, matA[3][3], matB[3][3];
  char nm;
  
  for(n=0;n<2;n++){
    if(n==0){
      nm = 'A';
    } else {
      nm = 'B';
    }
    printf("Enter elements of matrix %c:\n",nm);
    for(i=0;i<3;i++){
      printf("\tEnter elements of row %d: ",i+1);
      for(j=0;j<3;j++){
        scanf("%d",&matB[i][j]);
      }
    }
    if(n==0){
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          matA[i][j] = matB[i][j];
          }
      }
    }else{
      continue;
    }
  }

  printf("Matrix A:\t\t\tMatrix B:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",matA[i][j]);
    }
    printf("\t\t");
    for(n=0;n<3;n++){
      printf("%d\t",matB[i][n]);
    }
    printf("\n");
  }

  return 0;
}
