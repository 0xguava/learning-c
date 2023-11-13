#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, j, k, matB[3][3], matA[3][3];

  printf("Enter elements for 1st row of matrix A: ");
  for(i=0;i<3;i++){
    scanf("%d",&matA[0][i]);
  }
  printf("Enter elements for 2nd row of matrix A: ");
  for(i=0;i<3;i++){
    scanf("%d",&matA[1][i]);
  }
  printf("Enter elements for 3rd row of matrix A: ");
  for(i=0;i<3;i++){
    scanf("%d",&matA[2][i]);
  }

  system("clear");

  printf("Enter elements for 1st row of matrix B: ");
  for(i=0;i<3;i++){
    scanf("%d",&matB[0][i]);
  }
  printf("Enter elements for 2nd row of matrix B: ");
  for(i=0;i<3;i++){
    scanf("%d",&matB[1][i]);
  }
  printf("Enter elements for 3rd row of matrix B: ");
  for(i=0;i<3;i++){
    scanf("%d",&matB[2][i]);
  }

  system("clear");

  printf("The matrix A is:\t\t\tThe matrix B is:\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%d\t",matA[i][j]);
    }
    printf("\t\t");
    for(k=0;k<3;k++){
      printf("%d\t",matB[i][k]);
    }
    printf("\n");
  } 


  return 0;
}
